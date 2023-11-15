#pragma once
#include"Tripulacion.h"
// Nombre de estudiantes:
// Lesber Huerta Cornejo 
// Jarren Chaves Vizcaíno

class Piloto : public Tripulacion
{
private:
	int aniosExperiencia;
public:
	Piloto();
	Piloto(string, string, int, int);
	virtual ~Piloto();

	int getTipoEmpleado();

	//--------PILOTO---------
	void setAniosExperiencia(int);
	int getAniosExperiencia();
	//--------COPILOTO-------
	void setTelefono(string);
	string getTelefono();
	//--------AZAFATA--------
	void setNacionalidad(string);
	string getNacionalidad();
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
	void save(ofstream&);
	void read(ifstream&);

	string toString();
};

