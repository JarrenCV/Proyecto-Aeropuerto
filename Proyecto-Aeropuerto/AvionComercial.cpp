#include "AvionComercial.h"

AvionComercial::AvionComercial():AviacionCivil()
{
    categoria = "No definida";
}

AvionComercial::AvionComercial(Fecha& fC, double dR, string nP, string tA, string cat):AviacionCivil(fC, dR, nP, tA)
{
    categoria = cat;
}

AvionComercial::~AvionComercial()
{
}

void AvionComercial::setCategoria(string cat)
{
    categoria = cat;
}

string AvionComercial::getCategoria()
{
    return categoria;
}

string AvionComercial::toString()
{
    stringstream s;

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
