#include "AviacionMilitar.h"

AviacionMilitar::AviacionMilitar():Avion()
{
   
    velocidadMaxima = 0;
   
}

AviacionMilitar::AviacionMilitar(Fecha& fC, double dR, string cat, string tAvionMili, double vMax) :Avion(fC, dR, cat, tAvionMili)
{
    velocidadMaxima = vMax;
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

string AviacionMilitar::toString()
{
    stringstream s;

    s << "---------------AVION MILITAR---------------" << endl;
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