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

	bool buscaCedula(string ced);//Este metodo verifica que no haya una cedula repetida al ingresar en el contenedor
	
	string toString();
};

