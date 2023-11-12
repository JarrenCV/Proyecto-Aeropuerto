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
	void setPiloto(Empleado*);
	void setCopiloto(Empleado*);
	void setAzafata(Empleado*);

	Fecha* getFecha();
	double getDistanciaRecorrida();
	string getCategoria();
	int getTipoAvion();
	Empleado* getPiloto();
	Empleado* getCopiloto();
	Empleado* getAzafata();


	//-------------------AVIACION CIVIL-------------------
	virtual void setNumeroPlaca(string) = 0;
	virtual string getNumeroPlaca() = 0;
	//----------AVION DE CARGA-------
	virtual void setAlturaPuerta(double) = 0;
	virtual void setAnchuraPuerta(double) = 0;
	virtual double getAlturaPuerta() = 0;
	virtual double getAnchuraPuerta() = 0;
	//-----AVION MILITAR----
	virtual void setVelocidadMaxima(double) = 0;
	virtual double getVelocidadMaxima() = 0;
	//------toString-----
	virtual string toString() = 0;
};

