#pragma once
#include"AviacionCivil.h"

class AvionDeCarga: public AviacionCivil{
private:
	string categoria;
	double alturaPuerta;
	double anchuraPuerta;
public:
	AvionDeCarga();
	AvionDeCarga(Fecha&, double, string, string, string, double, double);
	virtual ~AvionDeCarga();

	void setCategoria(string);
	void setAlturaPuerta(double);
	void setAnchuraPuerta(double);

	string getCategoria();
	double getAlturaPuerta();
	double getAnchuraPuerta();



	string toString();
};

