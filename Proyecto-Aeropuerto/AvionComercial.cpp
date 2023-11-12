#include "AvionComercial.h"

AvionComercial::AvionComercial():AviacionCivil()
{
}

AvionComercial::AvionComercial(Fecha& fC, double dR, string cat, string nP):AviacionCivil(fC, dR, cat, nP)
{
    tipoAvion = 1;
}

AvionComercial::~AvionComercial()
{
}

double AvionComercial::getAreaCarga()
{
    return 0.0;
}

void AvionComercial::setAlturaPuerta(double s)
{
}

void AvionComercial::setAnchuraPuerta(double s)
{
}

double AvionComercial::getAlturaPuerta()
{
    return -1;
}

double AvionComercial::getAnchuraPuerta()
{
    return -1;
}

void AvionComercial::setVelocidadMaxima(double s)
{
}

double AvionComercial::getVelocidadMaxima()
{
    return -1;
}

string AvionComercial::tripulacionDeAvionComercial()
{
    stringstream s;

        if (piloto != NULL || copiloto != NULL || azafata != NULL) {
            s << "----------------Informacion de la tripulaicion----------------" << endl;
            if (piloto != NULL)
                s << piloto->toString();
            if (copiloto != NULL)
                s << copiloto->toString();
            if (azafata != NULL)
                s << azafata->toString();
        }
 
    return s.str();
}

string AvionComercial::reporteAvionMas20(Fecha& f)
{
    stringstream s;
    if (edadAvion(f)) {
        if (piloto != NULL || copiloto != NULL || azafata != NULL) {
            s << "----------------Informacion de la tripulaicion----------------" << endl;
            if (piloto != NULL)
                s << piloto->toString();
            if (copiloto != NULL)
                s << copiloto->toString();
            if (azafata != NULL)
                s << azafata->toString();
        }
        s << "---------------AVION COMERCIAL---------------" << endl;
        s << "Nombre del avion: " << TablaAviones::nombre(categoria);
        s << "Categoria: " << categoria << endl;
        s << "Fecha de creacion: " << fechaCreacion->toString() << endl;
        s << "Numero de placa: " << getNumeroPlaca() << endl;
        s << "Tipo de avion: " << getTipoAvion() << endl;
        s << "Distancia recorrida: " << distanciaRecorrida << " Km" << endl;
        s << "Capacidad de pasajeros: " << TablaAviones::pasajeros(categoria);

        return s.str();
    }
    return s.str();
}

string AvionComercial::reporteSoloAviacion()
{
    stringstream s;

    s << "---------------AVION COMERCIAL---------------" << endl;
    s << "Nombre del avion: " << TablaAviones::nombre(categoria);
    s << "Categoria: " << categoria << endl;
    s << "Fecha de creacion: " << fechaCreacion->toString() << endl;
    s << "Numero de placa: " << getNumeroPlaca() << endl;
    s << "Tipo de avion: " << getTipoAvion() << endl;
    s << "Distancia recorrida: " << distanciaRecorrida << " Km" << endl;
    s << "Capacidad de pasajeros: " << TablaAviones::pasajeros(categoria);

    return s.str();
}

string AvionComercial::toString()
{
    stringstream s;
    if (piloto != NULL|| copiloto != NULL || azafata != NULL) {
        s << "----------------Informacion de la tripulaicion----------------" << endl;
        if(piloto != NULL)
            s << piloto->toString();
        if (copiloto != NULL)
            s << copiloto->toString();
        if (azafata != NULL)
            s << azafata->toString();
    }
    s << "---------------AVION COMERCIAL---------------" << endl;
    s << "Nombre del avion: " << TablaAviones::nombre(categoria);
    s << "Categoria: " << categoria << endl;
    s << "Fecha de creacion: " << fechaCreacion->toString() << endl;
    s << "Numero de placa: " << getNumeroPlaca() << endl;
    s << "Tipo de avion: " << getTipoAvion() << endl;
    s << "Distancia recorrida: " << distanciaRecorrida << " Km" << endl;
    s << "Capacidad de pasajeros: " << TablaAviones::pasajeros(categoria);
   
    return s.str();
}
