#include"InterfazEmpleado.h"
#include"MenuPrincipal.h"
#include"InterfazAvion.h"
#include"InterfazContrato.h"
#include"InterfazReporteConsulta.h"
#include"InterfazEnlace.h"
#include"InterfazArchivo.h"
#include"ControladoraPrincipal.h"

int main() {

	
	//Aeropuerto* aeropuerto = new Aeropuerto("Aeropuerto Tilin", "11114-2314", "9861-4673", *contAviones, *contContratos, *contEmpleados,*contPlazas); // eso tilin 
	//ofstream empleado, avion, contrato, plaza;
	//ifstream empleadoEsc, avionEsc, contratoEsc, plazaEsc;

	int d,m,a;
	
	
	// Antes de entrar en el sistema necesitamos la fecha actual
	// para poder saber si un contrato de plazo fijo tiene mas de 2 anios
	// a asi saber si es elegible o no.

	cout << "Digite la fecha de acutal: " << endl;
	cout << "Dia: "; cin >> d;
	cout << "Mes: "; cin >> m;
	cout << "Anio: "; cin >> a;
	ControladoraPrincipal* Controladora = new ControladoraPrincipal(d, m, a);
	Controladora->control0();

	return 0;
}