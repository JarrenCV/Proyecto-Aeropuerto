#include "Empleado.h"

Empleado::Empleado()
{
    cedula = "No definida";
    nombre = "No definido";
    edad = 0;
}

Empleado::Empleado(string ced, string nom, int ed)
{
    cedula = ced;
    nombre = nom;
    edad = ed;
}

Empleado::~Empleado()
{
}

void Empleado::setCedula(string ced)
{
    cedula = ced;
}

void Empleado::setNombre(string nom)
{
    nombre = nom;
}

void Empleado::setEdad(int ed)
{
    edad = ed;
}

string Empleado::getCedula()
{
    return cedula;
}

string Empleado::getNombre()
{
    return nombre;
}

int Empleado::getEdad()
{
    return edad;
}
