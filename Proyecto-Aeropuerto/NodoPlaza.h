#pragma once
#include"Plaza.h"

class NodoPlaza
{
private:
	Plaza* placita;
	NodoPlaza* sigNodo;

public:
	NodoPlaza();
	NodoPlaza(Plaza&, NodoPlaza*);
	virtual ~NodoPlaza();

	void setPlaza(Plaza&);
	void setSigNodo(NodoPlaza*);

	Plaza* getPlaza();
	NodoPlaza* getSigNodo();

	string toString();

};
