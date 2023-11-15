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
#include"ControladoraEnlace.h"
#include"ControladoraArchivos.h"

class ControladoraPrincipal {
private:
	Aeropuerto* aeropuerto; // Flecha a ecuación cuadrática...
	ListaEmpleados* contEmpleados;
	ListaAviones* contAviones;
	ListaContratos* contContratos;
	ListaPlaza* contPlazas;
	Fecha* fecha;
	ofstream empleado, avion, contrato, plaza;
	ifstream empleadoEsc, avionEsc, contratoEsc, plazaEsc;
	ControladoraIngresos contrIngresos;
	ControladoraMantenimiento contrMant;
	ControladoraReportes contrReport;
	ControladoraConsultas contrCons;
	ControladoraEnlace contrEnlace;
	ControladoraArchivo contrArchi;

public:

	ControladoraPrincipal(int,int,int);

	virtual ~ControladoraPrincipal();

	int controlMenu();

	void control0();
	
	void controlIngresos();
	void controlMantenimiento();
	void controlReportes();
	void controlConsultas();
	void controlEnlaces();
	void controlArchivos();
};