#include "Planta.h"

Planta::Planta() : Empleado()
{
    labor = "No definida";
}

Planta::Planta(string ced, string nom, int ed, string lab) :Empleado(ced, nom, ed)
{
    labor = lab;
}

Planta::~Planta()
{
}

void Planta::setLabor(string lab)
{
    labor = lab;
}

string Planta::getLabor()
{
    return labor;
}