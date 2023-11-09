#include "Aeropuerto.h"

Aeropuerto::Aeropuerto(string nomE, string cedJur, string numTelf, ListaAviones& contAvion, ListaContratos& contContrato, ListaEmpleados& contEmpleado)
{
	nombreEmpresa = nomE;
	cedulaJuridica = cedJur;
	telefonoEmpresa = numTelf;
	contenedorAviones = (ListaAviones*)&contAvion;
	contenedorContratos = (ListaContratos*)&contContrato;
	contenedorEmpleados = (ListaEmpleados*)&contEmpleado;
}

Aeropuerto::~Aeropuerto()
{
	if (contenedorAviones != NULL) delete contenedorAviones;
	if (contenedorContratos != NULL) delete contenedorContratos;
	if (contenedorEmpleados != NULL) delete contenedorEmpleados;
}

ListaAviones* Aeropuerto::getListaAviones()
{
	return contenedorAviones;
}

ListaContratos* Aeropuerto::getListaContratos()
{
	return contenedorContratos;
}

ListaEmpleados* Aeropuerto::getListaEmpleados()
{
	return contenedorEmpleados;
}

bool Aeropuerto::ingresaEmpleado(Empleado& emp)
{
	contenedorEmpleados->ingresaUltimo(emp);
	return true;
}

bool Aeropuerto::ingresaAvion(Avion& avi)
{
	// Preguntar si hay algun limitante de aviones, por ejemplo que no pueden haber dos aviones iguales
	// o si hay un numero maximo de aviones, en el documento dice que el aeropueto tiene 15 aviones, los de las tablas
	contenedorAviones->ingresaUltimo(avi);
	return true;
}

bool Aeropuerto::ingresaContrato(Contrato& contrat)
{
	string cod = contrat.getCodigoContrato();
	if (!contenedorContratos->buscaContrato(cod)) { // == false
		contenedorContratos->ingresaUltimo(contrat);
		return true;
	}
	else
		return false;
}
