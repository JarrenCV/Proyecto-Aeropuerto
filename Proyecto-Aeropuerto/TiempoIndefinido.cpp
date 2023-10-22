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

string TiempoIndefinido::toString()
{
    stringstream s;
    s << "CONTRATO DE TIEMPO INDEFINIDO" << endl;
    s << empContratado->toString() << endl;

    return s.str();
}
