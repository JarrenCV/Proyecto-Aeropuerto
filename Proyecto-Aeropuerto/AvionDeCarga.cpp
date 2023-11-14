#include "AvionDeCarga.h"

AvionDeCarga::AvionDeCarga():AviacionCivil()
{
    alturaPuerta = 0;
    anchuraPuerta = 0;
}

AvionDeCarga::AvionDeCarga(Fecha& fC, double dR, string cat, string nP, double altP, double anchP) :AviacionCivil(fC, dR, cat, nP)
{
    alturaPuerta = altP;
    anchuraPuerta = anchP;
    tipoAvion = 2;
}

AvionDeCarga::~AvionDeCarga()
{
}

int AvionDeCarga::getTipoAvion()
{
    return 2;
}

double AvionDeCarga::getAreaCarga()
{
    return alturaPuerta*anchuraPuerta;
}

string AvionDeCarga::tripulacionDeAvionComercial()
{
    return "";
}

void AvionDeCarga::setAlturaPuerta(double altP)
{
    alturaPuerta = altP;
}

void AvionDeCarga::setAnchuraPuerta(double anchP)
{
    anchuraPuerta = anchP;
}

double AvionDeCarga::getAlturaPuerta()
{
    return alturaPuerta;
}

double AvionDeCarga::getAnchuraPuerta()
{
    return anchuraPuerta;
}

void AvionDeCarga::setVelocidadMaxima(double s)
{
}

double AvionDeCarga::getVelocidadMaxima()
{
    return -1;
}

string AvionDeCarga::reporteAvionMas20(Fecha& f)
{ 
    stringstream s;
    if (edadAvion(f))
    {
        if (piloto != NULL || copiloto != NULL) {
            cout << "----------------Informacion de la tripulaicion----------------" << endl;
            if (piloto != NULL)
                cout << piloto->toString();
            if (copiloto != NULL)
                cout << copiloto->toString();
        }
        s << "---------------AVION DE CARGA---------------" << endl;
        s << "Nombre del avion: " << TablaAviones::nombre(categoria);
        s << "Categoria: " << categoria << endl;
        s << "Fecha de creacion: " << fechaCreacion->toString() << endl;
        s << "Numero de placa: " << getNumeroPlaca() << endl;
        s << "Tipo de avion: " << tipoAvion << endl;
        s << "Distancia recorrida: " << distanciaRecorrida << " Km" << endl;
        s << "Altura de la puerta: " << alturaPuerta << " metros" << endl;
        s << "Anchura de la puerta: " << anchuraPuerta << " metros" << endl;
        s << "Capacidad de pasajeros: " << TablaAviones::pasajeros(categoria);
    }
    return s.str();
}

string AvionDeCarga::reporteSoloAviacion()
{
    stringstream s;
    s << "---------------AVION DE CARGA---------------" << endl;
    s << "Nombre del avion: " << TablaAviones::nombre(categoria);
    s << "Categoria: " << categoria << endl;
    s << "Fecha de creacion: " << fechaCreacion->toString() << endl;
    s << "Numero de placa: " << getNumeroPlaca() << endl;
    s << "Tipo de avion: " << tipoAvion << endl;
    s << "Distancia recorrida: " << distanciaRecorrida << " Km" << endl;
    s << "Altura de la puerta: " << alturaPuerta << " metros" << endl;
    s << "Anchura de la puerta: " << anchuraPuerta << " metros" << endl;
    s << "Capacidad de pasajeros: " << TablaAviones::pasajeros(categoria);
    return s.str();
}
void AvionDeCarga::save(ofstream& save)
{
    save << fechaCreacion->getDia() << " " << fechaCreacion->getMes() << " " << fechaCreacion->getAnio() << " " <<
        distanciaRecorrida << " " << categoria << " " << tipoAvion << " " << getNumeroPlaca() << " " << 
        alturaPuerta << " " << anchuraPuerta << endl;
}

void AvionDeCarga::read(ifstream& read)
{
    int dia, mes, anio;
    string numPlaca;
    Fecha* fechaC;
    read >> dia >> mes >> anio >> distanciaRecorrida >> categoria >> tipoAvion >> numPlaca >> alturaPuerta >> anchuraPuerta;

    fechaC = new Fecha(dia, mes, anio);
    this->fechaCreacion = fechaC;
    setNumeroPlaca(numPlaca);
}
string AvionDeCarga::toString()
{
    stringstream s;
    if (piloto != NULL || copiloto != NULL) {
        cout << "----------------Informacion de la tripulaicion----------------" << endl;
        if (piloto != NULL)
            cout << piloto->toString();
        if (copiloto != NULL)
            cout << copiloto->toString();
    }
    s << "---------------AVION DE CARGA---------------" << endl;
    s << "Nombre del avion: " << TablaAviones::nombre(categoria);
    s << "Categoria: " << categoria << endl;
    s << "Fecha de creacion: " << fechaCreacion->toString() << endl;
    s << "Numero de placa: " << getNumeroPlaca() << endl;
    s << "Tipo de avion: " << tipoAvion << endl;
    s << "Distancia recorrida: " << distanciaRecorrida << " Km" << endl;
    s << "Altura de la puerta: " << alturaPuerta << " metros" << endl;
    s << "Anchura de la puerta: " << anchuraPuerta << " metros" << endl;
    s << "Capacidad de pasajeros: " << TablaAviones::pasajeros(categoria); 

    return s.str();
}
