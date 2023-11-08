#pragma once
#include"Empleado.h"
#include"Avion.h"

class Tripulacion : public Empleado
{
private:
	
public:
	Tripulacion();
	Tripulacion(string, string, int);
	virtual ~Tripulacion();

	virtual string toString() = 0;
};

