#include "Avion.h"

Avion::Avion()
{
    fechaCreacion = NULL;
    distanciaRecorrida = 0;
    categoria = "";
    tipoAvion = 0;
    piloto = NULL;
    copiloto = NULL;
    azafata = NULL;
}

Avion::Avion(Fecha& fC, double dR, string categ)
{
    fechaCreacion = (Fecha*)&fC;
    distanciaRecorrida = dR;
    categoria = categ;
    piloto = NULL;
    copiloto = NULL;
    azafata = NULL;
}

Avion::~Avion()
{
    if (fechaCreacion != NULL) delete fechaCreacion;

    if (piloto != NULL) delete piloto;
    if (copiloto != NULL) delete copiloto;
    if (azafata != NULL) delete azafata;
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

void Avion::setTipoAvion(int tipoA)
{
    tipoAvion = tipoA;
}

void Avion::setPiloto(Empleado* pilot)
{
    piloto = pilot;
}

void Avion::setCopiloto(Empleado* copi)
{
    copiloto = copi;
}

void Avion::setAzafata(Empleado* azaf)
{
    azafata = azaf;
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

int Avion::getTipoAvion()
{
    return tipoAvion;
}

Empleado* Avion::getPiloto()
{
    return piloto;
}

Empleado* Avion::getCopiloto()
{
    return copiloto;
}

Empleado* Avion::getAzafata()
{
    return azafata;
}
