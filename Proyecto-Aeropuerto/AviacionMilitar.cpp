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

void AviacionMilitar::setVelocidadMaxima(double vMax)
{
    velocidadMaxima = vMax;
}

double AviacionMilitar::getVelocidadMaxima()
{
    return velocidadMaxima;
}

void AviacionMilitar::setNumeroPlaca(string s)
{
}

string AviacionMilitar::getNumeroPlaca()
{
    return "-1";
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

string AviacionMilitar::toString()
{
    stringstream s;
    s << "---------------AVION MILITAR---------------" << endl;
    if (piloto != NULL) {
        cout << "----------------Informacion de la tripulaicion----------------" << endl;
        cout << piloto->toString();
    }
    s << "Categoria: " << categoria << endl;
    s << "Fecha de creacion: " << fechaCreacion->toString() << endl;
    s << "Tipo de avion: " << tipoAvion << endl;
    s << "Distancia recorrida: " << distanciaRecorrida <<" Km" << endl;
    s << "Velocidad maxima: " << velocidadMaxima <<" Km/h" << endl;

    /*
   s << "Nombre del avion: " << TablaAComercial::nombre(categoria);
   s << "Capacidad de pasajeros: " << TablaAComercial::pasajeros(categoria);

   Preguntar si imprimir toda la info del avion
    */

    return s.str();
}