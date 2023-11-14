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

int PlazoFijo::getTipoContrato()
{
    return 2;
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
    s << "CONTRATO DE PLAZO FIJO " << endl
    << "-----------------------------" << endl;
    s << "Codigo de contrato: " << codigoContrato << endl
        << "Descripcion de puesto: " << descripcionPuesto << endl
        << "Salario" << salario << endl
        << "Ingreso laboral: ";
    s << ingresoLaboral->toString() << endl;
    s << "Culminacion laboral" << endl;
    s << culminacionLaboral->toString() << endl;
    if (empContratado != NULL)
        s << empContratado->toString() << endl;
    else
        s << "El contrato no tiene asociado un empleado" << endl;
    s << "Es elegible: ";
    if (elegible == true)
        s << "Si" << endl;
    else
        s << "No" << endl;
    return s.str();
}
