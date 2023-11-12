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

string ListaAviones::consultaCivilPorPlaca(string pla)
{
    stringstream s;
    NodoAvion* PE = ppio;

    s << "--------------------AVION CIVIL POR PLACA--------------------" << endl;
    while (PE != NULL)
    {
        if (PE->getAvion()->getNumeroPlaca() == pla) {
            s << PE->getAvion()->toString() << endl;
            PE = PE->getSigNodo();
        }
    }
    s << "----------------------------------------------------------" << endl;

    return s.str();
}

string ListaAviones::consultaTrabajador(string ced)
{
    stringstream s;
    NodoAvion* PE = ppio;

    s << "--------------------TRABAJADOR POR CEDULA--------------------" << endl;
    while (PE != NULL)
    {
        if (PE->getAvion()->getAzafata()->getCedula() == ced || PE->getAvion()->getCopiloto()->getCedula() == ced || PE->getAvion()->getPiloto()->getCedula() == ced) {
            s << PE->getAvion()->toString() << endl;
            PE = PE->getSigNodo();
        }
    }
    s << "----------------------------------------------------------" << endl;

    return s.str();
}

Avion* ListaAviones::avionCargaMayorArea()
{   
   NodoAvion* PE = ppio;
   double areaMayor = PE->getAvion()->getAreaCarga();
   Avion* avionMayor = PE->getAvion();
   while (PE != NULL)
   {
       PE->getAvion()->getAreaCarga();
       if (PE->getAvion()->getAreaCarga() > areaMayor) 
       {
           areaMayor = PE->getAvion()->getAreaCarga();
           avionMayor = PE->getAvion();
       }
       PE = PE->getSigNodo();
   }
   return avionMayor;
}

string ListaAviones::tripulacionDeAvionComercial()
{
    stringstream s;
    NodoAvion* PE = ppio;

    s << "--------------------LISTADO DE TRIPULACION DE AVION COMERCIAL--------------------" << endl;
    while (PE != NULL)
    {
        s << PE->getAvion()->tripulacionDeAvionComercial() << endl;
        PE = PE->getSigNodo();
    }
    s << "----------------------------------------------------------------------------------" << endl;

    return s.str();
}

string ListaAviones::avionesMas20(Fecha& f)
{
    stringstream s;
    NodoAvion* PE = ppio;

    s << "--------------------LISTADO DE AVIONES DE MAS DE 20 ANIOS--------------------" << endl;
    while (PE != NULL)
    {
        s << PE->getAvion()->reporteAvionMas20(f) << endl;
        PE = PE->getSigNodo();
    }
    s << "------------------------------------------------------------------------------" << endl;
    return s.str();
}

string ListaAviones::toString()
{
    stringstream s;
    NodoAvion* PE = ppio;
    
    s << "--------------------LISTADO DE AVIONES--------------------" << endl;
    while (PE != NULL) 
    {
       s << PE->getAvion()->toString() << endl;
       PE = PE->getSigNodo();
    }
    s << "----------------------------------------------------------" << endl;

    return s.str();
}
