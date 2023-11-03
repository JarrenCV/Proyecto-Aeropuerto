#pragma once
#include"Empleado.h"
#include"Fecha.h"

class Contrato {

protected:
	string codigoContrato;
	string descripcionPuesto;
	double salario;
	Fecha* ingresoLaboral;
	Fecha* culminacionLaboral;
	Empleado* empContratado;

public:

	Contrato();
	Contrato(string, string, double, Fecha&, Fecha&);  // Los contratos nacen o no con un empleado?
	// recuerdo que el profe mencion� algo al respecto, de que desp�es se le agrega (Talvez preguntar)
	
	virtual ~Contrato();  // Aqu� si se borrarian los objetos din�micos

//-------------- set�s ------------------
	void setCodigoContrato(string);
	void setDescripcionPuesto(string);
	void setSalario(double);
	void setFechaIngreso(Fecha*);
	void setFechaCulminacion(Fecha*);   // estas como punteros porque solo se clona la fecha recivida por par�metros con get talvez?? 
		                               // tamb�en pueden ser recibidas por par�metros, pero no lo veo necesario

	void setEmpleadoContratado(Empleado*);
//-------------- get�s ------------------
	string getCodigoContrato();                      // los get�s deber�an de ser virtuales? a parte de su toString ya que es una clase virtual y tal
	string getDescripcionPuesto();
	double getSalario();
	Fecha* getFechaIngreso();
	Fecha* getFechaCulminacion(); 
	Empleado* getEmpleadoContratado();
//--------------------------------------
	virtual string toString() = 0;
};