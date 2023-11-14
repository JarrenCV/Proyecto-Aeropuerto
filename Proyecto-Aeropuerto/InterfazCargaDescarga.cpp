#include "InterfazCargaDescarga.h"

int InterfazCargsDescarga::menuFiles()
{
	int opcion;
	system("cls");
	cout << "------------------MENU CARGAS Y DESCARGAS------------------" << endl;
	cout << "Digite (1)				" << endl;
	cout << "Digite (2)				" << endl;
	cout << "Digite (3)             " << endl;
	cout << "Digite (4)             Salir" << endl;
	cout << "--------------------------------------------------" << endl;
	cout << "Digite la opcion: "; cin >> opcion;


	return opcion;
}
