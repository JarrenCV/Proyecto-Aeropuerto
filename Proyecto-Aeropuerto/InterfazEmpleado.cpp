#include "InterfazEmpleado.h"

int InterfazEmpleado::menuEmpleado()
{
    return 0;
}
//----------------------------------------------------------------------------

int InterfazEmpleado::menuEmpleadoTripulacion()
{
    return 0;
}
//----------------------------------------------------------------------------

int InterfazEmpleado::menuEmpleadoPlanta()
{
	int opcion;
	system("cls");
	cout << endl;

	cout << "----------------------MENU PLANTA----------------------" << endl;
	cout << "Digite (1)				Ingresar Empleado Administrativo" << endl;
	cout << "Digite (2)				Ingresar Empleado Miscelaneo" << endl;
	cout << "Digite (3)				Cancelar" << endl;
	cout << "-------------------------------------------------------" << endl;
	cout << "Digite la opcion: "; cin >> opcion;

    return opcion;
}

void InterfazEmpleado::ingresaInfoAdministrativo(ListaEmpleados& contEmpleados)
{
	string cedula, nombre, labor, tituloU;
	int edad;
	cout << "----------------------EMPLEADO ADMINISTRATIVO----------------------" << endl;
	cout << "Digite el numero de cedula: "; cin >> cedula;
	if (!contEmpleados.buscaCedula(cedula)) { // == false 
		cin.ignore();
		cout << "Digite el nombre del Empleado: "; getline(cin, nombre);
		cout << "Digite la edad del empleado: "; cin >> edad;

		cin.ignore();
		cout << "Digite la labor del Empleado: "; getline(cin, labor);

		cin.ignore();
		cout << "Digite el titulo Universitario del Empleado: "; getline(cin, tituloU);

									// (string ced, string nom, int ed, string lab, string tituloU)
		Empleado* emp = new Adminitrativo(cedula, nombre, edad, labor, tituloU);
		contEmpleados.ingresaUltimo(*emp);
	}
	else {
		InterfazEmpleado::msjErrorCedula();
	}
}

void InterfazEmpleado::ingresaInfoMiscelaneo(ListaEmpleados& contEmpleados)
{
	string cedula, nombre, labor, gradoEsc;
	int edad;
	cout << "----------------------EMPLEADO MISCELANEO----------------------" << endl;
	cout << "Digite el numero de cedula: "; cin >> cedula;
	if (!contEmpleados.buscaCedula(cedula)) { // == false 
		cin.ignore();
		cout << "Digite el nombre del Empleado: "; getline(cin, nombre);
		cout << "Digite la edad del empleado: "; cin >> edad;

		cin.ignore();
		cout << "Digite la labor del Empleado: "; getline(cin, labor);

		cin.ignore();
		cout << "Digite el grado de escolaridad del Empleado: "; getline(cin, gradoEsc);

							// (string ced, string nom, int ed, string lab, string gradoEsc)
		Empleado* emp = new Miscelaneo(cedula, nombre, edad, labor, gradoEsc);
		contEmpleados.ingresaUltimo(*emp);
	}
	else {
		InterfazEmpleado::msjErrorCedula();
	}
}
//----------------------------------------------------------------------------

void InterfazEmpleado::msjErrorCedula()
{
	cout << "ERROR: El numero de cedula ya existe en el sistema" << endl;
}

void InterfazEmpleado::msjErrorRango() 
{
	cout << "Opcion invalida." << endl;
}
