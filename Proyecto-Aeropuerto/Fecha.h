#pragma once
#include<iostream>
#include<sstream>
using namespace std;
// Nombre de estudiantes:
// Lesber Huerta Cornejo 
// Jarren Chaves Vizcaíno

class Fecha{
private:
	int dia;
	int mes;
	int anio;
public:
	Fecha();
	Fecha(int, int, int);
	virtual ~Fecha();

	void setDia(int);
	void setMes(int);
	void setAnio(int);

	int getDia();
	int getMes();
	int getAnio();

	bool esMenorQue(Fecha&);
	int diferenciaAnios(Fecha&, Fecha&);

	string toString();
};

