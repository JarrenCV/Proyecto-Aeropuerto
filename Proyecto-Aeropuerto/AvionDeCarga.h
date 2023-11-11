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

	//-----AVION DE CARGA----
	void setAlturaPuerta(double);
	void setAnchuraPuerta(double);
	double getAlturaPuerta();
	double getAnchuraPuerta();
	//-----AVION MILITAR----
	void setVelocidadMaxima(double);
	double getVelocidadMaxima();


	string toString();
};

