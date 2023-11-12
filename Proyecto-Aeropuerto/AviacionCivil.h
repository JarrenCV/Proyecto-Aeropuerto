#pragma once
#include"Avion.h"
// Nombre de estudiantes:
// Lesber Huerta Cornejo 
// Jarren Chaves Vizcaíno
class AviacionCivil : public Avion {
private:
	string numeroPlaca;
	//

public:
	AviacionCivil();
	AviacionCivil(Fecha&, double, string, string);
	virtual ~AviacionCivil();

	void setNumeroPlaca(string);
	string getNumeroPlaca();
	//----------AVION DE CARGA-------
	virtual double getAreaCarga() = 0;
	virtual void setAlturaPuerta(double) = 0;
	virtual void setAnchuraPuerta(double) = 0;
	virtual double getAlturaPuerta() = 0;
	virtual double getAnchuraPuerta() = 0;

	virtual string tripulacionDeAvionComercial() = 0;
	virtual string reporteAvionMas20(Fecha&) = 0;
	virtual string reporteSoloAviacion() = 0;
	virtual string toString() = 0;
};

