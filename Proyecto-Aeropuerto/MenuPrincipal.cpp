#include "MenuPrincipal.h"

int MenuPrincipal::menuPrincipal()
{
	system("cls");
	int op;

	cout << "------------------MENU PRINCIPAL------------------" << endl;
	cout << "Digite (1)				Ingresos" << endl;
	cout << "Digite (2)				Mantenimiento" << endl;
	cout << "Digite (3)				Reportes" << endl;
	cout << "Digite (4)				Consultas" << endl;
	cout << "Digite (5)				Salir" << endl;
	cin >> op;

	return op;
}

int MenuPrincipal::menuIngresos()
{
	int opcion;
	system("cls");
	cout << "------------------MENU INGRESOS	------------------" << endl;
	cout << "Digite (1)				Ingresar Empleados" << endl;
	cout << "Digite (2)				Ingresar Aviones" << endl;
	cout << "Digite (3)				Crear un Contrato" << endl;
	cout << "Digite (4)				Salir" << endl;
	cout << "--------------------------------------------------" << endl;
	cout << "Digite la opcion: "; cin >> opcion;
}

int MenuPrincipal::menuMantenimiento()
{
	int opcion;
	system("cls");
	cout << "------------------MENU MANTENIMIENTO------------------" << endl;
	cout << "Digite (1)				Mantenimiento de Empleados" << endl;
	cout << "Digite (2)				Mantenimiento de Aereonaves" << endl;
	cout << "Digite (3)				Mantenimiento de Contratos" << endl;
	cout << "Digite (4)				Salir" << endl;
	cout << "--------------------------------------------------" << endl;
	cout << "Digite la opcion: "; cin >> opcion;
}

int MenuPrincipal::menuReportes()
{

	int opcion;
	system("cls");

	cout << "------------------MENU REPORTES------------------" << endl;
	cout << "Digite (1)             Reporte de contratos con emleados" << endl;
	cout << "Digite (2)				Reporte de aereonaves con tripulación" << endl;
	cout << "Digite (3)				Reporte de todas las aereonaves" << endl;
	cout << "Digite (4)				Reporte Reporte de las personas contratadas" << endl;
	cout << "Digite (5)				Reporte de pilotos para aviones de carga" << endl;
	cout << "Digite (6)				Reporte de aviones de más de 20 años de uso" << endl;
	cout << "Digite (7)				Reporte de contratos de servicios profecionales" << endl;
	cout << "Digite (8)				Reporte de contratos de plazo fijo" << endl;
	cout << "Digite (9)				Reporte de contratos de plazo indefinido" << endl;
	cout << "Digite (10)		    Reporte de todas las tripulaciones de aviones comerciales" << endl;
	cout << "Digite (11)		    Reporte de contratos de plazo fijo que excedieron 2 años" << endl;
	cout << "Digite (12)			Reporte del avión de carga con la puerta lateral o trasera más grande que se tenga" << endl;

	cout << "--------------------------------------------------" << endl;
	cout << "Digite la opcion: "; cin >> opcion;
}
int MenuPrincipal::menuConsultas()
{
	int opcion;
	system("cls");
	cout << "------------------MENU CONSULTAS------------------" << endl;
	cout << "Digite (1)				Consultar por trabajador" << endl; // se necesita ver a que aeronave pertenece, se busca por cedula
	cout << "Digite (2)				Consultar por contrato " << endl;    // El tipo de contrato al que pertenece, se busca por num de contrato
	cout << "Digite (3)				Informacion de una aeronave" << endl; // se busca por ayuda de su placa
	cout << "Digite (4)				Salir" << endl;
	cout << "--------------------------------------------------" << endl;
	cout << "Digite la opcion: "; cin >> opcion;
}

void MenuPrincipal::msjErrorRango() {
	cout << ">>ERROR<< Digitar opcion valida del menu." << endl;
}

void  MenuPrincipal::msjIngresoExistoso() {
	cout << ">>LISTO<< Valores ingresados exitosamente." << endl;
}