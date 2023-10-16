#pragma once
#include"Empleado.h"
#include"Avion.h"

class Tripulacion : public Empleado
{
private:
	Avion* avion;
public:
	Tripulacion();
	Tripulacion(string, string, int, Avion&);
	virtual ~Tripulacion();

	void setAvion(Avion&);

	Avion* getAvion();

	virtual string toString() = 0;
};

