#pragma once
#include"AviacionCivil.h"

class AvionDeCarga: public AviacionCivil{
private:
	double alturaPuerta;
	double anchuraPuerta;
public:
	AvionDeCarga();
	AvionDeCarga(Fecha&, double, string, string, double, double);
	virtual ~AvionDeCarga();

	void setAlturaPuerta(double);
	void setAnchuraPuerta(double);
	
	double getAlturaPuerta();
	double getAnchuraPuerta();



	string toString();
};

