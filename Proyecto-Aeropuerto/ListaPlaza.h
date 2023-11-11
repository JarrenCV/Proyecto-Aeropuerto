#pragma once
#include"NodoPlaza.h"

class ListaPlaza
{
private:
	NodoPlaza* ppio;

public:
	ListaPlaza();
	virtual ~ListaPlaza();

	void ingresaPrimero(Plaza&);
	void ingresaUltimo(Plaza&);
	int cantidadNodos();
	bool buscaPlaza(string);

	string toString();
};