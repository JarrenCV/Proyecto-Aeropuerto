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

NodoAvion* ListaAviones::getPpio()
{
    return ppio;
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
bool ListaAviones::eliminaAvionPorPlaca(string placa)
{
    NodoAvion* PE = ppio;
    NodoAvion* elimina = NULL;

    if (PE->getAvion()->getNumeroPlaca() == placa) {
        elimina = PE;
        ppio->setSigNodo(elimina->getSigNodo());
        delete elimina;
        return true;
    }
    while (PE->getSigNodo() != NULL) {
        if (PE->getSigNodo()->getAvion()->getNumeroPlaca() == placa) {
            elimina = PE->getSigNodo();
            PE->setSigNodo(elimina->getSigNodo());
            delete elimina;
            return true;
        }
        PE = PE->getSigNodo();
    }
    return false;
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

bool ListaAviones::existeAvionVelocidad(double velocidad)
{
    NodoAvion* PE = ppio;

    while (PE != NULL) {
        if (PE->getAvion()->getVelocidadMaxima() == velocidad) {
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

Avion* ListaAviones::buscaAvionVelocidad(double velocidad)
{
    NodoAvion* PE = ppio;

    while (PE != NULL) {
        if (PE->getAvion()->getVelocidadMaxima() == velocidad) {
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

string ListaAviones::reportePilotosCarga() 
{
    stringstream s;
    NodoAvion* PE = ppio;

    while(PE != NULL){
        if (PE->getAvion()->getTipoAvion() == 2) {
            if(PE->getAvion()->getPiloto() != NULL){
                s << PE->getAvion()->getPiloto()->toString();
                PE = PE->getSigNodo();
            }
            else {
                PE = PE->getSigNodo();
            }
        }
    }
    return s.str();
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
   if(ppio != NULL){
       NodoAvion* PE = ppio->getSigNodo();
       double areaMayor = ppio->getAvion()->getAreaCarga();
       Avion* avionMayor = ppio->getAvion();
       while (PE != NULL) {
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
   else {
       return NULL;
   }
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

void ListaAviones::saveAll(ofstream& save)
{
    NodoAvion* PE = ppio;

    while (PE != NULL) {
        PE->getAvion()->save(save);
        PE = PE->getSigNodo();
    }
}

void ListaAviones::readAll(ifstream& read)
{
    // Se asume que el archivo txt no tiene informacion de la tripulacion del avion.
    while (!read.eof()) {
        int dia, mes, anio;
        read >> dia >> mes >> anio;
        Fecha* creacion = new Fecha(dia, mes, anio);

        double distanciaRecorrida;
        read >> distanciaRecorrida;

        string categoria;
        read >> categoria;

        int tipoAvion;
        read >> tipoAvion;
        
        if (tipoAvion == 1) {
            string numPlaca;
            read >> numPlaca;
            
            Avion* avi = new AvionComercial(*creacion, distanciaRecorrida, categoria, numPlaca);
            ingresaUltimo(*avi);
        }
        if (tipoAvion == 2) {
            string numPlaca;
            read >> numPlaca;
            double alturaP, anchuraP;
            read >> alturaP >> anchuraP;

            Avion* avi = new AvionDeCarga(*creacion, distanciaRecorrida, categoria, numPlaca, alturaP,anchuraP);
            ingresaUltimo(*avi);
        }
        if (tipoAvion == 3) {
            double velocidadMax;
            read >> velocidadMax;

            Avion* avi = new AviacionMilitar(*creacion, distanciaRecorrida, categoria, velocidadMax);
            ingresaUltimo(*avi);
        }
    }
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
