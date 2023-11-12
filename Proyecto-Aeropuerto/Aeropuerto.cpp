#include "Aeropuerto.h"

Aeropuerto::Aeropuerto(string nomE, string cedJur, string numTelf, ListaAviones& contAvion, ListaContratos& contContrato, ListaEmpleados& contEmpleado,ListaPlaza& contPlazas)
{
	nombreEmpresa = nomE;
	cedulaJuridica = cedJur;
	telefonoEmpresa = numTelf;
	contenedorAviones = (ListaAviones*)&contAvion;
	contenedorContratos = (ListaContratos*)&contContrato;
	contenedorEmpleados = (ListaEmpleados*)&contEmpleado;
	contenedorPlazas = (ListaPlaza*)&contPlazas;
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
bool Aeropuerto::buscaCedula(string ced)
{
	return contenedorEmpleados->buscaCedula(ced);
}
bool Aeropuerto::buscaPlaca(string placa)
{
	return contenedorAviones->existeAvionConPlaca(placa);
}
// ------------------------IDENTIFICACION DE CLASES----------------------
	// -----------------EMPLEADOS---------------
bool Aeropuerto::esPiloto(string ced)
{
	return contenedorEmpleados->esPiloto(ced);
}
bool Aeropuerto::esCopiloto(string ced)
{
	return contenedorEmpleados->esCopiloto(ced);
}
bool Aeropuerto::esAzafata(string ced)
{
	return contenedorEmpleados->esAzafata(ced);
}
bool Aeropuerto::esPlanta(string ced)
{
	return contenedorEmpleados->esPlanta(ced);
}
bool Aeropuerto::esAdministrativo(string ced)
{
	return contenedorEmpleados->esAdministrativo(ced);
}
bool Aeropuerto::esMiscelaneo(string ced)
{
	return contenedorEmpleados->esMiscelaneo(ced);
}
bool Aeropuerto::esServicioProfesional(string cod)
{
	return contenedorContratos->esServicioProfesional(cod);
}
bool Aeropuerto::esPlazoFijo(string cod)
{
	return contenedorContratos->esPlazoFijo(cod);
}
bool Aeropuerto::esTiempoIndefinido(string cod)
{
	return contenedorContratos->esTiempoIndefinido(cod);
}
// ------------------------CAMBIOS EN EMPLEADOS--------------------------
bool Aeropuerto::eliminaEmpleado(string ced)
{
	return contenedorEmpleados->eliminaEmpleado(ced);
}

void Aeropuerto::editaAniosExperiancia(string ced, int anios)
{
	contenedorEmpleados->editaAniosExperiancia(ced, anios);
}

void Aeropuerto::editaTelefono(string ced, string telefono)
{
	contenedorEmpleados->editaTelefono(ced, telefono);
}

void Aeropuerto::editaNacionalidad(string ced, string nacionalidad)
{
	contenedorEmpleados->editaNacionalidad(ced, nacionalidad);
}

void Aeropuerto::editaLabor(string ced, string labor)
{
	contenedorEmpleados->editaLabor(ced, labor);
}

void Aeropuerto::editaTituloUniversitario(string ced, string titulo)
{
	contenedorEmpleados->editaTituloUniversitario(ced, titulo);
}

void Aeropuerto::editaGradoEscolaridad(string ced, string gradoEsc)
{
	contenedorEmpleados->editaGradoEscolaridad(ced, gradoEsc);
}
// AVIONES
void Aeropuerto::quitaPiloto(string ced)
{
	contenedorAviones->quitaPiloto(ced);
}
void Aeropuerto::quitaCopiloto(string ced)
{
	contenedorAviones->quitaCopiloto(ced);
}
void Aeropuerto::quitaAzafata(string ced)
{
	contenedorAviones->quitaAzafata(ced);
}
void Aeropuerto::cambiaPlacaAvion(string placa, string nuevaPlaca)
{
	contenedorAviones->cambiaPlaca(placa, nuevaPlaca);
}
void Aeropuerto::cambiaAnchura(string placa, double anch)
{
	contenedorAviones->cambiaAnchura(placa, anch);
}
void Aeropuerto::cambiaAltura(string placa, double alt)
{
	contenedorAviones->cambiaAltura(placa, alt);

}
void Aeropuerto::cambiaDistanciaRecorrida(string placa, double distanciaR)
{
	contenedorAviones->cambiaDistanciaRecorrida(placa, distanciaR);
}
// CONTRATOS
bool Aeropuerto::buscaCodigoContrato(string cod)
{
	return contenedorContratos->buscaCodigo(cod);
}
bool Aeropuerto::eliminaContratoPorCedula(string ced)
{
	return contenedorContratos->eliminaContratoPorCedula(ced);
}
void Aeropuerto::cambiaDescripcionPuesto(string cod, string descripcion)
{
	contenedorContratos->cambiaDescripcionPuesto(cod, descripcion);
}
void Aeropuerto::cambiaSalario(string cod, double sal)
{
	contenedorContratos->cambiaSalario(cod, sal);
}
void Aeropuerto::cambiaHorario(string cod, string horario)
{
	contenedorContratos->cambiaHorario(cod, horario);
}
void Aeropuerto::cambiaTipoServicio(string cod, string tipoServicio)
{
	contenedorContratos->cambiaTipoServicio(cod, tipoServicio);
}
void Aeropuerto::cambiaNombrePuestoPlaza(string cod, string nombrePuesto)
{
	contenedorContratos->cambiaNombrePuestoPlaza(cod, nombrePuesto);
}
Contrato* Aeropuerto::buscaContratoDeEmpleado(string ced)
{
	return contenedorContratos->buscaContratoPorCedula(ced);
}

string Aeropuerto::consultaTrabajador(string ced)
{
	stringstream s;
	s << contenedorEmpleados->consultaTrabajador(ced);
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
