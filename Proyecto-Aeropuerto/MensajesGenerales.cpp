#include "MensajesGenerales.h"

void MensajesGenerales::IngresoExitoso()
{
	cout << ">>LISTO<< Ingreso exitoso." << endl;
}

void MensajesGenerales::msjSalirSistema()
{
	cout << "Saliendo del sistema..." << endl;
}

void MensajesGenerales::msjRegreso()
{
	cout << "Regresando..." << endl;

}

void MensajesGenerales::msjErrorCedula()
{
	cout << "ERROR: El numero de cedula ya existe en el sistema" << endl;

}

void MensajesGenerales::msjErrorCodigo()
{
	cout << "ERROR: El codigo del contrato ya existe en el sistema" << endl;
}

void MensajesGenerales::msjErrorPlazasLlenas()
{
	cout << "ERROR: El contenedor de plazas esta lleno." << endl;
}

void MensajesGenerales::msjErrorCodPlaza()
{
	cout << "ERROR: El codigo de la plaza ya existe en el sistema" << endl;
}

void MensajesGenerales::msjErrorFechaIngCul()
{
	cout << "ERROR: La fecha de ingreso no puede ser despues de la fehca de culminacion." << endl;
}

void MensajesGenerales::msjErrorRango()
{
	cout << "Opcion invalida." << endl;

}
