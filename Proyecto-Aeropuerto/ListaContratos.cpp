#include "ListaContratos.h"

ListaContratos::ListaContratos()
{
    ppio = NULL;
}

ListaContratos::~ListaContratos()
{
    NodoContrato* PE;
    while (ppio != NULL) {
        PE = ppio;
        ppio = ppio->getSigNodo();
        delete PE;
    }
}

void ListaContratos::ingresaPrimero(Contrato& contrat)
{
    ppio = new NodoContrato(contrat, ppio);
}

void ListaContratos::ingresaUltimo(Contrato& contrat)
{
    NodoContrato* PE = ppio;
    NodoContrato* nuevo;
    if (ppio == NULL) {
        ingresaPrimero(contrat);
    }
    else {
        while (PE->getSigNodo() != NULL) {
            PE = PE->getSigNodo();
        }
        nuevo = new NodoContrato(contrat, NULL);
        PE->setSigNodo(nuevo);
    }
}

string ListaContratos::reportePlazoFijoMas2Anios()
{
    stringstream s;
    NodoContrato* PE = ppio;

    s << "--------------------LISTADO DE CONTRATOS DE SERVICIOS PROFECIONALES--------------------" << endl;
    while (PE != NULL) {
        s << PE->getContrato()->reportePlazoFijoMas2Anios() << endl;
        PE = PE->getSigNodo();
    }
    s << "----------------------------------------------------------" << endl;

    return s.str();
}

string ListaContratos::reporteServiciosProfecionales()
{
    stringstream s;
    NodoContrato* PE = ppio;

    s << "--------------------LISTADO DE CONTRATOS DE SERVICIOS PROFECIONALES--------------------" << endl;
    while (PE != NULL) {
        s << PE->getContrato()->reporteServiciosProfecionales() << endl;
        PE = PE->getSigNodo();
    }
    s << "----------------------------------------------------------" << endl;

    return s.str();
}

string ListaContratos::reportePlazoFijo()
{
    stringstream s;
    NodoContrato* PE = ppio;

    s << "--------------------LISTADO DE CONTRATOS DE PLAZO FIJO--------------------" << endl;
    while (PE != NULL) {
        s << PE->getContrato()->reportePlazoFijo() << endl;
        PE = PE->getSigNodo();
    }
    s << "----------------------------------------------------------" << endl;

    return s.str();
}

string ListaContratos::reporteTiempoIndefinido()
{
    stringstream s;
    NodoContrato* PE = ppio;

    s << "--------------------LISTADO DE CONTRATOS DE TIEMPO INDEFINIDO--------------------" << endl;
    while (PE != NULL) {
        s << PE->getContrato()->reporteTiempoIndefinido() << endl;
        PE = PE->getSigNodo();
    }
    s << "----------------------------------------------------------" << endl;

    return s.str();
}

bool ListaContratos::buscaContrato(string contrat)
{
    NodoContrato* PE = ppio;

    while (PE != NULL) {
        if (PE->getContrato()->getCodigoContrato() == contrat) {
            return true;
        }
    }
    return false;
}

string ListaContratos::toString()
{
    stringstream s;
    NodoContrato* PE = ppio;

    s << "--------------------LISTADO DE CONTRATOS--------------------" << endl;
    while (PE != NULL) {
        s << PE->getContrato()->toString() << endl;
        PE = PE->getSigNodo();
    }
    s << "----------------------------------------------------------" << endl;

    return s.str();
}