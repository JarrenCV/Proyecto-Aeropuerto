#pragma once
#include"Avion.h"

class NodoAvion{
private:
	Avion* avion;
	NodoAvion* sigNodo;
public:
	NodoAvion();
	NodoAvion(Avion&, NodoAvion*);
	virtual ~NodoAvion();

	void setAvion(Avion&);
	void setSigNodo(NodoAvion*);

	Avion* getAvion();
	NodoAvion* getSigNodo();

	string toString();
};

