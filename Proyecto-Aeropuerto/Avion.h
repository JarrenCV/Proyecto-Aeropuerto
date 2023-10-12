#pragma once
#include"Fecha.h"

class Avion{
protected:
	Fecha* fechaCreacion;
	double distanciaRecorrida;

public:
	Avion();
	Avion(Fecha&, double);
	virtual ~Avion();

	void setFecha(int, int, int);
	void setDistanciaRecorrida(double);

	Fecha* getFecha();
	double getDistanciaRecorrida();
	
	virtual string toString() = 0;
};

