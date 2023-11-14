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

int Azafata::getTipoEmpleado()
{
    return 3;
}

void Azafata::setNacionalidad(string nacionali)
{
    nacionalidad = nacionali;
}

string Azafata::getNacionalidad()
{
    return nacionalidad;
}

string Azafata::reportePilotos()
{
    cout << "Aquí no hay pilotos";
    return "";
}

void Azafata::setAniosExperiencia(int s)
{
}

int Azafata::getAniosExperiencia()
{
    return -1;
}

void Azafata::setTelefono(string s)
{
}

string Azafata::getTelefono()
{
    return "-1";
}

void Azafata::setLabor(string s)
{
}

string Azafata::getLabor()
{
    return "-1";
}

void Azafata::setTituloUniversitario(string s)
{
}

string Azafata::getTituloUniversitario()
{
    return "-1";
}

void Azafata::setGradoEscolaridad(string s)
{
}

string Azafata::getGradoEscolaridad()
{
    return "-1";
}

void Azafata::save(ofstream& save)
{
    save << tipoEmpleado << "  " << cedula << "  " << nombre << "  " <<
        edad << "  " << nacionalidad << endl;
}

void Azafata::read(ifstream& read)
{
    read >> tipoEmpleado >> cedula >> nombre >> edad >> nacionalidad;
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