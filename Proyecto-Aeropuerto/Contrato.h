#pragma once
#include"Empleado.h"
#include"Fecha.h"
#include"Plaza.h"
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
	// recuerdo que el profe mencionó algo al respecto, de que despúes se le agrega (Talvez preguntar)
	
	virtual ~Contrato();  // Aquí si se borrarian los objetos dinámicos

//-------------- set´s ------------------
	void setCodigoContrato(string);
	void setDescripcionPuesto(string);
	void setSalario(double);
	void setFechaIngreso(Fecha*);
	void setFechaCulminacion(Fecha*);   // estas como punteros porque solo se clona la fecha recivida por parámetros con get talvez?? 
		                               // tambíen pueden ser recibidas por parámetros, pero no lo veo necesario

	void setEmpleadoContratado(Empleado*);
//-------------- get´s ------------------
	string getCodigoContrato();                      // los get´s deberían de ser virtuales? a parte de su toString ya que es una clase virtual y tal
	string getDescripcionPuesto();
	double getSalario();
	Fecha* getFechaIngreso();
	Fecha* getFechaCulminacion(); 
	Empleado* getEmpleadoContratado();
//--------------------------------------

	//----------SERVICIOS PROFESIONALES-------
	virtual void setHorario(string) = 0;
	virtual void setTipoServicio(string) = 0;
	virtual string getHorario() = 0;
	virtual string getTipoServicio() = 0;
	//-----PLAZO FIJO----
	virtual void setElegible(bool) = 0;
	virtual bool getElegible() = 0;
	//-----TIEMPO INDEFINIDO----
	virtual void setPlaza(Plaza&) = 0;
	virtual Plaza* getPlaza() = 0;
	//------toString-----
	virtual string toString() = 0;
};