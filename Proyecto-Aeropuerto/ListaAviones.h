#pragma once
#include"NodoAvion.h"
// Nombre de estudiantes:
// Lesber Huerta Cornejo 
// Jarren Chaves Vizca�no

#include"Piloto.h"
class ListaAviones{
private:
	NodoAvion* ppio;

public:
	ListaAviones();
	virtual ~ListaAviones();

	void ingresaPrimero(Avion&);
	void ingresaUltimo(Avion&);
	bool existeAvionConPlaca(string);
	Avion* buscaAvionPlaca(string);
	// Desliga tripulacion
	void quitaPiloto(string);
	void quitaCopiloto(string);
	void quitaAzafata(string);
	
	void cambiaPlaca(string, string);
	void cambiaAnchura(string, double);
	void cambiaAltura(string, double);
	void cambiaDistanciaRecorrida(string, double);

	Avion* avionCargaMayorArea();
	string tripulacionDeAvionComercial();
	string avionesMas20(Fecha&);
	string toString();
};

