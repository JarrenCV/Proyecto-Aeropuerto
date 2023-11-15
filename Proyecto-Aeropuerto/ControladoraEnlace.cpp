#include "ControladoraEnlace.h"

int ControladoraEnlace::controlMenuEnlace()
{
    return InterfazEnlace::menuEnlace();
}

void ControladoraEnlace::control0(Aeropuerto& aeropuerto)
{
	int op;
	do
	{
		op = controlMenuEnlace();
		switch (op) {
		case 1:
		{
			control1(aeropuerto);
			break;
		}
		case 2:
		{
			control2(aeropuerto);
			break;
		}
		case 3:
		{
			control3(aeropuerto);
			break;
		}
		case 4:
		{
			control4(aeropuerto);
			break;
		}
		case 5:
		{
			control5(aeropuerto);
			break;
		}
		case 6:
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
		system("cls");
	} while (op != 6);
}

void ControladoraEnlace::control1(Aeropuerto& aeropuerto)
{
	InterfazEnlace::enlacePilotoAvion(aeropuerto);
}

void ControladoraEnlace::control2(Aeropuerto& aeropuerto)
{
	InterfazEnlace::enlaceCopilotoAvion(aeropuerto);
}

void ControladoraEnlace::control3(Aeropuerto& aeropuerto)
{
	InterfazEnlace::enlaceAzafataAvion(aeropuerto);
}

void ControladoraEnlace::control4(Aeropuerto& aeropuerto)
{
	InterfazEnlace::enlaceContratoEmpleado(aeropuerto);
}

void ControladoraEnlace::control5(Aeropuerto& aeropuerto)
{
	InterfazEnlace::enlaceContratoPlaza(aeropuerto);
}
