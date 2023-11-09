#pragma once
#include"ListaAviones.h"
#include"ListaContratos.h"
#include"ListaEmpleados.h"

class Aeropuerto
{
private:
	string nombreEmpresa;
	string cedulaJuridica;
	string telefonoEmpresa;
	ListaAviones* contenedorAviones;
	ListaContratos* contenedorContratos;
	ListaEmpleados* contenedorEmpleados;
	
public:
	Aeropuerto(string, string, string, ListaAviones&, ListaContratos&, ListaEmpleados&);
	virtual ~Aeropuerto();

	ListaAviones* getListaAviones();
	ListaContratos* getListaContratos();
	ListaEmpleados* getListaEmpleados();


	bool ingresaEmpleado(Empleado&);
	bool ingresaAvion(Avion&);
	bool ingresaContrato(Contrato&);
	

};

