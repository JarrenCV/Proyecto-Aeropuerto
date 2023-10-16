#include "NodoEmpleado.h"

NodoEmpleado::NodoEmpleado()
{
    empleado = NULL;
    sigNodo = NULL;
}

NodoEmpleado::NodoEmpleado(Empleado& avi, NodoEmpleado* sigN)
{
    empleado = (Empleado*)&avi;
    sigNodo = sigN;
}

NodoEmpleado::~NodoEmpleado()
{
    if (empleado != NULL) delete empleado;
}

void NodoEmpleado::setEmpleado(Empleado& emp)
{
    empleado = (Empleado*)&empleado;
}

void NodoEmpleado::setSigNodo(NodoEmpleado* sigN)
{
    sigNodo = sigN;
}

Empleado* NodoEmpleado::getEmpleado()
{
    return empleado;
}

NodoEmpleado* NodoEmpleado::getSigNodo()
{
    return sigNodo;
}

string NodoEmpleado::toString()
{
    stringstream s;

    s << empleado->toString() << endl;

    return s.str();
}