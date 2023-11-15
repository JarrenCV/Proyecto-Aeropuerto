#include "InterfazArchivo.h"

int InterfazArchivo::menuArchivo()
{
	int op;
	system("cls");

	cout << "-----------------CARGA Y DESCARGA DE ARCHIVOS-----------------" << endl;
	cout << "Digite (1)                 Descargar todos archivos al sistema" << endl;
	cout << "Digite (2)                 Actualizar todos los archivos      " << endl;
	cout << "Digite (3)                 Cancelar                           " << endl;
	cout << "--------------------------------------------------------------" << endl;
	cout << "Digite la opcion: "; cin >> op;
	return op;
}

void InterfazArchivo::descargarArchivo(ifstream& empleadoEsc, ifstream& avionEsc, ifstream& contratoEsc, ifstream& plazaEsc, Aeropuerto& aeropuerto)
{
	cout << "Descargando los archivos al sistema..." << endl;
	empleadoEsc.open("empleado.txt", ios::in);
	if (empleadoEsc.fail()) {
		cerr << "Error al abrir el archivo de empleados.";
		exit(1);
	}
	avionEsc.open("avion.txt", ios::in);
	if (avionEsc.fail()) {
		cerr << "Error al abrir el archivo de aviones.";
		exit(1);
	}
	contratoEsc.open("contrato.txt", ios::in);
	if (contratoEsc.fail()) {
		cerr << "Error al abrir el archivo de contratos.";
		exit(1);
	}
	plazaEsc.open("plaza.txt", ios::in);
	if (plazaEsc.fail()) {
		cerr << "Error al abrir el archivo de plazas.";
		exit(1);
	}

	aeropuerto.getListaEmpleados()->readAll(empleadoEsc);
	aeropuerto.getListaAviones()->readAll(avionEsc);
	aeropuerto.getListaContratos()->readAll(contratoEsc);
	aeropuerto.getListaPlaza()->readAll(plazaEsc);

	cout << "Descargados." << endl;
	cout << "Recuerde utilizar el menu de enlaces para establecer las relaciones." << endl;
	empleadoEsc.close();
	avionEsc.close();
	contratoEsc.close();
	plazaEsc.close();
}

void InterfazArchivo::cargarArchivos(ofstream& empleado, ofstream& avion, ofstream& contrato, ofstream& plaza, Aeropuerto& aeropuerto)
{
	cout << "Cargando los archivos al sus respectivos txt..." << endl;
	empleado.open("empleado.txt", ios::out);
	if (empleado.fail()) {
		cerr << "Error al abrir el archivo de empleados.";
		exit(1);
	}
	avion.open("avion.txt", ios::out);
	if (avion.fail()) {
		cerr << "Error al abrir el archivo de aviones.";
		exit(1);
	}
	contrato.open("contrato.txt", ios::out);
	if (contrato.fail()) {
		cerr << "Error al abrir el archivo de contratos.";
		exit(1);
	}
	plaza.open("plaza.txt", ios::out);
	if (plaza.fail()) {
		cerr << "Error al abrir el archivo de plazas.";
		exit(1);
	}

	aeropuerto.getListaEmpleados()->saveAll(empleado);
	aeropuerto.getListaAviones()->saveAll(avion);
	aeropuerto.getListaContratos()->saveAll(contrato);
	aeropuerto.getListaPlaza()->saveAll(plaza);

	cout << "Cargados correctamente." << endl;
	empleado.close();
	avion.close();
	contrato.close();
	plaza.close();
}
