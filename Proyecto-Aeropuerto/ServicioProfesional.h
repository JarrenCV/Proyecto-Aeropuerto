#pragma once
#include"Contrato.h"

class ServicioProfesional : public Contrato {
private:

	string horario;
	string tipoServicio;

public:

	ServicioProfesional();
	ServicioProfesional(string, string, string, string, double, Fecha&, Fecha&);

	virtual ~ServicioProfesional();


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
	
	string toString();
};