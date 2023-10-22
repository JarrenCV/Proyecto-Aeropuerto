#pragma once
#include"Contrato.h"

class ServicioProfecional : public Contrato {
private:

	string horario;
	string tipoServicio;

public:

	ServicioProfecional();
	ServicioProfecional(string, string, string, string, double, Fecha&, Fecha&);

	virtual ~ServicioProfecional();

//-------------- set´s ------------------

	void setHorario(string);
	void setTipoServicio(string);

//-------------- get´s ------------------

	string getHorario();
	string getTipoServicio();
	string toString();
};