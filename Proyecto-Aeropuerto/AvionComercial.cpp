#include "AvionComercial.h"

AvionComercial::AvionComercial():AviacionCivil()
{
}

AvionComercial::AvionComercial(Fecha& fC, double dR, string cat, string nP):AviacionCivil(fC, dR, cat, nP)
{
    tipoAvion = 1;
}

AvionComercial::~AvionComercial()
{
}

string AvionComercial::toString()
{
    stringstream s;
    if (piloto != NULL|| copiloto != NULL || azafata != NULL) {
        cout << "----------------Informacion de la tripulaicion----------------" << endl;
        if(piloto != NULL)
            cout << piloto->toString();
        if (copiloto != NULL)
            cout << copiloto->toString();
        if (azafata != NULL)
            cout << azafata->toString();
    }
    s << "---------------AVION COMERCIAL---------------" << endl;
    s << "Categoria: " << categoria << endl;
    s << "Fecha de creacion: " << fechaCreacion->toString() << endl;
    s << "Numero de placa: " << getNumeroPlaca() << endl;
    s << "Tipo de avion: " << getTipoAvion() << endl;
    s << "Distancia recorrida: " << distanciaRecorrida << "Km" << endl;
    
    
   /* 
   s << "Nombre del avion: " << TablaAComercial::nombre(categoria);
   s << "Capacidad de pasajeros: " << TablaAComercial::pasajeros(categoria);
   
   Preguntar si imprimir toda la info del avion
    */


    return s.str();
}
