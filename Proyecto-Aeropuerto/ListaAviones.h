#pragma once
#include"NodoAvion.h"

class ListaAviones{
private:
	NodoAvion* ppio;

public:
	ListaAviones();
	virtual ~ListaAviones();

	void ingresaPrimero(Avion&);
	void ingresaUltimo(Avion&);


	string toString();
};

