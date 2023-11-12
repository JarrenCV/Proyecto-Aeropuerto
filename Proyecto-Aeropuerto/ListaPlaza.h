#pragma once
#include"NodoPlaza.h"
// Nombre de estudiantes:
// Lesber Huerta Cornejo 
// Jarren Chaves Vizcaíno

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