#include "ControladoraIngresos.h"
#include "ControladoraMantenimiento.h"

ControladoraIngresos::ControladoraIngresos()
{
	controlEmple = ControladoraEmpleado();
	contContrat = ControladoraContrato();
	contAvion = ControladoraAvion();
}

int ControladoraIngresos::controlMenuIngresos()
{
    return MenuPrincipal::menuIngresos();
}

void ControladoraIngresos::control0(Aeropuerto& ar, Fecha& f)
{
	int op;
	do {

		op = controlMenuIngresos();
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
			control3(ar, f);
			break;
		}
		case 4: {
			MensajesGenerales::msjRegreso(); break;
		}
		default: MensajesGenerales::msjErrorRango();
		};
		cin.get();
		cin.get();
		system("cls");
	} while (op != 4);
}

void ControladoraIngresos::control1(Aeropuerto& ar)
{
	controlEmple.control0IngresosEmp(ar);
}

void ControladoraIngresos::control2(Aeropuerto& ar)
{
	contAvion.control0IngresosAvion(ar);
}

void ControladoraIngresos::control3(Aeropuerto& ar, Fecha& f)
{
	contContrat.control0IngresosContr(ar, f);
}
