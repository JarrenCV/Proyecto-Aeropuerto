#include "ControladoraReportes.h"

int ControladoraReportes::controlMenuReportes()
{
	return MenuPrincipal::menuReportes();
}

void ControladoraReportes::control0(Aeropuerto& ar, Fecha& f)
{
	int op;
	do {

		op = controlMenuReportes();
		switch (op) {
		case 1: {
			control1(ar);
			break;
		}
		case 2: {
			control2(ar);
			break;
		}
		case 3: {
			control3(ar);
			break;
		}
		case 4: {
			control4(ar);
			break;
		}
		case 5: {
			control5(ar);
			break;
		}
		case 6: {
			control6(ar,f);
			break;
		}
		case 7: {
			control7(ar);
			break;
		}
		case 8: {
			control8(ar);
			break;
		}
		case 9: {
			control9(ar);
			break;
		}
		case 10: {
			control10(ar);
			break;
		}
		case 11: {
			control11(ar);
			break;
		}
		case 12: {
			control12(ar);
			break;
		}
		case 13: {
			MensajesGenerales::msjRegreso(); break;
		}
		default: MensajesGenerales::msjErrorRango();
		};
		cin.get();
		cin.get();
		system("cls");
	} while (op != 13);
}

void ControladoraReportes::control1(Aeropuerto& ar)
{
	InterfazReporteConsulta::reporteContratoEmpleado(ar);
}

void ControladoraReportes::control2(Aeropuerto& ar)
{
	InterfazReporteConsulta::reporteAeronaveTripulacion(ar);
}

void ControladoraReportes::control3(Aeropuerto& ar)
{
	InterfazReporteConsulta::reporteAeronave(ar);
}

void ControladoraReportes::control4(Aeropuerto& ar)
{
	InterfazReporteConsulta::reporteContratoEmpleado(ar);
}

void ControladoraReportes::control5(Aeropuerto& ar)
{
	InterfazReporteConsulta::reportePilotosAvionesDeCarga(ar);
}

void ControladoraReportes::control6(Aeropuerto& ar, Fecha& f)
{
	InterfazReporteConsulta::reporteAvionMas20Anios(ar, f);
}

void ControladoraReportes::control7(Aeropuerto& ar)
{
	InterfazReporteConsulta::reporteServiciosProfesionales(ar);
}

void ControladoraReportes::control8(Aeropuerto& ar)
{
	InterfazReporteConsulta::reportePlazoFijo(ar);
}

void ControladoraReportes::control9(Aeropuerto& ar)
{
	InterfazReporteConsulta::reporteTiempoIndefinido(ar);
}

void ControladoraReportes::control10(Aeropuerto& ar)
{
	InterfazReporteConsulta::reporteTripulacionAvionComercial(ar);
}

void ControladoraReportes::control11(Aeropuerto& ar)
{
	InterfazReporteConsulta::reportePlazoFijo2Anios(ar);
}

void ControladoraReportes::control12(Aeropuerto& ar)
{
	InterfazReporteConsulta::reporteAvionDeCargaMayorAreaAcceso(ar);
}
