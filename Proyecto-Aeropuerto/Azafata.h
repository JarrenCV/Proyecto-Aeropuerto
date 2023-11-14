#pragma once
#include "Tripulacion.h"
// Nombre de estudiantes:
// Lesber Huerta Cornejo 
// Jarren Chaves Vizcaíno
class Azafata : public Tripulacion
{
private:
	string nacionalidad;
public:
	Azafata();
	Azafata(string, string, int, string);
	virtual ~Azafata();

	int getTipoEmpleado();

	//--------AZAFATA--------
	void setNacionalidad(string);
	string getNacionalidad();
	//--------PILOTO---------
	string reportePilotos();
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
	// ----------------------ARCHIVOS---------------------
	virtual void save(ofstream&);
	virtual void read(ifstream&);

	string toString();
};

