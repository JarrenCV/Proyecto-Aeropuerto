#include "AviacionCivil.h"

AviacionCivil::AviacionCivil():Avion()
{
    numeroPlaca = "No definido";
}

AviacionCivil::AviacionCivil(Fecha& fC, double dR, string categ, string nP) :Avion(fC, dR, categ)
{
    numeroPlaca = nP;
}

AviacionCivil::~AviacionCivil()
{
}

void AviacionCivil::setNumeroPlaca(string nP)
{
    numeroPlaca = nP;
}

string AviacionCivil::getNumeroPlaca()
{
    return numeroPlaca;
}