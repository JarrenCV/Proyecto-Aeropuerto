#include "ControladoraAvion.h"


// --------------------------INGRESOS--------------------------

int ControladoraAvion::controlMenuIngresoAvion()
{
    return InterfazAvion::menuAvion();
}

void ControladoraAvion::control0IngresosAvion(Aeropuerto& ar)
{
	int op;
	do {

		op = controlMenuIngresoAvion();
		switch (op) {
		case 1: {
			control0IngresoAvCivil(ar);
			break;
		}
		case 2: {
			control1IngresosMili(ar);
			break;
		}
		case 3: {
			MensajesGenerales::msjRegreso(); break;
		}
		default: MensajesGenerales::msjErrorRango();
		};
		cin.get();
		cin.get();
		system("cls");
	} while (op != 3);
}

void ControladoraAvion::control1IngresosMili(Aeropuerto& ar)
{
	InterfazAvion::ingresaInfoAvionMilitar(ar);
}

int ControladoraAvion::controlMenuIngresoCivil()
{
	return InterfazAvion::menuAvionCivil();
}

void ControladoraAvion::control0IngresoAvCivil(Aeropuerto& ar)
{
	int op;
	do {

		op = controlMenuIngresoCivil();
		switch (op) {
		case 1: {
			controlIngresoComercial(ar);
			break;
		}
		case 2: {
			controlIngresoDeCarga(ar);
			break;
		}
		case 3: {
			MensajesGenerales::msjRegreso(); break;
		}
		default: MensajesGenerales::msjErrorRango();
		};
		cin.get();
		cin.get();
		system("cls");
	} while (op != 3);
}

void ControladoraAvion::controlIngresoComercial(Aeropuerto& ar)
{
	InterfazAvion::ingresaInfoAvionDeCarga(ar);
}

void ControladoraAvion::controlIngresoDeCarga(Aeropuerto& ar)
{
	InterfazAvion::ingresaInfoAvionComercial(ar);
}


//---------------------------------MANTENIMIENTO-----------------------------------


int ControladoraAvion::controlMenuMantAvion()
{
	return InterfazAvion::menuEdicionAvion();
}

void ControladoraAvion::control0MantAvion(Aeropuerto& ar)
{
	int op;
	do {
		op = controlMenuMantAvion();
		switch (op) {
		case 1: {
			controlManEliminaAvion(ar);
			break;
		}
		case 2: {
			controlMantEditPlacaAvion(ar); 
			break;
		}
		case 3: {
			controlMantEditAnchuraPuertaAvion(ar); 
			break;
		}
		case 4: {
			controlMantEditAlturaPuertaAvion(ar); 
			break;
		}
		case 5: {
			controlMantEditDistanciaAvion(ar);
			break;
		}
		case 6: {
			 MensajesGenerales::msjRegreso(); break;
			break;
		}
		default: MensajesGenerales::msjErrorRango();
		};
		cin.get();
		cin.get();
		system("cls");
	} while (op != 6);
}

void ControladoraAvion::controlManEliminaAvion(Aeropuerto& ar)
{
	InterfazAvion::eliminaAvion(ar);
}

void ControladoraAvion::controlMantEditPlacaAvion(Aeropuerto& ar)
{
	InterfazAvion::editaPlacaAvionComercial(ar);
}

void ControladoraAvion::controlMantEditAnchuraPuertaAvion(Aeropuerto& ar)
{
	InterfazAvion::editaAnchuraPuerta(ar);
}

void ControladoraAvion::controlMantEditAlturaPuertaAvion(Aeropuerto& ar)
{
	InterfazAvion::editaAlturaPuerta(ar);
}

void ControladoraAvion::controlMantEditDistanciaAvion(Aeropuerto& ar)
{
	InterfazAvion::editaDistanciaRecorrida(ar);
}
