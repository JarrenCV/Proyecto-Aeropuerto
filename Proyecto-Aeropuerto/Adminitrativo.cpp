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
