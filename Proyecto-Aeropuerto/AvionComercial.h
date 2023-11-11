#pragma once
#include"AviacionCivil.h"

class AvionComercial:public AviacionCivil{
private:
	//Queda sin atributos porque asi dijo el profe
public:
	AvionComercial();
	AvionComercial(Fecha&,double,string,string);
	virtual ~AvionComercial();

	//----------AVION DE CARGA-------
	void setAlturaPuerta(double);
	void setAnchuraPuerta(double);
	double getAlturaPuerta();
	double getAnchuraPuerta();
	//-----AVION MILITAR----
	void setVelocidadMaxima(double);
	double getVelocidadMaxima();

	string toString();
};

