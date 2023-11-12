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
        if (PE->getAvion()->getCategoria() == numP) {
            return true;
        }
        PE = PE->getSigNodo();
    }
    return false;
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
