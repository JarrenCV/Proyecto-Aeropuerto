#include "ControladoraMantenimiento.h"

ControladoraMantenimiento::ControladoraMantenimiento()
{
	contrEmple = ControladoraEmpleado();
	contrContrat = ControladoraContrato();
	contrAvion = ControladoraAvion();
}

int ControladoraMantenimiento::controlMenuMantenimiento()
{
    return MenuPrincipal::menuMantenimiento();
}

void ControladoraMantenimiento::control0(Aeropuerto& ar) 
{
	int op;
	do {

		op = controlMenuMantenimiento();
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
		}
		case 4: {
			MensajesGenerales::msjRegreso();
		}
		default: MensajesGenerales::msjErrorRango(); break;
		};
		cin.get();
		cin.get();
		system("cls");
	} while (op != 4);
}
// empleados
void ControladoraMantenimiento::control1(Aeropuerto& ar)
{
	contrEmple.control0MantEmp(ar);
}
// aeronaves 
void ControladoraMantenimiento::control2(Aeropuerto& ar)
{
	contrAvion.control0MantAvion(ar);
}
// contratos
void ControladoraMantenimiento::control3(Aeropuerto& ar)
{
	contrContrat.control0MantContr(ar);
}
