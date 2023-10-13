#include "AviacionCivil.h"

AviacionCivil::AviacionCivil():Avion()
{
    numeroPlaca = "No definido";
    tipoAvion = "No definido";
}

AviacionCivil::AviacionCivil(Fecha& fC, double dR, string nP, string tA) :Avion(fC, dR)
{
    numeroPlaca = nP;
    tipoAvion = tA;
}

AviacionCivil::~AviacionCivil()
{
}

void AviacionCivil::setNumeroPlaca(string nP)
{
    numeroPlaca = nP;
}

void AviacionCivil::setTipoAvion(string tA)
{
    tipoAvion = tA;
}

string AviacionCivil::getNumeroPlaca()
{
    return numeroPlaca;
}

string AviacionCivil::getTipoAvion()
{
    return tipoAvion;
}
