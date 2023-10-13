#include "ListaAviones.h"

ListaAviones::ListaAviones()
{
    ppio = NULL;
}

ListaAviones::~ListaAviones()
{
    NodoAvion* PE;
    while (ppio != NULL) {
        PE = ppio;
        ppio = ppio->getSigNodo();
        delete PE;
    }
}

void ListaAviones::ingresaPrimero(Avion& avi)
{
    ppio = new NodoAvion(avi, ppio);
}

void ListaAviones::ingresaUltimo(Avion& avi)
{
    NodoAvion* PE = ppio;
    NodoAvion* nuevo;
    if (ppio == NULL) {
        ingresaPrimero(avi);
    }
    else {
        while (PE->getSigNodo() != NULL) {
            PE = PE->getSigNodo();
        }
        nuevo = new NodoAvion(avi, NULL);
        PE->setSigNodo(nuevo);
    }
}

string ListaAviones::toString()
{
    stringstream s;
    NodoAvion* PE = ppio;
    
    s << "--------------------LISTADO DE AVIONES--------------------" << endl;
    while (PE != NULL) {
       s << PE->getAvion()->toString() << endl;
       PE = PE->getSigNodo();
    }
    s << "----------------------------------------------------------" << endl;

    return s.str();
}
