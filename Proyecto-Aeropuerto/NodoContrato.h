#pragma once
#include"Contrato.h"

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

