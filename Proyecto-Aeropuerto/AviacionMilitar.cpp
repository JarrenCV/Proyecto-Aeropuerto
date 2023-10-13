#include "AviacionMilitar.h"

AviacionMilitar::AviacionMilitar():Avion()
{
    categoria = "No definida";
    velocidadMaxima = 0;
    tipoAvionMilitar = "No definido";
}

AviacionMilitar::AviacionMilitar(Fecha& fC, double dR, string cat, double vMax, string tAvionMili) :Avion(fC, dR)
{
    categoria = cat;
    velocidadMaxima = vMax;
    tipoAvionMilitar = tAvionMili;
}

AviacionMilitar::~AviacionMilitar()
{
}

void AviacionMilitar::setCategoria(string cat)
{
    categoria = cat;
}

void AviacionMilitar::setVelocidadMaxima(double vMax)
{
    velocidadMaxima = vMax;
}

void AviacionMilitar::setTipoAvionMilitar(string tAvionMili)
{
    tipoAvionMilitar = tAvionMili;
}

string AviacionMilitar::getCategoria()
{
    return categoria;
}

double AviacionMilitar::getVelocidadMaxima()
{
    return velocidadMaxima;
}

string AviacionMilitar::getTipoAvionMilitar()
{
    return tipoAvionMilitar;
}

string AviacionMilitar::toString()
{
    stringstream s;

    s << "---------------AVION MILITAR---------------" << endl;
    s << "Categoria: " << categoria << endl;
    s << "Fecha de creacion: " << fechaCreacion->toString() << endl;
    s << "Tipo de avion: " << tipoAvionMilitar << endl;
    s << "Distancia recorrida: " << distanciaRecorrida <<" Km" << endl;
    s << "Velocidad maxima: " << velocidadMaxima <<" Km/h" << endl;

    /*
   s << "Nombre del avion: " << TablaAComercial::nombre(categoria);
   s << "Capacidad de pasajeros: " << TablaAComercial::pasajeros(categoria);

   Preguntar si imprimir toda la info del avion
    */

    return s.str();
}