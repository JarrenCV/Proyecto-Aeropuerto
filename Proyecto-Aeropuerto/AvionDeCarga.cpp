#include "AvionDeCarga.h"

AvionDeCarga::AvionDeCarga():AviacionCivil()
{
    categoria = "No definida";
    alturaPuerta = 0;
    anchuraPuerta = 0;
}

AvionDeCarga::AvionDeCarga(Fecha& fC, double dR, string nP, string tA, string cat, double altP, double anchP) :AviacionCivil(fC, dR, nP, tA)
{
    categoria = cat;
    alturaPuerta = altP;
    anchuraPuerta = anchP;
}

AvionDeCarga::~AvionDeCarga()
{
}

void AvionDeCarga::setCategoria(string cat)
{
    categoria = cat;
}

void AvionDeCarga::setAlturaPuerta(double altP)
{
    alturaPuerta = altP;
}

void AvionDeCarga::setAnchuraPuerta(double anchP)
{
    anchuraPuerta = anchP;
}

string AvionDeCarga::getCategoria()
{
    return categoria;
}

double AvionDeCarga::getAlturaPuerta()
{
    return alturaPuerta;
}

double AvionDeCarga::getAnchuraPuerta()
{
    return anchuraPuerta;
}

string AvionDeCarga::toString()
{
    stringstream s;

    s << "---------------AVION DE CARGA---------------" << endl;
    s << "Categoria: " << categoria << endl;
    s << "Fecha de creacion: " << fechaCreacion->toString() << endl;
    s << "Numero de placa: " << getNumeroPlaca() << endl;
    s << "Tipo de avion: " << getTipoAvion() << endl;
    s << "Distancia recorrida: " << distanciaRecorrida << " Km" << endl;
    s << "Altura de la puerta: " << alturaPuerta << " metros" << endl;
    s << "Anchura de la puerta: " << anchuraPuerta << " metros" << endl;
    

    /*
    s << "Nombre del avion: " << TablaAComercial::nombre(categoria);
    s << "Capacidad de pasajeros: " << TablaAComercial::pasajeros(categoria);

    Preguntar si imprimir toda la info del avion
     */

    return s.str();
}
