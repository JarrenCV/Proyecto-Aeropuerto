#include "Avion.h"

Avion::Avion()
{
    fechaCreacion = NULL;
    distanciaRecorrida = 0;
    categoria = "";
    tipoAvion = "";
}

Avion::Avion(Fecha& fC, double dR, string categ, string tipoA)
{
    fechaCreacion = (Fecha*)&fC;
    distanciaRecorrida = dR;
    categoria = categ;
    tipoAvion = tipoA;
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

void Avion::setCategoria(string categ)
{
    categoria = categ;
}

void Avion::setTipoAvion(string tipoA)
{
    tipoAvion = tipoA;
}

Fecha* Avion::getFecha()
{
    return fechaCreacion;
}

double Avion::getDistanciaRecorrida()
{
    return distanciaRecorrida;
}

string Avion::getCategoria()
{
    return categoria;
}

string Avion::getTipoAvion()
{
    return tipoAvion;
}
