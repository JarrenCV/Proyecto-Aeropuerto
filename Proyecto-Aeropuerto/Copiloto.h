#pragma once
#include "Tripulacion.h"
class Copiloto : public Tripulacion
{
private:
	string telefono;
public:
	Copiloto();
	Copiloto(string, string, int, string);
	virtual ~Copiloto();

	void setTelefono(string);

	string getTelefono();

	string toString();
};

