#pragma once
#include"Avion.h"

class AviacionMilitar:public Avion{
private:
	double velocidadMaxima;

public:
	AviacionMilitar();
	AviacionMilitar(Fecha&, double, string, string, double);
	virtual ~AviacionMilitar();
	
	void setVelocidadMaxima(double);
	
	double getVelocidadMaxima();
	
	string toString();

};

