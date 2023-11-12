#pragma once
#include "Planta.h"
// Nombre de estudiantes:
// Lesber Huerta Cornejo 
// Jarren Chaves Vizcaíno

class Miscelaneo : public Planta
{
private:
	string gradoEscolaridad;
public:
	Miscelaneo();
	Miscelaneo(string, string, int, string, string);
	virtual ~Miscelaneo();
	//-----MISCELANEO--------
	void setGradoEscolaridad(string);
	string getGradoEscolaridad();
	//-------------------TRIPULACION-------------------
	//----------PILOTO-------
	string reportePilotos();
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
	//-----ADMINISTRATIVO----
	void setTituloUniversitario(string);
	string getTituloUniversitario();
	

	string toString();
};

