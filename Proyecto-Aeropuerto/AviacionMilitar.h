#pragma once
#include"Avion.h"

class AviacionMilitar:public Avion{
private:
	double velocidadMaxima;

public:
	AviacionMilitar();
	AviacionMilitar(Fecha&, double, string, double);
	virtual ~AviacionMilitar();
	
	//------AVION MILITAR--------
	void setVelocidadMaxima(double);
	double getVelocidadMaxima();
	//-------------------AVIACION CIVIL-------------------
	void setNumeroPlaca(string);
	string getNumeroPlaca();
	//----------AVION DE CARGA-------
	void setAlturaPuerta(double);
	void setAnchuraPuerta(double);
	double getAlturaPuerta();
	double getAnchuraPuerta();

	string toString();

};