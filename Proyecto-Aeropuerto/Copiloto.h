#pragma once
#include "Tripulacion.h"
// Nombre de estudiantes:
// Lesber Huerta Cornejo 
// Jarren Chaves Vizcaíno
class Copiloto : public Tripulacion
{
private:
	string telefono;
public:
	Copiloto();
	Copiloto(string, string, int, string);
	virtual ~Copiloto();

	//--------COPILOTO-------
	void setTelefono(string);
	string getTelefono();

	//--------AZAFATA--------
	void setNacionalidad(string);
	string getNacionalidad();
	//--------PILOTO---------
	string reportePilotos();
	void setAniosExperiencia(int);
	int getAniosExperiencia();
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

