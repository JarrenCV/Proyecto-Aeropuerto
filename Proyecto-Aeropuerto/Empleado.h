#pragma once
#include <iostream>
#include<sstream>
#include<fstream>
using namespace std;
// Nombre de estudiantes:
// Lesber Huerta Cornejo 
// Jarren Chaves Vizcaíno

class Empleado
{
protected:
	string cedula;
	string nombre;
	int edad;
	int tipoEmpleado;

public:
	Empleado();
	Empleado(string, string, int);
	virtual ~Empleado();

	void setCedula(string);
	void setNombre(string);
	void setEdad(int);

	string getCedula();
	string getNombre();
	int getEdad();

	virtual int getTipoEmpleado() = 0;
	
	//-------------------TRIPULACION-------------------
	//----------PILOTO-------
	virtual void setAniosExperiencia(int) = 0;
	virtual int getAniosExperiencia() = 0;
	//--------COPILOTO-------
	virtual void setTelefono(string) = 0;
	virtual string getTelefono() = 0;
	//--------AZAFATA--------
	virtual void setNacionalidad(string) = 0;
	virtual string getNacionalidad() = 0;
	//----------------------PLANTA---------------------
	virtual void setLabor(string) = 0;
	virtual string getLabor() = 0;
	//-----ADMINISTRATIVO----
	virtual void setTituloUniversitario(string) = 0;
	virtual string getTituloUniversitario() = 0;
	//-----MISCELANEO--------
	virtual void setGradoEscolaridad(string) = 0;
	virtual string getGradoEscolaridad() = 0;
	// ----------------------ARCHIVOS---------------------
	virtual void save(ofstream&) = 0;
	virtual void read(ifstream&) = 0;
	//------toString-----
	virtual string toString() = 0;
};

