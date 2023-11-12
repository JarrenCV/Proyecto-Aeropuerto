#pragma once
#include"NodoEmpleado.h"
// Nombre de estudiantes:
// Lesber Huerta Cornejo 
// Jarren Chaves Vizcaíno

class ListaEmpleados {
private:
	NodoEmpleado* ppio;

public:
	ListaEmpleados();
	virtual ~ListaEmpleados();

	void ingresaPrimero(Empleado&);
	void ingresaUltimo(Empleado&);
	string reportePilotos();
	bool buscaCedula(string ced);//Este metodo verifica que no haya una cedula repetida al ingresar en el contenedor
	
	string toString();
	string consultaTrabajador();
};

