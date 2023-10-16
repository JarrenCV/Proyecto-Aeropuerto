#pragma once
#include "Planta.h"

class Adminitrativo : public Planta
{
private:
	string tituloUniversitario;
public:
	Adminitrativo();
	Adminitrativo(string, string, int, string, string);
	virtual ~Adminitrativo();

	void setTituloUniversitario(string);

	string getTituloUniversitario();

	string toString();
};