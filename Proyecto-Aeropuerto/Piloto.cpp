#include "Piloto.h"

Piloto::Piloto():Tripulacion()
{
    aniosExperiencia = 0;
}

Piloto::Piloto(string ced, string nom, int ed, int aniosExp) :Tripulacion(ced, nom, ed)
{
    aniosExperiencia = aniosExp;
}

Piloto::~Piloto()
{
}

int Piloto::getTipoEmpleado()
{
    return 1;
}

string Piloto::reportePilotos()
{
    stringstream s;
    s << "-----------------PILOTO-----------------" << endl;
    s << "Cedula: " << cedula << endl;
    s << "Nombre: " << nombre << endl;
    s << "Edad: " << edad << endl;
    s << "Anios de experiencia: " << aniosExperiencia << endl;

    return s.str();
}

void Piloto::setAniosExperiencia(int aniosExp)
{
    aniosExperiencia = aniosExp;
}

int Piloto::getAniosExperiencia()
{
    return aniosExperiencia;
}

void Piloto::setTelefono(string s)
{
}

string Piloto::getTelefono()
{
    return "-1";
}

void Piloto::setNacionalidad(string s)
{
}

string Piloto::getNacionalidad()
{
    return "-1";
}

void Piloto::setLabor(string s)
{
}

string Piloto::getLabor()
{
    return "-1";
}

void Piloto::setTituloUniversitario(string)
{
}

string Piloto::getTituloUniversitario()
{
    return "-1";
}

void Piloto::setGradoEscolaridad(string)
{
}

string Piloto::getGradoEscolaridad()
{
    return "-1";
}

void Piloto::save(ofstream& save)
{
    save << tipoEmpleado << "  " <<  cedula << "  " << nombre << "  " <<
        edad << "  " << aniosExperiencia << endl;
}

void Piloto::read(ifstream& read)
{
    read >> tipoEmpleado >> cedula >> nombre >> edad >> aniosExperiencia;
}

string Piloto::toString()
{
    stringstream s;

    s << "-----------------PILOTO-----------------" << endl;
    s << "Cedula: " << cedula << endl;
    s << "Nombre: " << nombre << endl;
    s << "Edad: " << edad << endl;
    s << "Anios de experiencia: " << aniosExperiencia <<endl;
    
    return s.str();
}
