#pragma once
#include"InterfazEmpleado.h"
#include"MenuPrincipal.h"
#include"InterfazAvion.h"
#include"InterfazContrato.h"
#include"InterfazReporteConsulta.h"
#include"ControladoraIngresos.h"
#include"ControladoraMantenimiento.h"
#include"ControladoraReportes.h"
#include"ControladoraConsultas.h"

class ControladoraPrincipal {
private:
	Aeropuerto* aeropuerto; // Flecha a ecuación cuadrática...
	ListaEmpleados* contEmpleados;
	ListaAviones* contAviones;
	ListaContratos* contContratos;
	ListaPlaza* contPlazas;
	Fecha* fecha;
	ControladoraIngresos contrIngresos;
	ControladoraMantenimiento contrMant;
	ControladoraReportes contrReport;
	ControladoraConsultas contrCons;

public:

	ControladoraPrincipal(int,int,int);

	virtual ~ControladoraPrincipal();

	int controlMenu();

	void control0();
	
	void controlIngresos();
	void controlMantenimiento();
	void controlReportes();
	void controlConsultas();

};