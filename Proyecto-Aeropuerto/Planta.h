#pragma once
#include "Empleado.h"

class Planta : public Empleado
{
private:
	string labor;
public:
	Planta();
	Planta(string, string, int, string);
	virtual ~Planta();

	void setLabor(string);
	string getLabor();
	//-----ADMINISTRATIVO----
	virtual void setTituloUniversitario(string) = 0;
	virtual string getTituloUniversitario() = 0;
	//-----MISCELANEO--------
	virtual void setGradoEscolaridad(string) = 0;
	virtual string getGradoEscolaridad() = 0;
	//------toString-----
	virtual string toString() = 0;
};