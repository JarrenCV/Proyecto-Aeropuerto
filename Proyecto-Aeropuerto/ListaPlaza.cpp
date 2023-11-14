#include "ListaPlaza.h"

ListaPlaza::ListaPlaza()
{
    ppio = NULL;
}

ListaPlaza::~ListaPlaza()
{
    NodoPlaza* PE;
    while (ppio != NULL) {
        PE = ppio;
        ppio = ppio->getSigNodo();
        delete PE;
    }
}

void ListaPlaza::ingresaPrimero(Plaza& p)
{
    ppio = new NodoPlaza(p, ppio);
}

void ListaPlaza::ingresaUltimo(Plaza& p)
{
    NodoPlaza* PE = ppio;
    NodoPlaza* nuevo;
    if (ppio == NULL) {
        ingresaPrimero(p);
    }
    else {
        while (PE->getSigNodo() != NULL) {
            PE = PE->getSigNodo();
        }
        nuevo = new NodoPlaza(p, NULL);
        PE->setSigNodo(nuevo);
    }
}

int ListaPlaza::cantidadNodos()
{
    int cont = 0;
    NodoPlaza* PE = ppio;

    if (ppio == NULL) {
        return cont;
    }
    else {
        while (PE->getSigNodo() != NULL) {
            PE = PE->getSigNodo();
            cont++;
        }
    }

    return cont;
}

bool ListaPlaza::buscaPlaza(string nPlaza)
{
    NodoPlaza* PE = ppio;

    if (ppio == NULL) {
        return false;
    }
    else {
        while (PE->getSigNodo() != NULL) {
            if (PE->getPlaza()->getCodigoPlaza() == nPlaza) {
                return true;
            }
        }
    }
    return false;
}

string ListaPlaza::toString()
{
    stringstream s;
    NodoPlaza* PE = ppio;

    s << "--------------------LISTADO DE PLAZOS--------------------" << endl;
    while (PE != NULL) {
        s << PE->getPlaza()->toString() << endl;
        PE = PE->getSigNodo();
    }
    s << "----------------------------------------------------------" << endl;

    return s.str();
}
