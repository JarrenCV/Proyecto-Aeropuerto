#include "Plaza.h"

Plaza::Plaza()
{
    codigoPlaza = "0000";
    nombrePuesto = "Sin definir";
    tomada = false;
}

Plaza::Plaza(string cP, string nP,bool tm)
{
    codigoPlaza = cP;
    nombrePuesto = nP;
    tomada = tm;
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

string Plaza::toString()
{
    stringstream s;
    s << "Plaza: " << codigoPlaza << endl
        << "Nombre de puesto: " << nombrePuesto << endl
        << "Disponibilidad de plaza: ";
    if (tomada == false)
        s << "Ocupada" << endl;
    else
        s << "Disponible" << endl;

    return s.str();
}
