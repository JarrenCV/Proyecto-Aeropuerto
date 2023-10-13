#include "NodoAvion.h"

NodoAvion::NodoAvion()
{
    avion = NULL;
    sigNodo = NULL;
}

NodoAvion::NodoAvion(Avion& avi, NodoAvion* sigN)
{
    avion = (Avion*)&avi;
    sigNodo = sigN;
}

NodoAvion::~NodoAvion()
{
    if (avion != NULL) delete avion;
}

void NodoAvion::setAvion(Avion& avi)
{
    avion = (Avion*)&avi;
}

void NodoAvion::setSigNodo(NodoAvion* sigN)
{
    sigNodo = sigN;
}

Avion* NodoAvion::getAvion()
{
    return avion;
}

NodoAvion* NodoAvion::getSigNodo()
{
    return sigNodo;
}

string NodoAvion::toString()
{
    stringstream s;

    s << avion->toString() << endl;

    return s.str();
}
