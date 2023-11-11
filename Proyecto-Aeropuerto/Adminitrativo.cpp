#include "Adminitrativo.h"

Adminitrativo::Adminitrativo() :Planta()
{
    tituloUniversitario = "No definido";
}

Adminitrativo::Adminitrativo(string ced, string nom, int ed, string lab, string tituloU) :Planta(ced, nom, ed, lab)
{
    tituloUniversitario = tituloU;
}

Adminitrativo::~Adminitrativo()
{
}

void Adminitrativo::setTituloUniversitario(string tituloU)
{
    tituloUniversitario = tituloU;
}

string Adminitrativo::getTituloUniversitario()
{
    return tituloUniversitario;
}

void Adminitrativo::setAniosExperiencia(int s)
{
}

int Adminitrativo::getAniosExperiencia()
{
    return -1;
}

void Adminitrativo::setTelefono(string s)
{
}

string Adminitrativo::getTelefono()
{
    return "-1";
}

void Adminitrativo::setNacionalidad(string s)
{
}

string Adminitrativo::getNacionalidad()
{
    return "-1";
}

void Adminitrativo::setLabor(string s)
{
}

string Adminitrativo::getLabor()
{
    return "-1";
}

void Adminitrativo::setGradoEscolaridad(string s)
{
}

string Adminitrativo::getGradoEscolaridad()
{
    return "-1";
}

string Adminitrativo::toString()
{
    stringstream s;

    s << "-----------------ADMINISTRATIVO-----------------" << endl;
    s << "Cedula: " << cedula << endl;
    s << "Nombre: " << nombre << endl;
    s << "Edad: " << edad << endl;
    s << "Labor: " << getLabor() << endl;
    s << "Titulo universitario: " << tituloUniversitario << endl;

    return s.str();
}
