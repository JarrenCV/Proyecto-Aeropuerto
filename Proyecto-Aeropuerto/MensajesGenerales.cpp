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

void MensajesGenerales::msjEdicionExitosa() 
{
	cout << ">>LISTO<< Los cambios se hicieron correctamente." << endl;
}

void MensajesGenerales::msjEliminacion() 
{
	cout << ">>LISTO<< Eliminacion exitosa." << endl;
}

void MensajesGenerales::msjErrorCedula()
{
	cout << "ERROR: El numero de cedula ya existe en el sistema" << endl;

}

void MensajesGenerales::msjErrorCedulaNoExiste()
{
	cout << "ERROR: El numero de cedula NO existe en el sistema" << endl;
}

void MensajesGenerales::msjErrorPlacaNoExiste()
{
	cout << "ERROR: El numero de placa NO existe en el sistema" << endl;
}

void MensajesGenerales::msjErrorEmpCategoria()
{
	cout << "ERROR: El empleado no es de la categoria seleccionada" << endl;
}

void MensajesGenerales::msjErrorContratoCategoria()
{
	cout << "ERROR: El contrato no es de la categoria seleccionada" << endl;
}

void MensajesGenerales::msjErrorCodigo()
{
	cout << "ERROR: El codigo del contrato NO ya existe en el sistema" << endl;
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
