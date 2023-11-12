#pragma once
#include"Contrato.h"
// Nombre de estudiantes:
// Lesber Huerta Cornejo 
// Jarren Chaves Vizcaíno

class NodoContrato
{
private:
	Contrato* contrato;
	NodoContrato* sigNodo;

public:
	NodoContrato();
	NodoContrato(Contrato&, NodoContrato*);
	virtual ~NodoContrato();

	void setContrato(Contrato&);
	void setSigNodo(NodoContrato*);

	Contrato* getContrato();
	NodoContrato* getSigNodo();

	string toString();

};

