#pragma once
#include"Avion.h"
// Nombre de estudiantes:
// Lesber Huerta Cornejo 
// Jarren Chaves Vizcaíno
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
	string tripulacionDeAvionComercial();
	void setNumeroPlaca(string);
	string getNumeroPlaca();
	//----------AVION DE CARGA-------
	double getAreaCarga();
	void setAlturaPuerta(double);
	void setAnchuraPuerta(double);
	double getAlturaPuerta();
	double getAnchuraPuerta();

	string reporteAvionMas20(Fecha&);
	string reporteSoloAviacion();
	string toString();

};