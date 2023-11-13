#pragma once
#include"Aeropuerto.h"
#include"MensajesGenerales.h"
class InterfazReporteConsulta
{
public:

	static void reporteContratoEmpleado(Aeropuerto&);
	static void reporteAeronaveTripulacion(Aeropuerto&);
	static void reporteAeronave(Aeropuerto&);
	static void reportePilotosAvionesDeCarga(Aeropuerto&);
	static void reporteAvionMas20Anios(Aeropuerto&, Fecha&);
	static void reporteServiciosProfesionales(Aeropuerto&);
	static void reportePlazoFijo(Aeropuerto&);
	static void reporteTiempoIndefinido(Aeropuerto&);
	static void reporteTripulacionAvionComercial(Aeropuerto&);
	static void reportePlazoFijo2Anios(Aeropuerto&);
	static void reporteAvionDeCargaMayorAreaAcceso(Aeropuerto&);

	static void consultaEmpleado(Aeropuerto&);
	static void consultaContrato(Aeropuerto&);
	static void consultaAvion(Aeropuerto&);

};

