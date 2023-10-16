#include "Miscelaneo.h"

Miscelaneo::Miscelaneo() :Planta()
{
    gradoEscolaridad = "No definido";
}

Miscelaneo::Miscelaneo(string ced, string nom, int ed, string lab, string gradoEsc) :Planta(ced, nom, ed, lab)
{
    gradoEscolaridad = gradoEsc;
}

Miscelaneo::~Miscelaneo()
{
}

void Miscelaneo::setGradoEscolaridad(string gradoEsc)
{
    gradoEscolaridad = gradoEsc;
}

string Miscelaneo::getGradoEscolaridad()
{
    return gradoEscolaridad;
}

string Miscelaneo::toString()
{
    stringstream s;

    s << "-----------------MISCELANEO-----------------" << endl;
    s << "Cedula: " << cedula << endl;
    s << "Nombre: " << nombre << endl;
    s << "Edad: " << edad << endl;
    s << "Labor: " << getLabor() << endl;
    s << "Grado de escolaridad: " << gradoEscolaridad << endl;

    return s.str();
}
