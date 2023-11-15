#include "ControladoraPrincipal.h"

ControladoraPrincipal::ControladoraPrincipal(int dia,int mes, int anio)
{
	contEmpleados = new ListaEmpleados();
	contAviones = new ListaAviones();
	contContratos = new ListaContratos();
	contPlazas = new ListaPlaza();
	fecha = new Fecha(dia, mes, anio);
	aeropuerto = new Aeropuerto("Aeropuerto Tilin", "11114-2314", "9861-4673", *contAviones, *contContratos, *contEmpleados, *contPlazas);
}

ControladoraPrincipal::~ControladoraPrincipal()
{
	if (contEmpleados != NULL) delete contEmpleados;
	if (contAviones != NULL) delete contAviones;
	if (contContratos != NULL) delete contContratos;
	if (contPlazas != NULL) delete contPlazas;
}

int ControladoraPrincipal::controlMenu() {
	return MenuPrincipal::menuPrincipal();
}
void ControladoraPrincipal::control0() {
	int op;
	do {
		op = controlMenu();
		switch (op) {
		case 1: controlIngresos(); break;
		case 2: controlMantenimiento(); break;
		case 3: controlReportes(); break;
		case 4: controlConsultas(); break;
		case 5: break;
		case 6: break;
		case 7:  MensajesGenerales::msjRegreso(); break;
		default: MensajesGenerales::msjErrorRango(); 
		} 
		system("pause");
	} while (op != 7);
}
void ControladoraPrincipal::controlIngresos() {
	contrIngresos.control0(*aeropuerto,*fecha);
}

void ControladoraPrincipal::controlMantenimiento()
{
	contrMant.control0(*aeropuerto);
}

void ControladoraPrincipal::controlReportes()
{
	contrReport.control0(*aeropuerto, *fecha);
}

void ControladoraPrincipal::controlConsultas()
{
	contrCons.control0Cons(*aeropuerto);
}
