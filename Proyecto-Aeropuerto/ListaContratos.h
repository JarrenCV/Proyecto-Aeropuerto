#pragma once
#include"NodoContrato.h"

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

	string toString();
};

