#include "InterfazEmpleado.h"

int InterfazEmpleado::menuEmpleado()
{
	int opcion;
	system("cls");
	cout << "------------------MENU EMPLEADOS------------------" << endl;
	cout << "Digite (1)				Ingresar Empleado Tripulante" << endl;
	cout << "Digite (2)				Ingresar Empleado de Planta" << endl;
	cout << "Digite (3)				Cancelar" << endl;
	cout << "--------------------------------------------------" << endl;
	cout << "Digite la opcion: "; cin >> opcion;
    return opcion;
}
//----------------------------------------------------------------------------

int InterfazEmpleado::menuEmpleadoTripulacion()
{
	int opcion;
	system("cls");

	cout << "------------------MENU TRIPULACION------------------" << endl;
	cout << "Digite (1)				Ingresar Piloto" << endl;
	cout << "Digite (2)				Ingresar Copiloto" << endl;
	cout << "Digite (3)				Ingresar Azafata" << endl;
	cout << "Digite (4)				Cancelar" << endl;
	cout << "----------------------------------------------------" << endl;
	cout << "Digite la opcion: "; cin >> opcion;

	return opcion;
}

void InterfazEmpleado::ingresaInfoPiloto(ListaEmpleados& contEmpleados)
{
	string cedula, nombre;
	int edad, aniosExp;

	cout << "------------------PILOTO------------------" << endl;
	// Recordar que para ingresar cualquier miembro de tripulacion hace falta la aeronave
	// Ya que estos "nacen" con avion

	cout << "Digite el numero de cedula: "; cin >> cedula;
	if (!contEmpleados.buscaCedula(cedula)) { // == false 
		cin.ignore();
		cout << "Digite el nombre del Empleado: "; getline(cin, nombre);
		cout << "Digite la edad del empleado: "; cin >> edad;

		cout << "Digite los anios de experiencia del Empleado: "; cin >> aniosExp;

		// (string ced, string nom, int ed, int aniosExp)
		Empleado* emp = new Piloto(cedula, nombre, edad, aniosExp);
		contEmpleados.ingresaUltimo(*emp);
		MensajesGenerales::IngresoExitoso();
		
	}
	else {
		MensajesGenerales::msjErrorCedula();
	}
}

void InterfazEmpleado::ingresaInfoCopiloto(ListaEmpleados& contEmpleados)
{
	string cedula, nombre, telef;
	int edad;

	cout << "------------------COPILOTO------------------" << endl;
	// Recordar que para ingresar cualquier miembro de tripulacion hace falta la aeronave
	// Ya que estos "nacen" con avion

	cout << "Digite el numero de cedula: "; cin >> cedula;
	if (!contEmpleados.buscaCedula(cedula)) { // == false 
		cin.ignore();
		cout << "Digite el nombre del Empleado: "; getline(cin, nombre);
		cout << "Digite la edad del empleado: "; cin >> edad;

		cout << "Digite los anios de experiencia del Empleado: "; cin >> telef;

		// (string ced, string nom, int ed, string telef)
		Empleado* emp = new Copiloto(cedula, nombre, edad, telef);
		contEmpleados.ingresaUltimo(*emp);
		MensajesGenerales::IngresoExitoso();
		
	}
	else {
		MensajesGenerales::msjErrorCedula();
	}
}

void InterfazEmpleado::ingresaInfoAzafata(ListaEmpleados& contEmpleados)
{
	string cedula, nombre, nacionali;
	int edad;

	cout << "------------------AZAFATA------------------" << endl;
	// Recordar que para ingresar cualquier miembro de tripulacion hace falta la aeronave
	// Ya que estos "nacen" con avion

	cout << "Digite el numero de cedula: "; cin >> cedula;
	if (!contEmpleados.buscaCedula(cedula)) { // == false 
		cin.ignore();
		cout << "Digite el nombre del Empleado: "; getline(cin, nombre);
		cout << "Digite la edad del empleado: "; cin >> edad;

		cout << "Digite los anios de experiencia del Empleado: "; cin >> nacionali;

		// (string ced, string nom, int ed, string nacionali)
		Empleado* emp = new Azafata(cedula, nombre, edad, nacionali);
		contEmpleados.ingresaUltimo(*emp);
		MensajesGenerales::IngresoExitoso();
		
	}
	else {
		MensajesGenerales::msjErrorCedula();
	}
}
//----------------------------------------------------------------------------

int InterfazEmpleado::menuEmpleadoPlanta()
{
	int opcion;
	system("cls");

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
		MensajesGenerales::IngresoExitoso();
		
	}
	else {
		MensajesGenerales::msjErrorCedula();
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
		MensajesGenerales::IngresoExitoso();
		
	}
	else {
		MensajesGenerales::msjErrorCedula();
	}
}
//----------------------------------------------------------------------------