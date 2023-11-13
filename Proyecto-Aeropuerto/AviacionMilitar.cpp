#include "AviacionMilitar.h"

AviacionMilitar::AviacionMilitar():Avion()
{
   
    velocidadMaxima = 0;
   
}

AviacionMilitar::AviacionMilitar(Fecha& fC, double dR, string cat, double vMax) : Avion(fC, dR, cat)
{
    velocidadMaxima = vMax;
    tipoAvion = 3;
}

AviacionMilitar::~AviacionMilitar()
{
}

int AviacionMilitar::getTipoAvion()
{
    return 3;
}

void AviacionMilitar::setVelocidadMaxima(double vMax)
{
    velocidadMaxima = vMax;
}

double AviacionMilitar::getVelocidadMaxima()
{
    return velocidadMaxima;
}

string AviacionMilitar::tripulacionDeAvionComercial()
{
    return "";
}

void AviacionMilitar::setNumeroPlaca(string s)
{
}

string AviacionMilitar::getNumeroPlaca()
{
    return "-1";
}

double AviacionMilitar::getAreaCarga()
{
    return 0.0;
}

void AviacionMilitar::setAlturaPuerta(double s)
{
}

void AviacionMilitar::setAnchuraPuerta(double s)
{
}

double AviacionMilitar::getAlturaPuerta()
{
    return -1;
}

double AviacionMilitar::getAnchuraPuerta()
{
    return -1;
}

string AviacionMilitar::reporteAvionMas20(Fecha& f)
{
    stringstream s;
    if (edadAvion(f))
    {
        if (piloto != NULL) {
            cout << "----------------Informacion de la tripulaicion----------------" << endl;
            cout << piloto->toString();
        }
        s << "---------------AVION MILITAR---------------" << endl;
        s << "Nombre del avion: " << TablaAviones::nombre(categoria);
        s << "Categoria: " << categoria << endl;
        s << "Fecha de creacion: " << fechaCreacion->toString() << endl;
        s << "Tipo de avion: " << tipoAvion << endl;
        s << "Distancia recorrida: " << distanciaRecorrida << " Km" << endl;
        s << "Velocidad maxima: " << velocidadMaxima << " Km/h" << endl;
        s << "Capacidad de pasajeros: " << TablaAviones::pasajeros(categoria) << endl;
    }
    return s.str();
}

string AviacionMilitar::reporteSoloAviacion()
{
    stringstream s;

    s << "---------------AVION MILITAR---------------" << endl;
    s << "Nombre del avion: " << TablaAviones::nombre(categoria);
    s << "Categoria: " << categoria << endl;
    s << "Fecha de creacion: " << fechaCreacion->toString() << endl;
    s << "Tipo de avion: " << tipoAvion << endl;
    s << "Distancia recorrida: " << distanciaRecorrida << " Km" << endl;
    s << "Velocidad maxima: " << velocidadMaxima << " Km/h" << endl;
    s << "Capacidad de pasajeros: " << TablaAviones::pasajeros(categoria) << endl;

    return s.str();
}

string AviacionMilitar::toString()
{
    stringstream s;
    s << "---------------AVION MILITAR---------------" << endl;
    if (piloto != NULL) {
        cout << "----------------Informacion de la tripulaicion----------------" << endl;
        cout << piloto->toString();
    }
    s << "---------------AVION MILITAR---------------" << endl;
    s << "Nombre del avion: " << TablaAviones::nombre(categoria);
    s << "Categoria: " << categoria << endl;
    s << "Fecha de creacion: " << fechaCreacion->toString() << endl;
    s << "Tipo de avion: " << tipoAvion << endl;
    s << "Distancia recorrida: " << distanciaRecorrida <<" Km" << endl;
    s << "Velocidad maxima: " << velocidadMaxima <<" Km/h" << endl;

    s << "Capacidad de pasajeros: " << TablaAviones::pasajeros(categoria) << endl;

    return s.str();
}