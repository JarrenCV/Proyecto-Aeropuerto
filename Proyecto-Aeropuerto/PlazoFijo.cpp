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

void PlazoFijo::setElegible(bool s)
{
}

bool PlazoFijo::getElegible()
{
    return false;
}

void PlazoFijo::setHorario(string s)
{
}

void PlazoFijo::setTipoServicio(string s)
{
}

string PlazoFijo::getHorario()
{
    return "-1";
}

string PlazoFijo::getTipoServicio()
{
    return "-1";
}

void PlazoFijo::setPlaza(Plaza& s)
{
}

Plaza* PlazoFijo::getPlaza()
{
    return NULL;
}

string PlazoFijo::toString()
{
    stringstream s;
    s << "CONTRATO DE PLAZO FIJO " << endl;
    s << empContratado->toString() << endl;

    return s.str();
}
