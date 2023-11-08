#include "Azafata.h"

Azafata::Azafata() :Tripulacion()
{
    nacionalidad = "No definido";
}

Azafata::Azafata(string ced, string nom, int ed, string nacionali) :Tripulacion(ced, nom, ed)
{
    nacionalidad = nacionali;
}

Azafata::~Azafata()
{
}

void Azafata::setNacionalidad(string nacionali)
{
    nacionalidad = nacionali;
}

string Azafata::getNacionalidad()
{
    return nacionalidad;
}

string Azafata::toString()
{
    stringstream s;

    s << "-----------------AZAFATA-----------------" << endl;
    s << "Cedula: " << cedula << endl;
    s << "Nombre: " << nombre << endl;
    s << "Edad: " << edad << endl;
    s << "Nacionalidad: " << nacionalidad << endl;

    return s.str();
}