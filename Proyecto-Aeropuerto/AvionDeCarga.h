#pragma once
#include"AviacionCivil.h"
// Nombre de estudiantes:
// Lesber Huerta Cornejo 
// Jarren Chaves Vizcaíno
class AvionDeCarga: public AviacionCivil{
private:
	double alturaPuerta;
	double anchuraPuerta;
public:
	AvionDeCarga();
	AvionDeCarga(Fecha&, double, string, string, double, double);
	virtual ~AvionDeCarga();

	int getTipoAvion();

	//-----AVION DE CARGA----
	double getAreaCarga();
	string tripulacionDeAvionComercial();
	void setAlturaPuerta(double);
	void setAnchuraPuerta(double);
	double getAlturaPuerta();
	double getAnchuraPuerta();
	//-----AVION MILITAR----
	void setVelocidadMaxima(double);
	double getVelocidadMaxima();
	
	string reporteAvionMas20(Fecha&);
	string reporteSoloAviacion();
	string toString();
};

