#include "InterfazReporteConsulta.h"

void InterfazReporteConsulta::reporteContratoEmpleado(Aeropuerto& aeropuerto)
{
	cout << aeropuerto.reporteContratosConEmpleado() << endl;
}

void InterfazReporteConsulta::reporteAeronaveTripulacion(Aeropuerto& aeropuerto)
{
	cout << aeropuerto.reporteAeronaveConTripulacion() << endl;
}

void InterfazReporteConsulta::reporteAeronave(Aeropuerto& aeropuerto)
{
	cout << aeropuerto.reporteSoloAeronaves() << endl;
}

void InterfazReporteConsulta::reportePilotosAvionesDeCarga(Aeropuerto& aeropuerto)
{
	cout << aeropuerto.reportePilotosAvionesCarga() << endl;
}

void InterfazReporteConsulta::reporteAvionMas20Anios(Aeropuerto& aeropuerto, Fecha& actual)
{
	cout << aeropuerto.reporteAvionesMas20(actual) << endl;
}

void InterfazReporteConsulta::reporteServiciosProfesionales(Aeropuerto& aeropuerto)
{
	cout << aeropuerto.reporteServiciosProfecionales() << endl;
}

void InterfazReporteConsulta::reportePlazoFijo(Aeropuerto& aeropuerto)
{
	cout << aeropuerto.reportePlazoFijo() << endl;
}

void InterfazReporteConsulta::reporteTiempoIndefinido(Aeropuerto& aeropuerto)
{
	cout << aeropuerto.reporteTiempoIndefinido() << endl;
}

void InterfazReporteConsulta::reporteTripulacionAvionComercial(Aeropuerto& aeropuerto)
{
	cout << aeropuerto.reporteTripulacionAvionComercial() << endl;
}

void InterfazReporteConsulta::reportePlazoFijo2Anios(Aeropuerto& aeropuerto)
{
	cout << aeropuerto.reportePlazoFijo2Anios() << endl;
}

void InterfazReporteConsulta::reporteAvionDeCargaMayorAreaAcceso(Aeropuerto& aeropuerto)
{
	if (aeropuerto.avionDeCargaMayorAreaDeAcceso()) {
		cout << aeropuerto.avionDeCargaMayorAreaDeAcceso()->toString() << endl;
	}
	else {
		cout << "No hay aviones de carga en el sistema." << endl;
	}
}

void InterfazReporteConsulta::consultaEmpleado(Aeropuerto& aeropuerto)
{
	string ced;
	cout << "Digite la cedula a consultar: "; cin >> ced;
	if (aeropuerto.buscaCedula(ced)) { 
		aeropuerto.consultaTrabajador(ced); 
	}
	else {
		MensajesGenerales::msjErrorCedulaNoExiste();
	}
}

void InterfazReporteConsulta::consultaContrato(Aeropuerto& aeropuerto)
{
	string cod;
	cout << "Digite el contrato a consultar: "; cin >> cod;
	if (aeropuerto.buscaCodigoContrato(cod)) {
		aeropuerto.consultaPorContrato(cod);
	}
	else {
		MensajesGenerales::msjErrorCodigo();
	}
}

void InterfazReporteConsulta::consultaAvion(Aeropuerto& aeropuerto)
{
	string pla;
	cout << "Digite la placa a consultar: "; cin >> pla;
	if (aeropuerto.buscaPlaca(pla)){
		aeropuerto.aviacionCivilPorPlaca(pla); 
	}
	else {
		MensajesGenerales::msjErrorPlacaNoExiste();
	}
}