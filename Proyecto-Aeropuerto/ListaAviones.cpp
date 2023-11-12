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

bool ListaAviones::existeAvionConPlaca(string numP)
{
    NodoAvion* PE = ppio;

    while (PE != NULL) {
        if (PE->getAvion()->getNumeroPlaca() == numP) {
            return true;
        }
        PE = PE->getSigNodo();
    }
    return false;
}

Avion* ListaAviones::buscaAvionPlaca(string numP)
{
    NodoAvion* PE = ppio;

    while (PE != NULL) {
        if (PE->getAvion()->getNumeroPlaca() == numP) {
            return PE->getAvion();
        }
        PE = PE->getSigNodo();
    }
    return NULL;
}

// Desliga tripulacion
void ListaAviones::quitaPiloto(string ced)
{
    NodoAvion* PE = ppio;
    while (PE != NULL) {
        if (PE->getAvion()->getPiloto()->getCedula() == ced) {  
            PE->getAvion()->setPiloto(NULL);
            break;
        }
        PE = PE->getSigNodo();
    }
}

void ListaAviones::quitaCopiloto(string ced)
{
    NodoAvion* PE = ppio;
    while (PE != NULL) {
        if (PE->getAvion()->getCopiloto()->getCedula() == ced) {
            PE->getAvion()->setCopiloto(NULL);
            break;
        }
        PE = PE->getSigNodo();
    }
}

void ListaAviones::quitaAzafata(string ced)
{
    NodoAvion* PE = ppio;
    while (PE != NULL) {
        if (PE->getAvion()->getAzafata()->getCedula() == ced) {
            PE->getAvion()->setAzafata(NULL);
            break;
        }
        PE = PE->getSigNodo();
    }
}

void ListaAviones::cambiaPlaca(string numP, string nuevaPlaca)
{
    buscaAvionPlaca(numP)->setNumeroPlaca(nuevaPlaca);
}

void ListaAviones::cambiaAnchura(string numP, double anch)
{
    buscaAvionPlaca(numP)->setAnchuraPuerta(anch);
}

void ListaAviones::cambiaAltura(string numP, double alt)
{
    buscaAvionPlaca(numP)->setAlturaPuerta(alt);
}

void ListaAviones::cambiaDistanciaRecorrida(string numP, double distanciaR)
{
    buscaAvionPlaca(numP)->setDistanciaRecorrida(distanciaR);
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
