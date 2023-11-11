#pragma once
#include"ListaAviones.h"
#include"ListaContratos.h"
#include"ListaEmpleados.h"
#include"ListaPlaza.h"

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

};

