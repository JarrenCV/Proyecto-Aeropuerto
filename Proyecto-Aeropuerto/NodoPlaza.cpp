#include "NodoPlaza.h"
NodoPlaza::NodoPlaza()
{
    placita = NULL;
    sigNodo = NULL;
}

NodoPlaza::NodoPlaza(Plaza& pl, NodoPlaza* sigN)
{
    placita = (Plaza*)&pl;
    sigNodo = sigN;
}

NodoPlaza::~NodoPlaza()
{
    if (placita != NULL) delete placita;
}

void NodoPlaza::setPlaza(Plaza& pla)
{
    placita = (Plaza*)&pla;
}

void NodoPlaza::setSigNodo(NodoPlaza* sigN)
{
    sigNodo = sigN;
}

Plaza* NodoPlaza::getPlaza()
{
    return placita;
}

NodoPlaza* NodoPlaza::getSigNodo()
{
    return sigNodo;
}

string NodoPlaza::toString()
{
    stringstream s;

    s << placita->toString() << endl;

    return s.str();
}
