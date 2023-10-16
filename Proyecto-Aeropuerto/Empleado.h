#pragma once
#include <iostream>
#include<sstream>
using namespace std;

class Empleado
{
protected:
	string cedula;
	string nombre;
	int edad;

public:
	Empleado();
	Empleado(string, string, int);
	virtual ~Empleado();

	void setCedula(string);
	void setNombre(string);
	void setEdad(int);

	string getCedula();
	string getNombre();
	int getEdad();

	virtual string toString() = 0;
};

