#include "ControladoraArchivos.h"

int ControladoraArchivo::controlMenuArchivo()
{
    return InterfazArchivo::menuArchivo();
}

void ControladoraArchivo::control0(Aeropuerto& aeropuerto, ifstream& empleadoEsc, ifstream& avionEsc, ifstream& contratoEsc, ifstream& plazaEsc, ofstream& empleado, ofstream& avion, ofstream& contrato, ofstream& plaza)
{
	int op;
	do {
		op = controlMenuArchivo();


		switch (op) {
		case 1:
		{
			control1(aeropuerto, empleadoEsc, avionEsc, contratoEsc, plazaEsc);
			break;
		}
		case 2:
		{
			control2(aeropuerto, empleado, avion, contrato, plaza);
			break;
		}
		case 3:
		{
			MensajesGenerales::msjRegreso();
			break;
		}
		default:
			MensajesGenerales::msjErrorRango();
			break;
		}

		cin.get();
		cin.get();
	} while (op != 3);
}

void ControladoraArchivo::control1(Aeropuerto& aeropuerto, ifstream& empleadoEsc, ifstream& avionEsc, ifstream& contratoEsc, ifstream& plazaEsc)
{
	InterfazArchivo::descargarArchivo(empleadoEsc, avionEsc, contratoEsc, plazaEsc, aeropuerto);
}

void ControladoraArchivo::control2(Aeropuerto& aeropuerto,ofstream& empleado, ofstream& avion, ofstream& contrato, ofstream& plaza)
{
	InterfazArchivo::cargarArchivos(empleado, avion, contrato, plaza, aeropuerto);
}
