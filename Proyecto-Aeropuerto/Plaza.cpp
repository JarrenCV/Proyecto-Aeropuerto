#include "Plaza.h"

Plaza::Plaza()
{
    codigoPlaza = "0000";
    nombrePuesto = "Sin definir";
}

Plaza::Plaza(string cP, string nP)
{
    codigoPlaza = cP;
    nombrePuesto = nP;
}

Plaza::~Plaza()
{
}

void Plaza::setCodigoPlaza(string cP)
{
    codigoPlaza = cP;
}

void Plaza::setNombrePuesto(string nP)
{
    nombrePuesto = nP;
}

string Plaza::getCodigoPlaza()
{
    return codigoPlaza;
}

string Plaza::getNombrePuesto()
{
    return nombrePuesto;
}
