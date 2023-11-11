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
    s << "CONTRATO DE TIEMPO INDEFINIDO" << endl;
    s << empContratado->toString() << endl;

    return s.str();
}
