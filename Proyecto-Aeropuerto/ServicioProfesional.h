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

//-------------- set´s ------------------

	void setHorario(string);
	void setTipoServicio(string);

//-------------- get´s ------------------

	string getHorario();
	string getTipoServicio();
	string toString();
};