#include "InterfazEnlace.h"

int InterfazEnlace::menuEnlace()
{
	int op;
	system("cls");
	// -----------MENU ENLACES---------------
	cout << "-----------------------------------MENU ENLACES-----------------------------------" << endl;
	cout << "Digite (1)                    Enlazar un Piloto a un Avion" << endl;
	cout << "Digite (2)                    Enlazar un Copiloto a un Avion" << endl;
	cout << "Digite (3)                    Enlazar una Azafata a un Avion" << endl;
	cout << "Digite (4)                    Enlazar un Contrato a un Empleado" << endl;
	cout << "Digite (5)                    Enlazar una Plaza a un Contrato de Tiempo Indefinido" << endl;
	cout << "----------------------------------------------------------------------------------" << endl;
	cout << "Digite (6)                    Cancelar" << endl;
	cout << "Digite la opcion: "; cin >> op;
    return op;
}

void InterfazEnlace::enlacePilotoAvion(Aeropuerto& aeropuerto)
{
	string cedula, placa;
	double velocidad;
	int opcionAvi=0;
	cout << "------------------ENLACE PILOTO - AVION------------------" << endl;
	cout << "Digite la cedula del piloto: "; cin >> cedula;
	if (aeropuerto.esPiloto(cedula)) {
		cout << "Digite (1) en caso de Aviacion Civil " << endl;
		cout << "Digite (2) en caso de Aviacion Militar" << endl;
		cout << "Digite la opcion: "; cin >> opcionAvi;
		switch (opcionAvi) {
		case 1:
		{
			cout << "Digite la placa del avion: "; cin >> placa;
			if (aeropuerto.buscaPlaca(placa)) {
				if (aeropuerto.buscaAvionPlaca(placa)->getPiloto() != NULL) {
					aeropuerto.buscaAvionPlaca(placa)->setPiloto(aeropuerto.buscaEmpleado(cedula));
					MensajesGenerales::msjEdicionExitosa();
				}
				else
					cout << "El avion digitado ya cuenta con un piloto." << endl;
			}
			else {
				MensajesGenerales::msjErrorPlacaNoExiste();
			}
		}
		case 2:
		{
			cout << "Digite la velocidad del avion: "; cin >> velocidad;
			if (aeropuerto.existeAvionVelocidad(velocidad)) {
				if (aeropuerto.buscaAvionVelocidad(velocidad)->getPiloto() != NULL) {
					aeropuerto.buscaAvionVelocidad(velocidad)->setPiloto(aeropuerto.buscaEmpleado(cedula));
					MensajesGenerales::msjEdicionExitosa();
				}
				else
					cout << "El avion digitado ya cuenta con un piloto." << endl;
			}
			else {
				MensajesGenerales::msjErrorVelocidadNoExiste();
			}
		}
		default:
			MensajesGenerales::msjErrorRango();

		}
	}
	else {
		MensajesGenerales::msjErrorEmpCategoria();
	}
}

void InterfazEnlace::enlaceCopilotoAvion(Aeropuerto& aeropuerto)
{
	string cedula, placa;
	cout << "------------------ENLACE COPILOTO - AVION------------------" << endl;
	cout << "Digite la cedula del copiloto: "; cin >> cedula;
	if (aeropuerto.esCopiloto(cedula)) {
		cout << "Digite la placa del avion: "; cin >> placa;
		if (aeropuerto.buscaPlaca(placa)) {
			if (aeropuerto.buscaAvionPlaca(placa)->getCopiloto() != NULL) {
				aeropuerto.buscaAvionPlaca(placa)->setCopiloto(aeropuerto.buscaEmpleado(cedula));
				MensajesGenerales::msjEdicionExitosa();
			}
			else
				cout << "El avion digitado ya cuenta con un copiloto." << endl;
		}
		else {
			MensajesGenerales::msjErrorPlacaNoExiste();
		}
	}
	else {
		MensajesGenerales::msjErrorEmpCategoria();
	}
}

void InterfazEnlace::enlaceAzafataAvion(Aeropuerto& aeropuerto)
{
	string cedula, placa;
	cout << "------------------ENLACE AZAFATA - AVION------------------" << endl;
	cout << "Digite la cedula de la azafata: "; cin >> cedula;
	if (aeropuerto.esAzafata(cedula)) {
		cout << "Digite la placa del avion: "; cin >> placa;
		if (aeropuerto.buscaPlaca(placa)) {
			if (aeropuerto.buscaAvionPlaca(placa)->getAzafata() != NULL) {
				aeropuerto.buscaAvionPlaca(placa)->setAzafata(aeropuerto.buscaEmpleado(cedula));
				MensajesGenerales::msjEdicionExitosa();
			}
			else
				cout << "El avion digitado ya cuenta con azafata." << endl;
		}
		else {
			MensajesGenerales::msjErrorPlacaNoExiste();
		}
	}
	else {
		MensajesGenerales::msjErrorEmpCategoria();
	}
}

void InterfazEnlace::enlaceContratoEmpleado(Aeropuerto& aeropuerto)
{
	string cedula, codContrato;
	cout << "------------------ENLACE CONTRATO - EMPLEADO------------------" << endl;
	cout << "Digite la cedula de la empleado: "; cin >> cedula;
	if (aeropuerto.buscaCedula(cedula)) {
		cout << "Digite el codigo de contrato: "; cin >> codContrato;
		if (aeropuerto.buscaCodigoContrato(codContrato)) {
			if (aeropuerto.buscaContrato(codContrato)->getEmpleadoContratado() != NULL) {
				aeropuerto.buscaContrato(codContrato)->setEmpleadoContratado(aeropuerto.buscaEmpleado(cedula));
				MensajesGenerales::msjEdicionExitosa();
			}
			else
				cout << "El contrato ya tiene un empleado asignado." << endl;
		}
		else {
			MensajesGenerales::msjErrorCodigo();
		}
	}
	else {
		MensajesGenerales::msjErrorCedulaNoExiste();
	}
}

void InterfazEnlace::enlaceContratoPlaza(Aeropuerto& aeropuerto)
{
	string codPlaza, codContrato;
	cout << "------------------ENLACE PLAZA - TIEMPO INDEFINIDO------------------" << endl;
	cout << "Digite el codigo de la plaza: "; cin >> codPlaza;
	if (aeropuerto.buscaPlaza(codPlaza)) {
		cout << "Digite el codigo del contrato: "; cin >> codContrato;
		if (aeropuerto.buscaCodigoContrato(codContrato) && aeropuerto.esTiempoIndefinido(codContrato)) {
			if (aeropuerto.buscaContrato(codContrato)->getPlaza() != NULL) {
				aeropuerto.buscaContrato(codContrato)->setPlaza(*aeropuerto.buscaPlazaPlaza(codPlaza));
				MensajesGenerales::msjEdicionExitosa();
			}
			else
				cout << "El contrato de Tiempo indefinido ya tiene una plaza asignada." << endl;
		}
		else {
			MensajesGenerales::msjErrorContratoCategoria();
		}
	}
	else {
		MensajesGenerales::msjErrorCedulaNoExiste();
	}
}
