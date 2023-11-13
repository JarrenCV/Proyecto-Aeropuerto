#pragma once
#include "Empleado.h"
// Nombre de estudiantes:
// Lesber Huerta Cornejo 
// Jarren Chaves Vizcaíno

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

	virtual int getTipoEmpleado() = 0;

	//----------PILOTO-------
	virtual string reportePilotos() = 0;
	virtual void setAniosExperiencia(int) = 0;
	virtual int getAniosExperiencia() = 0;
	//--------COPILOTO-------
	virtual void setTelefono(string) = 0;
	virtual string getTelefono() = 0;
	//--------AZAFATA--------
	virtual void setNacionalidad(string) = 0;
	virtual string getNacionalidad() = 0;
	//-----ADMINISTRATIVO----
	virtual void setTituloUniversitario(string) = 0;
	virtual string getTituloUniversitario() = 0;
	//-----MISCELANEO--------
	virtual void setGradoEscolaridad(string) = 0;
	virtual string getGradoEscolaridad() = 0;
	//------toString-----
	virtual string toString() = 0;
};