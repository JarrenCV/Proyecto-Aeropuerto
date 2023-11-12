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
	Aeropuerto(string, string, string, ListaAviones&, ListaContratos&, ListaEmpleados&, ListaPlaza&);
	virtual ~Aeropuerto();

	ListaAviones* getListaAviones();
	ListaContratos* getListaContratos();
	ListaEmpleados* getListaEmpleados();
	ListaPlaza* getListaPlaza();

	bool ingresaEmpleado(Empleado&);
	bool ingresaAvion(Avion&);
	bool ingresaContrato(Contrato&);
	bool ingresaPlaza(Plaza&);
	// ------------------------IDENTIFICACION DE CLASES----------------------
	bool buscaCedula(string);
	bool buscaPlaca(string);
	// -----------------EMPLEADOS---------------
	bool esPiloto(string);
	bool esCopiloto(string);
	bool esAzafata(string);
	bool esPlanta(string);
	bool esAdministrativo(string);
	bool esMiscelaneo(string);

	//--------------Contratos-------------------
	bool esServicioProfesional(string);
	bool esPlazoFijo(string);
	bool esTiempoIndefinido(string);

	// ------------------------CAMBIOS EN EMPLEADOS--------------------------
	bool eliminaEmpleado(string);
	void editaAniosExperiancia(string, int); // Piloto
	void editaTelefono(string, string); // Copiloto
	void editaNacionalidad(string, string); // Azafata
	void editaLabor(string, string); // Planta
	void editaTituloUniversitario(string, string); // Administrativo
	void editaGradoEscolaridad(string, string); // Miscelaneo

	// ------------------------CAMBIOS EN AVIONES--------------------------
	void quitaPiloto(string);
	void quitaCopiloto(string);
	void quitaAzafata(string);
	void cambiaPlacaAvion(string, string);
	void cambiaAnchura(string, double);
	void cambiaAltura(string, double);
	void cambiaDistanciaRecorrida(string, double);


	// ------------------------CAMBIOS EN CONTRATOS--------------------------
	bool buscaCodigoContrato(string);
	Contrato* buscaContratoDeEmpleado(string);
	bool eliminaContratoPorCedula(string);
	void cambiaDescripcionPuesto(string, string);
	void cambiaSalario(string, double);
	void cambiaHorario(string, string);
	void cambiaTipoServicio(string, string);
	void cambiaNombrePuestoPlaza(string, string);
	
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

