#pragma once
#include"Fecha.h"
#include"TablaAviones.h"
#include"Empleado.h"
class Avion{
protected:
	Fecha* fechaCreacion;
	double distanciaRecorrida;
	string categoria;
	int tipoAvion;
	Empleado* piloto;
	Empleado* copiloto;
	Empleado* azafata;

public:
	Avion();
	Avion(Fecha&, double, string);
	virtual ~Avion();

	void setFecha(int, int, int);
	void setDistanciaRecorrida(double);
	void setCategoria(string);
	void setTipoAvion(int);
	void setPiloto(Empleado&);
	void setCopiloto(Empleado&);
	void setAzafata(Empleado&);

	Fecha* getFecha();
	double getDistanciaRecorrida();
	string getCategoria();
	int getTipoAvion();
	Empleado* setPiloto();
	Empleado* setCopiloto();
	Empleado* setAzafata();
	
	virtual string toString() = 0;
};

