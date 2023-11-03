#pragma once
#include"NodoContrato.h"

class ListaContratos
{
private:
	NodoContrato* ppio;

public:
	ListaContratos();
	virtual ~ListaContratos();

	void ingresaPrimero(Contrato&);
	void ingresaUltimo(Contrato&);

	bool buscaContrato(Contrato&);


	string toString();
};

