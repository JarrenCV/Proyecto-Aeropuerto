#pragma once
#include "Planta.h"

class Adminitrativo : public Planta
{
private:
	string tituloUniversitario;
public:
	Adminitrativo();
	Adminitrativo(string, string, int, string, string);
	virtual ~Adminitrativo();


	//-----ADMINISTRATIVO----
	void setTituloUniversitario(string);
	string getTituloUniversitario();
	//-------------------TRIPULACION-------------------
	//----------PILOTO-------
	void setAniosExperiencia(int);
	int getAniosExperiencia();
	//--------COPILOTO-------
	void setTelefono(string);
	string getTelefono();
	//--------AZAFATA--------
	void setNacionalidad(string);
	string getNacionalidad();
	//----------------------PLANTA---------------------
	void setLabor(string);
	string getLabor();
	//-----MISCELANEO--------
	void setGradoEscolaridad(string);
	string getGradoEscolaridad();

	

	string toString();
};