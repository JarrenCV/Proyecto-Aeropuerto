#pragma once
#include"Contrato.h"
// Nombre de estudiantes:
// Lesber Huerta Cornejo 
// Jarren Chaves Vizcaíno

class PlazoFijo : public Contrato {
private:
	bool elegible;

public:

	PlazoFijo();
	PlazoFijo(bool, string, string , double, Fecha&, Fecha&);

	virtual ~PlazoFijo();

	int getTipoContrato();

	//-----PLAZO FIJO----
	void setElegible(bool);
	bool getElegible();
	//----------SERVICIOS PROFESIONALES-------
	void setHorario(string);
	void setTipoServicio(string);
	string getHorario();
	string getTipoServicio();
	//-----TIEMPO INDEFINIDO----
	;
	void setPlaza(Plaza&);
	Plaza* getPlaza();
	string reportePlazoFijoMas2Anios();
	string reporteServiciosProfecionales();
	string reportePlazoFijo();
	string reporteTiempoIndefinido();
	string toString();
};