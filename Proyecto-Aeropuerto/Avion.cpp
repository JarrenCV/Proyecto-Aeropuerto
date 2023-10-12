#include "Avion.h"

Avion::Avion()
{
}

Avion::Avion(Fecha&, double)
{
}

Avion::~Avion()
{
}

void Avion::setFecha(int d, int m, int a)
{
    fechaCreacion->setDia(d);
    fechaCreacion->setMes(m);
    fechaCreacion->setAnio(a);
}

void Avion::setDistanciaRecorrida(double dR)
{
    distanciaRecorrida = dR;
}

Fecha* Avion::getFecha()
{
    return fechaCreacion;
}

double Avion::getDistanciaRecorrida()
{
    return distanciaRecorrida;
}
