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

	
	Plaza* buscaPlazaPlaza(string);
	void ingresaPrimero(Plaza&);
	void ingresaUltimo(Plaza&);
	int cantidadNodos();
	bool buscaPlaza(string);

	// ----------------------ARCHIVOS---------------------
	void saveAll(ofstream&);
	void readAll(ifstream&);

	string toString();
};