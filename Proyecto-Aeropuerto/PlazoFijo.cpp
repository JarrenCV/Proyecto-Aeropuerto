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

string PlazoFijo::reportePlazoFijoMas2Anios()
{
    stringstream s;
    if (elegible == true)
    {
        s << "CONTRATO DE PLAZO FIJO " << endl
            << "-----------------------------" << endl;
        s << "Codigo de contrato: " << codigoContrato << endl
            << "Descripcion de puesto: " << descripcionPuesto << endl
            << "Salario" << salario << endl
            << "Ingreso laboral: ";
        s << ingresoLaboral->toString() << endl;
        s << "Culminacion laboral" << endl;
        s << culminacionLaboral->toString() << endl;
    }

    return s.str();
}

string PlazoFijo::reporteServiciosProfecionales()
{
    return "";
}

string PlazoFijo::reportePlazoFijo()
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

string PlazoFijo::reporteTiempoIndefinido()
{
    return "";
}

void PlazoFijo::save(ofstream& save)
{
    save << codigoContrato << "  " << descripcionPuesto << "  " << salario << "  " <<
        ingresoLaboral->getDia() << "  " << ingresoLaboral->getMes() << "  " << ingresoLaboral->getAnio() << "  " <<
        culminacionLaboral->getDia() << "  " << culminacionLaboral->getMes() << "  " << culminacionLaboral->getAnio() << "  " <<
        tipoContrato << "  " << elegible;

    if (empContratado != NULL) {
        empContratado->save(save);
    }
    else {
        save << endl;
    }
}

void PlazoFijo::read(ifstream& read)
{
    int diaI, mesI, anioI, diaC, mesC, anioC;
    Fecha* fechaI, *fechaC;

    read >> codigoContrato >> descripcionPuesto >> salario >> diaI >> mesI >> anioI
        >> diaC >> mesC >> anioC >> tipoContrato >> elegible;
    
    fechaI = new Fecha(diaI, mesI, anioI);
    fechaC = new Fecha(diaC, mesC, anioC);
    ingresoLaboral = fechaI;
    culminacionLaboral = fechaC;
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
