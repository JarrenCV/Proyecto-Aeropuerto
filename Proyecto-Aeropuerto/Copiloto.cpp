#include "Copiloto.h"

Copiloto::Copiloto() :Tripulacion()
{
    telefono = "No definido";
}

Copiloto::Copiloto(string ced, string nom, int ed, Avion& avi, string telef) :Tripulacion(ced, nom, ed, avi)
{
    telefono = telef;
}

Copiloto::~Copiloto()
{
}

void Copiloto::setTelefono(string telef)
{
    telefono = telef;
}

string Copiloto::getTelefono()
{
    return telefono;
}

string Copiloto::toString()
{
    stringstream s;

    s << "-----------------COPILOTO-----------------" << endl;
    s << "Cedula: " << cedula << endl;
    s << "Nombre: " << nombre << endl;
    s << "Edad: " << edad << endl;
    if (getAvion() != NULL) {
        s << "-------------AVION ASOCIADO-------------" << endl;
        s << getAvion()->toString();
    }
    s << "Numero de telefono: " << telefono << endl;

    return s.str();
}