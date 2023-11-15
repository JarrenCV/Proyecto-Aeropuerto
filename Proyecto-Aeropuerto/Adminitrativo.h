#pragma once
#include "Planta.h"
// Nombre de estudiantes:
// Lesber Huerta Cornejo 
// Jarren Chaves Vizcaíno
class Adminitrativo : public Planta
{
private:
	string tituloUniversitario;
public:
	Adminitrativo();
	Adminitrativo(string, string, int, string, string);
	virtual ~Adminitrativo();

	int getTipoEmpleado();

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
	// ----------------------ARCHIVOS--------------
	void save(ofstream&);
	void read(ifstream&);
	string toString();
};