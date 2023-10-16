#pragma once
#include "Empleado.h"

class Planta : public Empleado
{
private:
	string labor;
public:
	Planta();
	Planta(string, string, int, string);
	virtual ~Planta();

	void setLabor(string);

	string getLabor();

	virtual string toString() = 0;
};