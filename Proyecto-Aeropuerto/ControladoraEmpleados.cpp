#include "ControladoraEmpleados.h"


int ControladoraEmpleado::controlMenuIngresoEmp()
{
	return InterfazEmpleado::menuEmpleado();
}
//-----------------------------------------------------------
void ControladoraEmpleado::control0IngresosEmp(Aeropuerto& ar)
{
	int op;
	do {

		op = controlMenuIngresoEmp();
		switch (op) {
		case 1: {
			control0IngresoTripulacion(ar);
			break;
		}
		case 2: {
			control0IngresoPlanta(ar);
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

int ControladoraEmpleado::controlMenuIngresoTripulacion()
{
	return InterfazEmpleado::menuEmpleadoTripulacion();
}
//----------------------------INGRESOS----------------------------
void ControladoraEmpleado::control0IngresoTripulacion(Aeropuerto& ar)
{
	int op;
	do {

		op =controlMenuIngresoTripulacion();
		switch (op) {
		case 1: {
			controlIngresoP(ar);
			break;
		}
		case 2: {
			controlIngresoC(ar);
			break;
		}
		case 3: {
			controlIngresoA(ar);
		}
		case 4: {
			MensajesGenerales::msjRegreso();
		}
		default: MensajesGenerales::msjErrorRango();
		};
		cin.get();
		cin.get();
		system("cls");
	} while (op != 4);
}

void ControladoraEmpleado::controlIngresoP(Aeropuerto& a)
{
	InterfazEmpleado::ingresaInfoPiloto(a);
}

void ControladoraEmpleado::controlIngresoC(Aeropuerto& a)
{
	InterfazEmpleado::ingresaInfoCopiloto(a);
}

void ControladoraEmpleado::controlIngresoA(Aeropuerto& a)
{
	InterfazEmpleado::ingresaInfoAzafata(a);
}

int ControladoraEmpleado::controlMenuIngresoPlanta()
{
	return InterfazEmpleado::menuEmpleadoTripulacion();
}

void ControladoraEmpleado::control0IngresoPlanta(Aeropuerto& ar)
{
	int op;
	do {

		op = controlMenuIngresoTripulacion();
		switch (op) {
		case 1: {
			controlIngresoAdmin(ar);
			break;
		}
		case 2: {
			controlIngresoMisc(ar);
			break;
		}
		case 3: {
			MensajesGenerales::msjRegreso();
		}
		default: MensajesGenerales::msjErrorRango();
		};
		cin.get();
		cin.get();
		system("cls");
	} while (op != 3);
}

void ControladoraEmpleado::controlIngresoAdmin(Aeropuerto& ar)
{
	InterfazEmpleado::ingresaInfoAdministrativo(ar);
}

void ControladoraEmpleado::controlIngresoMisc(Aeropuerto& ar)
{
	InterfazEmpleado::ingresaInfoAzafata(ar);
}
// ---------------------------------MANTENIMIENTO----------------------------
int ControladoraEmpleado::controlMenuMantEmp()
{
	return InterfazEmpleado::menuEdicionEmpleado();
}

void ControladoraEmpleado::control0MantEmp(Aeropuerto& ar)
{
	int op;
	do {

		op = controlMenuMantEmp();
		switch (op) {
		case 1: {
			controlMantEliminarEmp(ar);
			break;
		}
		case 2: {
			controlMantEditAnniosExp(ar);
			break;
		}
		case 3: {
			controlMantEditTellP(ar);
			break;
		}
		case 4: {
			controlMantEditNacionalidadA(ar);
			break;
		}
		case 5: {
			controlMantEditLaborPlanta(ar);
			break;
		}
		case 6: {
			controlMantEditTitUniEmpAdmin(ar);
			break;
		}
		case 7: {
			controlMantEditGradoEscolaridadMisc(ar);
			break;
		}
		case 8: {
			MensajesGenerales::msjRegreso(); break;
		}
		default: MensajesGenerales::msjErrorRango();
		};
		cin.get();
		cin.get();
		system("cls");
	} while (op != 8);
}

void ControladoraEmpleado::controlMantEliminarEmp(Aeropuerto& ar)
{
	InterfazEmpleado::eliminaEmpleado(ar);
}

void ControladoraEmpleado::controlMantEditAnniosExp(Aeropuerto& ar)
{
	InterfazEmpleado::cambiaAniosExperiencia(ar);
}

void ControladoraEmpleado::controlMantEditTellP(Aeropuerto& ar)
{
	InterfazEmpleado::cambiaTelefono(ar);
}

void ControladoraEmpleado::controlMantEditNacionalidadA(Aeropuerto& ar)
{
	InterfazEmpleado::cambiaNacionalidad(ar);
}

void ControladoraEmpleado::controlMantEditLaborPlanta(Aeropuerto& ar)
{
	InterfazEmpleado::cambiaLabor(ar);
}

void ControladoraEmpleado::controlMantEditTitUniEmpAdmin(Aeropuerto& ar)
{
	InterfazEmpleado::cambiaTituloU(ar);
}

void ControladoraEmpleado::controlMantEditGradoEscolaridadMisc(Aeropuerto& ar)
{
	InterfazEmpleado::cambiaGradoEsc(ar);
}
