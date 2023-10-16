#pragma once
#include "Tripulacion.h"

class Azafata : public Tripulacion
{
private:
	string nacionalidad;
public:
	Azafata();
	Azafata(string, string, int, Avion&, string);
	virtual ~Azafata();

	void setNacionalidad(string);

	string getNacionalidad();

	string toString();
};
