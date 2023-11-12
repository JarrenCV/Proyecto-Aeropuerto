#include "InterfazEmpleado.h"

//-------------------------------GENERALES---------------------------------------------
void InterfazEmpleado::empNoEsPiloto()
{
	cout << "ERROR: El Empleado no es un Piloto" << endl;
}

void InterfazEmpleado::empNoEsCopiloto()
{
	cout << "ERROR: El Empleado no es un Copiloto" << endl;
}

void InterfazEmpleado::empNoEsAzafata()
{
	cout << "ERROR: El Empleado no es una Azafata" << endl;
}

void InterfazEmpleado::empNoEsPlanta()
{
	cout << "ERROR: El Empleado no es de Planta" << endl;
}

void InterfazEmpleado::empNoEsAdministrativo()
{
	cout << "ERROR: El Empleado no es Administrativo" << endl;
}

void InterfazEmpleado::empNoEsMiscelaneo()
{
	cout << "ERROR: El Empleado no es Miscelaneo" << endl;
}

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

void InterfazEmpleado::ingresaInfoPiloto(Aeropuerto& aeropuerto)
{
	string cedula, nombre;
	int edad, aniosExp;

	cout << "------------------PILOTO------------------" << endl;
	// Recordar que para ingresar cualquier miembro de tripulacion hace falta la aeronave
	// Ya que estos "nacen" con avion

	cout << "Digite el numero de cedula: "; cin >> cedula;
	if (!aeropuerto.buscaCedula(cedula)) { // == false 
		cin.ignore();
		cout << "Digite el nombre del Empleado: "; getline(cin, nombre);
		cout << "Digite la edad del empleado: "; cin >> edad;

		cout << "Digite los anios de experiencia del Empleado: "; cin >> aniosExp;

		// (string ced, string nom, int ed, int aniosExp)
		Empleado* emp = new Piloto(cedula, nombre, edad, aniosExp);
		aeropuerto.ingresaEmpleado(*emp);
		MensajesGenerales::IngresoExitoso();
		
	}
	else {
		MensajesGenerales::msjErrorCedula();
	}
}

void InterfazEmpleado::ingresaInfoCopiloto(Aeropuerto& aeropuerto)
{
	string cedula, nombre, telef;
	int edad;

	cout << "------------------COPILOTO------------------" << endl;
	// Recordar que para ingresar cualquier miembro de tripulacion hace falta la aeronave
	// Ya que estos "nacen" con avion

	cout << "Digite el numero de cedula: "; cin >> cedula;
	if (!aeropuerto.buscaCedula(cedula)) { // == false 
		cin.ignore();
		cout << "Digite el nombre del Empleado: "; getline(cin, nombre);
		cout << "Digite la edad del empleado: "; cin >> edad;

		cout << "Digite el telefono del Empleado: "; cin >> telef;

		// (string ced, string nom, int ed, string telef)
		Empleado* emp = new Copiloto(cedula, nombre, edad, telef);
		aeropuerto.ingresaEmpleado(*emp);
		MensajesGenerales::IngresoExitoso();
		
	}
	else {
		MensajesGenerales::msjErrorCedula();
	}
}

void InterfazEmpleado::ingresaInfoAzafata(Aeropuerto& aeropuerto)
{
	string cedula, nombre, nacionali;
	int edad;

	cout << "------------------AZAFATA------------------" << endl;
	// Recordar que para ingresar cualquier miembro de tripulacion hace falta la aeronave
	// Ya que estos "nacen" con avion

	cout << "Digite el numero de cedula: "; cin >> cedula;
	if (!aeropuerto.buscaCedula(cedula)) { // == false 
		cin.ignore();
		cout << "Digite el nombre del Empleado: "; getline(cin, nombre);
		cout << "Digite la edad del empleado: "; cin >> edad;

		cout << "Digite la nacionalidad del Empleado: "; cin >> nacionali;

		// (string ced, string nom, int ed, string nacionali)
		Empleado* emp = new Azafata(cedula, nombre, edad, nacionali);
		aeropuerto.ingresaEmpleado(*emp);
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

void InterfazEmpleado::ingresaInfoAdministrativo(Aeropuerto& aeropuerto)
{
	string cedula, nombre, labor, tituloU;
	int edad;
	cout << "----------------------EMPLEADO ADMINISTRATIVO----------------------" << endl;
	cout << "Digite el numero de cedula: "; cin >> cedula;
	if (!aeropuerto.buscaCedula(cedula)) { // == false 
		cin.ignore();
		cout << "Digite el nombre del Empleado: "; getline(cin, nombre);
		cout << "Digite la edad del empleado: "; cin >> edad;

		cin.ignore();
		cout << "Digite la labor del Empleado: "; getline(cin, labor);

		cin.ignore();
		cout << "Digite el titulo Universitario del Empleado: "; getline(cin, tituloU);

									// (string ced, string nom, int ed, string lab, string tituloU)
		Empleado* emp = new Adminitrativo(cedula, nombre, edad, labor, tituloU);
		aeropuerto.ingresaEmpleado(*emp);
		MensajesGenerales::IngresoExitoso();
		
	}
	else {
		MensajesGenerales::msjErrorCedula();
	}
}

void InterfazEmpleado::ingresaInfoMiscelaneo(Aeropuerto& aeropuerto)
{
	string cedula, nombre, labor, gradoEsc;
	int edad;
	cout << "----------------------EMPLEADO MISCELANEO----------------------" << endl;
	cout << "Digite el numero de cedula: "; cin >> cedula;
	if (!aeropuerto.buscaCedula(cedula)) { // == false 
		cin.ignore();
		cout << "Digite el nombre del Empleado: "; getline(cin, nombre);
		cout << "Digite la edad del empleado: "; cin >> edad;

		cin.ignore();
		cout << "Digite la labor del Empleado: "; getline(cin, labor);

		cin.ignore();
		cout << "Digite el grado de escolaridad del Empleado: "; getline(cin, gradoEsc);

							// (string ced, string nom, int ed, string lab, string gradoEsc)
		Empleado* emp = new Miscelaneo(cedula, nombre, edad, labor, gradoEsc);
		aeropuerto.ingresaEmpleado(*emp);
		MensajesGenerales::IngresoExitoso();
		
	}
	else {
		MensajesGenerales::msjErrorCedula();
	}
}

//----------------------------------------------------------------------------
//-------------------------------EDICION---------------------------------------------
int InterfazEmpleado::menuEdicionEmpleado()
{
	int opcion;
	system("cls");

	cout << "------------------MENU EDICION DE EMPLEADO------------------" << endl;
	cout << "Digite (1)				Eliminar un empleado del sistema" << endl;
	cout << "Digite (2)				Editar anios de experiencia de un Piloto" << endl;
	cout << "Digite (3)				Editar telefono de un Copiloto" << endl;
	cout << "Digite (4)				Editar nacionalidad de una Azafata" << endl;
	cout << "Digite (5)				Editar labor de un Empleado de planta" << endl;
	cout << "Digite (6)				Editar titulo universitario de un Empleado Administrativo" << endl;
	cout << "Digite (7)				Editar grado de escolaridad de un Empleado Miscelaneo" << endl;
	cout << "Digite (8)				Cancelar" << endl;
	cout << "----------------------------------------------------" << endl;
	cout << "Digite la opcion: "; cin >> opcion;

	return opcion;
}
void InterfazEmpleado::eliminaEmpleado(Aeropuerto& aeropuerto)
{
	string cedula;
	cout << "----------------ELIMINAR UN EMPLEADO-----------" << endl;
	cout << "Digite la cedula del Empleado que desea eliminar: "; cin >> cedula;
	if (aeropuerto.buscaCedula(cedula)) {
		if (aeropuerto.buscaContratoDeEmpleado(cedula) != NULL) {
			aeropuerto.eliminaContratoPorCedula(cedula);
		}
		if (!aeropuerto.esPlanta(cedula)) {

			if (aeropuerto.esPiloto(cedula)) {
				aeropuerto.quitaPiloto(cedula);
				aeropuerto.eliminaEmpleado(cedula);
				MensajesGenerales::msjEliminacion();
			}
			if (aeropuerto.esCopiloto(cedula)) {
				aeropuerto.quitaCopiloto(cedula);
				aeropuerto.eliminaEmpleado(cedula);
				MensajesGenerales::msjEliminacion();
			}
			if (aeropuerto.esAzafata(cedula)) {
				aeropuerto.quitaAzafata(cedula);
				aeropuerto.eliminaEmpleado(cedula);
				MensajesGenerales::msjEliminacion();
			}
		}
		else {
			aeropuerto.eliminaEmpleado(cedula);
			MensajesGenerales::msjEliminacion();
		}
	}
	else {
		MensajesGenerales::msjErrorCedulaNoExiste();
	}
}
void InterfazEmpleado::cambiaAniosExperiencia(Aeropuerto& aeropuerto)
{
	string cedula;
	int anios;
	cout << "----------------EDITAR ANIOS EXPERIENCIA DE UN PILOTO-----------" << endl;
	cout << "Digite la cedula del Piloto que desea editar: "; cin >> cedula;
	if (aeropuerto.buscaCedula(cedula)) {
		if (aeropuerto.esPiloto(cedula)) {
			cout << "Digite los nuevos anios de experiencia del Piloto: "; cin >> anios;
			aeropuerto.editaAniosExperiancia(cedula, anios);
			MensajesGenerales::msjEdicionExitosa();
		}
		else {
			MensajesGenerales::msjErrorEmpCategoria();
		}
	}
	else {
		MensajesGenerales::msjErrorCedulaNoExiste();
	}
}
void InterfazEmpleado::cambiaTelefono(Aeropuerto& aeropuerto)
{
	string cedula, telefono;
	cout << "----------------EDITAR TELEFONO DE UN COPILOTO-----------" << endl;
	cout << "Digite la cedula del Copiloto que desea editar: "; cin >> cedula;
	if (aeropuerto.buscaCedula(cedula)) {
		if (aeropuerto.esCopiloto(cedula)) {
			cout << "Digite el nuevo telefono del Copiloto: "; cin >> telefono;
			aeropuerto.editaTelefono(cedula, telefono);
			MensajesGenerales::msjEdicionExitosa();
		}
		else {
			MensajesGenerales::msjErrorEmpCategoria();
		}
	}
	else {
		MensajesGenerales::msjErrorCedulaNoExiste();
	}
}
void InterfazEmpleado::cambiaNacionalidad(Aeropuerto& aeropuerto)
{
	string cedula, nacionalidad;
	cout << "----------------EDITAR NACIONALIDAD DE UNA AZAFATA-----------" << endl;
	cout << "Digite la cedula de la Azafata que desea editar: "; cin >> cedula;
	if (aeropuerto.buscaCedula(cedula)) {
		if (aeropuerto.esAzafata(cedula)) {
			cout << "Digite la nueva nacionalidad de la Azafata: "; cin >> nacionalidad;
			aeropuerto.editaNacionalidad(cedula, nacionalidad);
			MensajesGenerales::msjEdicionExitosa();
		}
		else {
			MensajesGenerales::msjErrorEmpCategoria();
		}
	}
	else {
		MensajesGenerales::msjErrorCedulaNoExiste();
	}
}
void InterfazEmpleado::cambiaLabor(Aeropuerto& aeropuerto)
{
	string cedula, labor;
	cout << "----------------EDITAR LABOR DE UN EMPLEADO DE PLANTA-----------" << endl;
	cout << "Digite la cedula del Empleado de planta que desea editar: "; cin >> cedula;
	if (aeropuerto.buscaCedula(cedula)) {
		if (aeropuerto.esPlanta(cedula)) {
			cout << "Digite la nueva labor del empleado: "; cin >> labor;
			aeropuerto.editaLabor(cedula, labor);
			MensajesGenerales::msjEdicionExitosa();
		}
		else {
			MensajesGenerales::msjErrorEmpCategoria();
		}
	}
	else {
		MensajesGenerales::msjErrorCedulaNoExiste();
	}
}
void InterfazEmpleado::cambiaTituloU(Aeropuerto& aeropuerto)
{
	string cedula, tituloU;
	cout << "----------------EDITAR TITULO UNIVERSITARIO DE UN EMPLEADO ADMINISTRATIVO-----------" << endl;
	cout << "Digite la cedula del Empleado de planta que desea editar: "; cin >> cedula;
	if (aeropuerto.buscaCedula(cedula)) {
		if (aeropuerto.esAdministrativo(cedula)) {
			cout << "Digite el nuevo titulo universitario del empleado: "; cin >> tituloU;
			aeropuerto.editaLabor(cedula, tituloU);
			MensajesGenerales::msjEdicionExitosa();
		}
		else {
			MensajesGenerales::msjErrorEmpCategoria();
		}
	}
	else {
		MensajesGenerales::msjErrorCedulaNoExiste();
	}
}
void InterfazEmpleado::cambiaGradoEsc(Aeropuerto& aeropuerto)
{
	string cedula, gradoEsc;
	cout << "----------------EDITAR GRADO DE ESCOLARIDAD DE UN EMPLEADO MISCELANEO-----------" << endl;
	cout << "Digite la cedula del Empleado de planta que desea editar: "; cin >> cedula;
	if (aeropuerto.buscaCedula(cedula)) {
		if (aeropuerto.esMiscelaneo(cedula)) {
			cout << "Digite el nuevo grado de escolaridad del empleado: "; cin >> gradoEsc;
			aeropuerto.editaGradoEscolaridad(cedula, gradoEsc);
			MensajesGenerales::msjEdicionExitosa();
		}
		else {
			MensajesGenerales::msjErrorEmpCategoria();
		}
	}
	else {
		MensajesGenerales::msjErrorCedulaNoExiste();
	}
}

