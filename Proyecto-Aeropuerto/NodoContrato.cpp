#include "NodoContrato.h"
NodoContrato::NodoContrato()
{
    contrato = NULL;
    sigNodo = NULL;
}

NodoContrato::NodoContrato(Contrato& contrat, NodoContrato* sigN)
{
    contrato = (Contrato*)&contrat;
    sigNodo = sigN;
}

NodoContrato::~NodoContrato()
{
    if (contrato != NULL) delete contrato;
}

void NodoContrato::setContrato(Contrato& contrat)
{
    contrato = (Contrato*)&contrat;
}

void NodoContrato::setSigNodo(NodoContrato* sigN)
{
    sigNodo = sigN;
}

Contrato* NodoContrato::getContrato()
{
    return contrato;
}

NodoContrato* NodoContrato::getSigNodo()
{
    return sigNodo;
}

string NodoContrato::toString()
{
    stringstream s;

    s << contrato->toString() << endl;

    return s.str();
}
