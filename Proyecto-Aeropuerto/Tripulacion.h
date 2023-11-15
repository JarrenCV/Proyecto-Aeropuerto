#pragma once
#include"Empleado.h"
#include"Avion.h"
// Nombre de estudiantes:
// Lesber Huerta Cornejo 
// Jarren Chaves Vizcaíno

class Tripulacion : public Empleado
{
private:
	
public:
	Tripulacion();
	Tripulacion(string, string, int);
	virtual ~Tripulacion();

	virtual int getTipoEmpleado() = 0;

	//----------PILOTO-------
	virtual void setAniosExperiencia(int) = 0;
	virtual int getAniosExperiencia() = 0;
	//--------COPILOTO-------
	virtual void setTelefono(string) = 0;
	virtual string getTelefono() = 0;
	//--------AZAFATA--------
	virtual void setNacionalidad(string) = 0;
	virtual string getNacionalidad() = 0;
	// ----------------------ARCHIVOS---------------------
	virtual void save(ofstream&) = 0;
	virtual void read(ifstream&) = 0;
	//--------toString-------
	virtual string toString() = 0;
};

