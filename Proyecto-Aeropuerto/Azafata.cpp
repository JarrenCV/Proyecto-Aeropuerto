#include "Azafata.h"

Azafata::Azafata() :Tripulacion()
{
    nacionalidad = "No definido";
}

Azafata::Azafata(string ced, string nom, int ed, Avion& avi, string nacionali) :Tripulacion(ced, nom, ed, avi)
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
    if (getAvion() != NULL) {
        s << "-------------AVION ASOCIADO-------------" << endl;
        s << getAvion()->toString();
    }
    s << "Nacionalidad: " << nacionalidad << endl;

    return s.str();
}