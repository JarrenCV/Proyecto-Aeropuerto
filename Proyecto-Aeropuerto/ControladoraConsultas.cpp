#include "ControladoraConsultas.h"

int ControladoraConsultas::controlMenuConsulta()
{
    return MenuPrincipal::menuConsultas();
}

void ControladoraConsultas::control0Cons(Aeropuerto& ar)
{
	int op;
	do {
		op = controlMenuConsulta();
		switch (op) {
		case 1: control1(ar); break;
		case 2: control2(ar); break;
		case 3: control3(ar); break;
		
		case 4:  MensajesGenerales::msjRegreso(); break;
		default: MensajesGenerales::msjErrorRango();
		}
		system("pause");
	} while (op != 4);
}

void ControladoraConsultas::control1(Aeropuerto& ar)
{
	InterfazReporteConsulta::consultaEmpleado(ar);
}

void ControladoraConsultas::control2(Aeropuerto& ar)
{
	InterfazReporteConsulta::consultaAvion(ar);
}

void ControladoraConsultas::control3(Aeropuerto& ar)
{
	InterfazReporteConsulta::consultaContrato(ar);
}
