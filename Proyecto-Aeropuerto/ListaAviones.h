#pragma once
#include"NodoAvion.h"
#include"AvionComercial.h"
#include"AvionDeCarga.h"
#include"AviacionMilitar.h"
// Nombre de estudiantes:
// Lesber Huerta Cornejo 
// Jarren Chaves Vizcaíno

#include"Piloto.h"
class ListaAviones{
private:
	NodoAvion* ppio;

public:
	ListaAviones();
	virtual ~ListaAviones();

	NodoAvion* getPpio();
	void ingresaPrimero(Avion&);
	void ingresaUltimo(Avion&);
	bool eliminaAvionPorPlaca(string);
	bool existeAvionConPlaca(string);
	bool existeAvionVelocidad(double);
	Avion* buscaAvionPlaca(string);
	Avion* buscaAvionVelocidad(double);
	// Desliga tripulacion
	void quitaPiloto(string);
	void quitaCopiloto(string);
	void quitaAzafata(string);
	
	void cambiaPlaca(string, string);
	void cambiaAnchura(string, double);
	void cambiaAltura(string, double);
	void cambiaDistanciaRecorrida(string, double);

	string reportePilotosCarga();
	string consultaCivilPorPlaca(string);
	string consultaTrabajador(string);
	Avion* avionCargaMayorArea();
	string tripulacionDeAvionComercial();
	string avionesMas20(Fecha&);

	// ------ARCHIVOS----------
	void saveAll(ofstream&);
	void readAll(ifstream&);
	string toString();
};

