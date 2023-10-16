#pragma once
#include"Fecha.h"
#include"TablaAviones.h"

class Avion{
protected:
	Fecha* fechaCreacion;
	double distanciaRecorrida;
	string categoria;
	string tipoAvion;

public:
	Avion();
	Avion(Fecha&, double, string, string);
	virtual ~Avion();

	void setFecha(int, int, int);
	void setDistanciaRecorrida(double);
	void setCategoria(string);
	void setTipoAvion(string);

	Fecha* getFecha();
	double getDistanciaRecorrida();
	string getCategoria();
	string getTipoAvion();
	
	virtual string toString() = 0;
};

