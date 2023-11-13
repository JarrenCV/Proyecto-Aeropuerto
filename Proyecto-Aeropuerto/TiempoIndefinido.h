#pragma once
#include"Contrato.h"
#include"Plaza.h"
// Nombre de estudiantes:
// Lesber Huerta Cornejo 
// Jarren Chaves Vizcaíno

class TiempoIndefinido : public Contrato {
private:
	Plaza* plaza;

public: 

	TiempoIndefinido();
	TiempoIndefinido(Plaza&, string, string , double, Fecha&, Fecha&);
	
	virtual ~TiempoIndefinido();

	int getTipoContrato();

	//-----TIEMPO INDEFINIDO----
	string reporteTiempoIndefinido();
	void setPlaza(Plaza&);
	Plaza* getPlaza();
	//-----PLAZO FIJO----
	string reportePlazoFijo();
	void setElegible(bool);
	bool getElegible();
	//----------SERVICIOS PROFESIONALES-------
	string reporteServiciosProfecionales();
	void setHorario(string);
	void setTipoServicio(string);
	string getHorario();
	string getTipoServicio();
	
	string reportePlazoFijoMas2Anios();
	string toString();
};