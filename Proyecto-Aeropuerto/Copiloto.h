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
	
	int getTipoEmpleado();

	//--------COPILOTO-------
	void setTelefono(string);
	string getTelefono();

	//--------AZAFATA--------
	void setNacionalidad(string);
	string getNacionalidad();
	//--------PILOTO---------
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
	// ----------------------ARCHIVOS---------------------
	virtual void save(ofstream&);
	virtual void read(ifstream&);

	string toString();
};

