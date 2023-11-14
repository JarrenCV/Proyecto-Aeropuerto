#pragma once
#include"Fecha.h"
#include"TablaAviones.h"
#include"Empleado.h"
// Nombre de estudiantes:
// Lesber Huerta Cornejo 
// Jarren Chaves Vizcaíno

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

	virtual int getTipoAvion() = 0;
	
	Empleado* getPiloto();
	Empleado* getCopiloto();
	Empleado* getAzafata();

	bool edadAvion(Fecha&);

	//-------------------AVIACION CIVIL-------------------
	virtual string tripulacionDeAvionComercial() = 0;
	virtual void setNumeroPlaca(string) = 0;
	virtual string getNumeroPlaca() = 0;
	//----------AVION DE CARGA-------
	virtual double getAreaCarga() = 0;
	virtual void setAlturaPuerta(double) = 0;
	virtual void setAnchuraPuerta(double) = 0;
	virtual double getAlturaPuerta() = 0;
	virtual double getAnchuraPuerta() = 0;
	//-----AVION MILITAR----
	virtual void setVelocidadMaxima(double) = 0;
	virtual double getVelocidadMaxima() = 0;
	//------toString-----
	virtual string reporteAvionMas20(Fecha&) = 0;
	virtual string reporteSoloAviacion() = 0;
	virtual string toString() = 0;
};

