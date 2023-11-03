#include "ListaEmpleados.h"

ListaEmpleados::ListaEmpleados()
{
    ppio = NULL;
}

ListaEmpleados::~ListaEmpleados()
{
    NodoEmpleado* PE;
    while (ppio != NULL) {
        PE = ppio;
        ppio = ppio->getSigNodo();
        delete PE;
    }
}

void ListaEmpleados::ingresaPrimero(Empleado& emp)
{
    ppio = new NodoEmpleado(emp, ppio);
}

void ListaEmpleados::ingresaUltimo(Empleado& emp)
{
    NodoEmpleado* PE = ppio;
    NodoEmpleado* nuevo;
    if (ppio == NULL) {
        ingresaPrimero(emp);
    }
    else {
        while (PE->getSigNodo() != NULL) {
            PE = PE->getSigNodo();
        }
        nuevo = new NodoEmpleado(emp, NULL);
        PE->setSigNodo(nuevo);
    }
}

bool ListaEmpleados::buscaCedula(string ced) 
{
    NodoEmpleado* PE = ppio;

    while (PE != NULL) {
        if (PE->getEmpleado()->getCedula() == ced) {
            return true;
        }
        PE = PE->getSigNodo();
    }
    return false;
}

string ListaEmpleados::toString()
{
    stringstream s;
    NodoEmpleado* PE = ppio;

    s << "--------------------LISTADO DE AVIONES--------------------" << endl;
    while (PE != NULL) {
        s << PE->getEmpleado()->toString() << endl;
        PE = PE->getSigNodo();
    }
    s << "----------------------------------------------------------" << endl;

    return s.str();
}