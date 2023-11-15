#include "ControladoraContrato.h"

int ControladoraContrato::controlMenuIngresoContrato()
{
    return InterfazContrato::menuContrato();
}
// --------------------------------------Ingresos--------------------------------------
void ControladoraContrato::control0IngresosContr(Aeropuerto& ar, Fecha& f)
{
	int op;
	do {

		op = controlMenuIngresoContrato();
		switch (op) {
		case 1: {
			control1IngresosProfesionales(ar);
			break;
		}
		case 2: {
			control2IngresosPlazoFijo(ar, f);
			break;
		}
		case 3: {
			control3IngresosPlazo(ar);
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

void ControladoraContrato::control1IngresosProfesionales(Aeropuerto& ar)
{
	InterfazContrato::ingresaServiciosProfesionales(ar);
}

void ControladoraContrato::control2IngresosPlazoFijo(Aeropuerto& ar, Fecha& f)
{
	InterfazContrato::ingresaPlazoFijo(ar,f);
}

void ControladoraContrato::control3IngresosPlazo(Aeropuerto& ar)
{
	InterfazContrato::ingresaTiempoIndefinido(ar);
}

int ControladoraContrato::controlMenuMantContr()
{
	return InterfazContrato::menuEdicionContrato();
}

void ControladoraContrato::control0MantContr(Aeropuerto& ar)
{

	int op;
	do {
		op = controlMenuMantContr();
		switch (op) {
		case 1: {
			controlMantContrEditapuesto(ar);
			break;
		}
		case 2: {
			controlMantEditSalarioDeContr(ar);
			break;
		}
		case 3: {
			controlMantEditHorarioDeSerPr(ar);
			break;
		}
		case 4: {
			controlMantEditTipoSerProfesional(ar);
			break;
		}
		case 5: {
			controlMantEditNomPuestoPlazaContr(ar);
			break;
		}
		case 6: {
			MensajesGenerales::msjRegreso(); break;
		}
		default: MensajesGenerales::msjErrorRango(); break;
		};
		cin.get();
		cin.get();
		system("cls");
	} while (op != 6);
}

void ControladoraContrato::controlMantContrEditapuesto(Aeropuerto& ar)
{
	InterfazContrato::cambiaDescripcionPuesto(ar);
}

void ControladoraContrato::controlMantEditSalarioDeContr(Aeropuerto& ar)
{
	InterfazContrato::cambiaSalario(ar);
}

void ControladoraContrato::controlMantEditHorarioDeSerPr(Aeropuerto& ar)
{
	InterfazContrato::cambiaHorario(ar);
}

void ControladoraContrato::controlMantEditTipoSerProfesional(Aeropuerto& ar)
{
	InterfazContrato::cambiaTipoServicio(ar);
}

void ControladoraContrato::controlMantEditNomPuestoPlazaContr(Aeropuerto& ar) 
{
	InterfazContrato::cambiaPuestoPlaza(ar);
}
