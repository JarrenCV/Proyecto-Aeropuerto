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

string AvionDeCarga::toString()
{
    stringstream s;
    s << "---------------AVION DE CARGA---------------" << endl;
    if (piloto != NULL || copiloto != NULL) {
        cout << "----------------Informacion de la tripulaicion----------------" << endl;
        if (piloto != NULL)
            cout << piloto->toString();
        if (copiloto != NULL)
            cout << copiloto->toString();
    }
    s << "Categoria: " << categoria << endl;
    s << "Fecha de creacion: " << fechaCreacion->toString() << endl;
    s << "Numero de placa: " << getNumeroPlaca() << endl;
    s << "Tipo de avion: " << tipoAvion << endl;
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
