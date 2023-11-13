#pragma once
#include"AviacionCivil.h"
// Nombre de estudiantes:
// Lesber Huerta Cornejo 
// Jarren Chaves Vizcaíno
class AvionComercial:public AviacionCivil{

	//Queda sin atributos porque asi dijo el profe

public:
	AvionComercial();
	AvionComercial(Fecha&,double,string,string);
	virtual ~AvionComercial();

	int getTipoAvion();

	//----------AVION DE CARGA-------
	double getAreaCarga();
	void setAlturaPuerta(double);
	void setAnchuraPuerta(double);
	double getAlturaPuerta();
	double getAnchuraPuerta();
	//-----AVION MILITAR----
	void setVelocidadMaxima(double);
	double getVelocidadMaxima();

	string tripulacionDeAvionComercial();
	string reporteAvionMas20(Fecha&);
	string reporteSoloAviacion();
	string toString();
};

