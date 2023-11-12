#pragma once
#include"ListaAviones.h"
#include"ListaContratos.h"
#include"ListaEmpleados.h"
#include"ListaPlaza.h"
// Nombre de estudiantes:
// Lesber Huerta Cornejo 
// Jarren Chaves Vizcaíno

class Aeropuerto
{
private:
	string nombreEmpresa;
	string cedulaJuridica;
	string telefonoEmpresa;
	ListaAviones* contenedorAviones;
	ListaContratos* contenedorContratos;
	ListaEmpleados* contenedorEmpleados;
	ListaPlaza* contenedorPlazas;
	
public:
	Aeropuerto(string, string, string, ListaAviones&, ListaContratos&, ListaEmpleados&);
	virtual ~Aeropuerto();

	ListaAviones* getListaAviones();
	ListaContratos* getListaContratos();
	ListaEmpleados* getListaEmpleados();
	ListaPlaza* getListaPlaza();

	bool ingresaEmpleado(Empleado&);
	bool ingresaAvion(Avion&);
	bool ingresaContrato(Contrato&);
	bool ingresaPlaza(Plaza&);
	
	string consultaTrabajador();
	Avion* avionDeCargaMayorAreaDeAcceso();
	string reportePlazoFijo2Anios();
	string reporteTripulacionAvionComercial();
	string reporteServiciosProfecionales();
	string reportePlazoFijo();
	string reporteTiempoIndefinido();
	string reporteAvionesMas20(Fecha&);
	string reportePilotosAvionesCarga();
	string reporteContratosConEmpleado();
	string reporteAeronaveConTripulacion();
	string reporteSoloAeronaves();


};

