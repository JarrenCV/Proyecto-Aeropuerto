#pragma once
#include"Avion.h"

class AviacionMilitar:public Avion{
private:
	string categoria;
	double velocidadMaxima;
	string tipoAvionMilitar;

public:
	AviacionMilitar();
	AviacionMilitar(Fecha&, double, string, double, string);
	virtual ~AviacionMilitar();

	void setCategoria(string);
	void setVelocidadMaxima(double);
	void setTipoAvionMilitar(string);

	string getCategoria();
	double getVelocidadMaxima();
	string getTipoAvionMilitar();

	string toString();

};

