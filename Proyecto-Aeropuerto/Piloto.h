#pragma once
#include"Tripulacion.h"
class Piloto : public Tripulacion
{
private:
	int aniosExperiencia;
public:
	Piloto();
	Piloto(string, string, int, Avion&, int);
	virtual ~Piloto();

	void setAniosExperiencia(int);

	int getAniosExperiencia();

	string toString();
};

