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

int Miscelaneo::getTipoEmpleado()
{
    return 5;
}

void Miscelaneo::setGradoEscolaridad(string gradoEsc)
{
    gradoEscolaridad = gradoEsc;
}

string Miscelaneo::getGradoEscolaridad()
{
    return gradoEscolaridad;
}

string Miscelaneo::reportePilotos()
{
    return "";
}

void Miscelaneo::setAniosExperiencia(int s)
{
}

int Miscelaneo::getAniosExperiencia()
{
    return -1;
}

void Miscelaneo::setTelefono(string s)
{
}

string Miscelaneo::getTelefono()
{
    return "-1";
}

void Miscelaneo::setNacionalidad(string s)
{
}

string Miscelaneo::getNacionalidad()
{
    return "-1";
}

void Miscelaneo::setLabor(string s)
{
}

string Miscelaneo::getLabor()
{
    return "-1";
}

void Miscelaneo::setTituloUniversitario(string s)
{
}

string Miscelaneo::getTituloUniversitario()
{
    return "-1";
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
