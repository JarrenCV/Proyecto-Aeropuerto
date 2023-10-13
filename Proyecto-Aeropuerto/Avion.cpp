#include "Avion.h"

Avion::Avion()
{
    fechaCreacion = NULL;
    distanciaRecorrida = 0;
}

Avion::Avion(Fecha& fC, double dR)
{
    fechaCreacion = (Fecha*)&fC;
    distanciaRecorrida = dR;
}

Avion::~Avion()
{
    if (fechaCreacion != NULL) delete fechaCreacion;
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
