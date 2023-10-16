#pragma once
#include"Empleado.h"

class NodoEmpleado {
private:
	Empleado* empleado;
	NodoEmpleado* sigNodo;
public:
	NodoEmpleado();
	NodoEmpleado(Empleado&, NodoEmpleado*);
	virtual ~NodoEmpleado();

	void setEmpleado(Empleado&);
	void setSigNodo(NodoEmpleado*);

	Empleado* getEmpleado();
	NodoEmpleado* getSigNodo();

	string toString();
};


