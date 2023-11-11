#pragma once
#include "Tripulacion.h"

class Azafata : public Tripulacion
{
private:
	string nacionalidad;
public:
	Azafata();
	Azafata(string, string, int, string);
	virtual ~Azafata();

	//--------AZAFATA--------
	void setNacionalidad(string);
	string getNacionalidad();
	//--------PILOTO---------
	void setAniosExperiencia(int);
	int getAniosExperiencia();
	//--------COPILOTO-------
	void setTelefono(string);
	string getTelefono();
	//------------PLANTA-----------
	void setLabor(string);
	string getLabor();
	//-----ADMINISTRATIVO----
	void setTituloUniversitario(string);
	string getTituloUniversitario();
	//-----MISCELANEO--------
	void setGradoEscolaridad(string);
	string getGradoEscolaridad();

	string toString();
};

