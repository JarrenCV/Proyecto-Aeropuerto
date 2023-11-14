#include "TiempoIndefinido.h"

TiempoIndefinido::TiempoIndefinido() : Contrato()
{
    plaza = NULL;
}

TiempoIndefinido::TiempoIndefinido(Plaza& p, string cContra, string dPuesto, double sal, Fecha& ingreso, Fecha& culmen) : Contrato(cContra, dPuesto, sal, ingreso, culmen)
{
    plaza = (Plaza*)&p;
}

TiempoIndefinido::~TiempoIndefinido()
{
    if (plaza != NULL) delete plaza;
}

int TiempoIndefinido::getTipoContrato()
{
    return 3;
}

void TiempoIndefinido::setPlaza(Plaza& p)
{
    plaza = (Plaza*)&p;
}

Plaza* TiempoIndefinido::getPlaza()
{
    return plaza;
}

void TiempoIndefinido::setElegible(bool s)
{
}

bool TiempoIndefinido::getElegible()
{
    return false;
}

void TiempoIndefinido::setHorario(string s)
{
}

void TiempoIndefinido::setTipoServicio(string s)
{
}

string TiempoIndefinido::getHorario()
{
    return "-1";
}

string TiempoIndefinido::getTipoServicio()
{
    return "-1";
}

string TiempoIndefinido::toString()
{
    stringstream s;

    s << "CONTRATO DE TIEMPO INDEFINIDO" << endl
        << "-----------------------------" << endl;
    s << "Codigo de contrato: " << codigoContrato << endl
        << "Descripcion de puesto: " << descripcionPuesto << endl
        << "Salario" << salario << endl
        << "Ingreso laboral: ";
    s << ingresoLaboral->toString()<<endl;
    s << "Culminacion laboral" << endl;
    s << culminacionLaboral->toString() << endl;
    if (empContratado != NULL) {
        s << empContratado->toString() << endl;
        s << plaza->toString() << endl;
    }
    else
        s << "El contrato no tiene asociado un empleado" << endl;

    return s.str();
}
