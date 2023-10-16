#pragma once
#include "Planta.h"

class Miscelaneo : public Planta
{
private:
	string gradoEscolaridad;
public:
	Miscelaneo();
	Miscelaneo(string, string, int, string, string);
	virtual ~Miscelaneo();

	void setGradoEscolaridad(string);

	string getGradoEscolaridad();

	string toString();
};

