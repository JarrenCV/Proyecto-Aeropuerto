#pragma once
#include"NodoEmpleado.h"

class ListaEmpleados {
private:
	NodoEmpleado* ppio;

public:
	ListaEmpleados();
	virtual ~ListaEmpleados();

	void ingresaPrimero(Empleado&);
	void ingresaUltimo(Empleado&);


	string toString();
};

