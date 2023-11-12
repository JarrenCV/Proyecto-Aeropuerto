#pragma once
#include"NodoContrato.h"
// Nombre de estudiantes:
// Lesber Huerta Cornejo 
// Jarren Chaves Vizcaíno

class ListaContratos
{
private:
	NodoContrato* ppio;

public:
	ListaContratos();
	virtual ~ListaContratos();

	void ingresaPrimero(Contrato&);
	void ingresaUltimo(Contrato&);

	string reportePlazoFijoMas2Anios();
	string reporteServiciosProfecionales();
	string reportePlazoFijo();
	string reporteTiempoIndefinido();
	bool buscaContrato(string);


	string toString();
};

