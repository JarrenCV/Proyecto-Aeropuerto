#pragma once
#include"NodoAvion.h"
// Nombre de estudiantes:
// Lesber Huerta Cornejo 
// Jarren Chaves Vizcaíno

class ListaAviones{
private:
	NodoAvion* ppio;

public:
	ListaAviones();
	virtual ~ListaAviones();

	void ingresaPrimero(Avion&);
	void ingresaUltimo(Avion&);

	bool existeAvionConPlaca(string);

	Avion* avionCargaMayorArea();
	string tripulacionDeAvionComercial();
	string avionesMas20(Fecha&);
	string toString();
};

