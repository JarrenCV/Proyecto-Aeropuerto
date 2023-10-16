#include "Piloto.h"

Piloto::Piloto():Tripulacion()
{
    aniosExperiencia = 0;
}

Piloto::Piloto(string ced, string nom, int ed, Avion& avi, int aniosExp) :Tripulacion(ced, nom, ed, avi)
{
    aniosExperiencia = aniosExp;
}

Piloto::~Piloto()
{
}

void Piloto::setAniosExperiencia(int aniosExp)
{
    aniosExperiencia = aniosExp;
}

int Piloto::getAniosExperiencia()
{
    return aniosExperiencia;
}

string Piloto::toString()
{
    stringstream s;

    s << "-----------------PILOTO-----------------" << endl;
    s << "Cedula: " << cedula << endl;
    s << "Nombre: " << nombre << endl;
    s << "Edad: " << edad << endl;
    if (getAvion() != NULL) {
        s << "-------------AVION ASOCIADO-------------" << endl;
        s << getAvion()->toString();
    }
    s << "Anios de experiencia: " << aniosExperiencia <<endl;
    
    return s.str();
}
