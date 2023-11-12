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

ListaPlaza* Aeropuerto::getListaPlaza()
{
	return contenedorPlazas;
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

bool Aeropuerto::ingresaPlaza(Plaza& placita)
{
	contenedorPlazas->ingresaUltimo(placita);
	return true;
}

string Aeropuerto::consultaTrabajador()
{
	stringstream s;
	s << contenedorEmpleados->consultaTrabajador();
	return s.str();
}

Avion* Aeropuerto::avionDeCargaMayorAreaDeAcceso()
{
	return contenedorAviones->avionCargaMayorArea();
}

string Aeropuerto::reportePlazoFijo2Anios()
{
	stringstream s;
	s << contenedorContratos->reportePlazoFijoMas2Anios();
	return s.str();
}

string Aeropuerto::reporteTripulacionAvionComercial()
{
	stringstream s;
	s << contenedorAviones->tripulacionDeAvionComercial();
	return s.str();
}

string Aeropuerto::reporteServiciosProfecionales()
{
	stringstream s;
	s << contenedorContratos->reporteServiciosProfecionales();
	return s.str();
}

string Aeropuerto::reportePlazoFijo()
{
	stringstream s;
	s << contenedorContratos->reportePlazoFijo();
	return s.str();
}
string Aeropuerto::reporteTiempoIndefinido()
{
	stringstream s;
	s << contenedorContratos->reporteTiempoIndefinido();
	return s.str();
}


string Aeropuerto::reporteAvionesMas20(Fecha& f)
{
	stringstream s;
	s << contenedorAviones->avionesMas20(f);
	return s.str();
}

string Aeropuerto::reportePilotosAvionesCarga()
{
	stringstream s;
	s << contenedorEmpleados->reportePilotos();
	return string();
}

string Aeropuerto::reporteContratosConEmpleado()
{
	stringstream s;
	s << contenedorContratos->toString();
	return s.str();
}

string Aeropuerto::reporteAeronaveConTripulacion() 
{
	stringstream s;
	s << contenedorAviones->toString();
	return s.str();

}

string Aeropuerto::reporteSoloAeronaves()
{
	stringstream s;
	s << contenedorAviones->toString();
	return s.str();
}
