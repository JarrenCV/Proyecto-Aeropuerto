#pragma once
#include"NodoContrato.h"
// Nombre de estudiantes:
// Lesber Huerta Cornejo 
// Jarren Chaves Vizcaíno

class ListaContratos
{
private:
	NodoContrato* ppio;

public:
	ListaContratos();
	virtual ~ListaContratos();

	void ingresaPrimero(Contrato&);
	void ingresaUltimo(Contrato&);
	bool buscaCodigo(string);
	Contrato* buscaContrato(string);
	Contrato* buscaContratoPorCedula(string);
	bool eliminaContratoPorCedula(string);
	bool esServicioProfesional(string);
	bool esPlazoFijo(string);
	bool esTiempoIndefinido(string);

	// Edicion de contratos
	void cambiaDescripcionPuesto(string, string);
	void cambiaSalario(string, double);
	void cambiaHorario(string, string);
	void cambiaTipoServicio(string, string);
	void cambiaNombrePuestoPlaza(string, string);
	string reportePlazoFijoMas2Anios();
	string reporteServiciosProfecionales();
	string reportePlazoFijo();
	string reporteTiempoIndefinido();

	string consultaPorCodContrato(string);
	string toString();
};

