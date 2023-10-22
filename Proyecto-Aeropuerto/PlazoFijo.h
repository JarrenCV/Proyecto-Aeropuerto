#pragma once
#include"Contrato.h"

class PlazoFijo : public Contrato {
private:
	bool elegible;

public:

	PlazoFijo();
	PlazoFijo(bool, string, string , double, Fecha&, Fecha&);

	virtual ~PlazoFijo();

	void setElegible(bool);

	bool getElegible();

	string toString();
};