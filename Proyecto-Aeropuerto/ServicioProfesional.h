#pragma once
#include"Contrato.h"
// Nombre de estudiantes:
// Lesber Huerta Cornejo 
// Jarren Chaves Vizcaíno

class ServicioProfesional : public Contrato {
private:

	string horario;
	string tipoServicio;

public:

	ServicioProfesional();
	ServicioProfesional(string, string, string, string, double, Fecha&, Fecha&);

	virtual ~ServicioProfesional();

	int getTipoContrato();

	//----------SERVICIOS PROFESIONALES-------
	void setHorario(string);
	void setTipoServicio(string);
	string getHorario();
	string getTipoServicio();
	//-----TIEMPO INDEFINIDO----
	void setPlaza(Plaza&);
	Plaza* getPlaza();
	//-----PLAZO FIJO----
	void setElegible(bool);
	bool getElegible();
	

	string reporteServiciosProfecionales();
	string reportePlazoFijo();
	string reporteTiempoIndefinido();
	// ----------------------ARCHIVOS---------------------
	virtual void save(ofstream&);
	virtual void read(ifstream&);

	string toString();
};