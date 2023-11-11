#pragma once
#include"Contrato.h"

class PlazoFijo : public Contrato {
private:
	bool elegible;

public:

	PlazoFijo();
	PlazoFijo(bool, string, string , double, Fecha&, Fecha&);

	virtual ~PlazoFijo();

	//-----PLAZO FIJO----
	void setElegible(bool);
	bool getElegible();
	//----------SERVICIOS PROFESIONALES-------
	void setHorario(string);
	void setTipoServicio(string);
	string getHorario();
	string getTipoServicio();
	//-----TIEMPO INDEFINIDO----
	void setPlaza(Plaza&);
	Plaza* getPlaza();

	string toString();
};