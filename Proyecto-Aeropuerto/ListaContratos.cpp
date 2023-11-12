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
bool ListaContratos::buscaCodigo(string cod)
{
    NodoContrato* PE = ppio;

    while (PE != NULL) {
        if (PE->getContrato()->getCodigoContrato() == cod) {
            return true;
        }
        PE = PE->getSigNodo();
    }
    return false;
}

Contrato* ListaContratos::buscaContrato(string cod)
{
    NodoContrato* PE = ppio;

    while (PE != NULL) {
        if (PE->getContrato()->getCodigoContrato() == cod) {
            return PE->getContrato();
        }
        PE = PE->getSigNodo();
    }
    return NULL;
}

Contrato* ListaContratos::buscaContratoPorCedula(string ced)
{
    NodoContrato* PE = ppio;

    while (PE != NULL) {
        if (PE->getContrato()->getEmpleadoContratado()->getCedula() == ced) {
            return PE->getContrato();
        }
        PE = PE->getSigNodo();
    }
    return NULL;
}

bool ListaContratos::eliminaContratoPorCedula(string ced)
{
    NodoContrato* PE = ppio;
    NodoContrato* elimina = NULL;

    if (PE->getContrato()->getEmpleadoContratado()->getCedula() == ced) {
        elimina = PE;
        ppio->setSigNodo(elimina->getSigNodo());
        delete elimina;
        return true;
    }
    while (PE->getSigNodo() != NULL) {
        if (PE->getSigNodo()->getContrato()->getEmpleadoContratado()->getCedula() == ced) {
            elimina = PE->getSigNodo();
            PE->setSigNodo(elimina->getSigNodo());
            delete elimina;
            return true;
        }
        PE = PE->getSigNodo();
    }
    return false;
}
bool ListaContratos::esServicioProfesional(string cod)
{
    return buscaContrato(cod)->getHorario() != "-1";
}
bool ListaContratos::esPlazoFijo(string cod)
{
    return buscaContrato(cod)->getHorario() == "-1" && buscaContrato(cod)->getPlaza() == NULL;
}
bool ListaContratos::esTiempoIndefinido(string cod)
{
    return buscaContrato(cod)->getPlaza() != NULL;
}
void ListaContratos::cambiaDescripcionPuesto(string cod, string descripcion)
{
    buscaContrato(cod)->setDescripcionPuesto(descripcion);
}
void ListaContratos::cambiaSalario(string cod, double sal)
{
    buscaContrato(cod)->setSalario(sal);
}
void ListaContratos::cambiaHorario(string cod, string horario)
{
    buscaContrato(cod)->setHorario(horario);
}
void ListaContratos::cambiaTipoServicio(string cod, string tipoS)
{
    buscaContrato(cod)->setTipoServicio(tipoS);
}
void ListaContratos::cambiaNombrePuestoPlaza(string cod, string nomPuesto)
{
    buscaContrato(cod)->getPlaza()->setNombrePuesto(nomPuesto);
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