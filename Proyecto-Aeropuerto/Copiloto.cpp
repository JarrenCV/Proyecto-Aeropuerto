#include "Copiloto.h"

Copiloto::Copiloto() :Tripulacion()
{
    telefono = "No definido";
}

Copiloto::Copiloto(string ced, string nom, int ed, string telef) :Tripulacion(ced, nom, ed)
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

void Copiloto::setNacionalidad(string s)
{
}

string Copiloto::getNacionalidad()
{
    return "-1";
}

string Copiloto::reportePilotos()
{
    cout << "Aquí no hay pilotos";
    return "";
}

void Copiloto::setAniosExperiencia(int s)
{
}

int Copiloto::getAniosExperiencia()
{
    return -1;
}

void Copiloto::setLabor(string s)
{
}

string Copiloto::getLabor()
{
    return "-1";
}

void Copiloto::setTituloUniversitario(string s)
{
}

string Copiloto::getTituloUniversitario()
{
    return "-1";
}

void Copiloto::setGradoEscolaridad(string s)
{
}

string Copiloto::getGradoEscolaridad()
{
    return "-1";
}

string Copiloto::toString()
{
    stringstream s;

    s << "-----------------COPILOTO-----------------" << endl;
    s << "Cedula: " << cedula << endl;
    s << "Nombre: " << nombre << endl;
    s << "Edad: " << edad << endl;
    s << "Numero de telefono: " << telefono << endl;

    return s.str();
}
