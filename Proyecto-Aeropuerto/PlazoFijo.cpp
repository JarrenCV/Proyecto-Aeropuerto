#include "PlazoFijo.h"

PlazoFijo::PlazoFijo(): Contrato()
{
    elegible = false;
}

PlazoFijo::PlazoFijo(bool ele,string cContra, string dPuesto, double sal, Fecha& ingreso, Fecha& culmen) : elegible(ele), Contrato(cContra,dPuesto,  sal,  ingreso, culmen)
{
}

PlazoFijo::~PlazoFijo()
{
}

void PlazoFijo::setElegible(bool)
{
}

bool PlazoFijo::getElegible()
{
    return false;
}

string PlazoFijo::toString()
{
    stringstream s;
    s << "CONTRATO DE PLAZO FIJO " << endl;
    s << empContratado->toString() << endl;

    return s.str();
}
