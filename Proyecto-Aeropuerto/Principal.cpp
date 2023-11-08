#include"ListaContratos.h"
#include"ListaAviones.h"
#include"ListaEmpleados.h"
#include"Adminitrativo.h"
#include"Miscelaneo.h"
#include"InterfazEmpleado.h"

int main() {
	int opcion;
	ListaEmpleados* contEmpleados = new ListaEmpleados();

	do {
		cout << "------------------MENU PRINCIPAL------------------" << endl;
		cout << "Digite (1)				Ingresar Empleados" << endl;
		cout << "Digite (2)				Ingresar Aviones" << endl;
		cout << "Digite (3)				Crear un Contrato" << endl;
		cout << "Digite (4)				Salir" << endl;
		cout << "--------------------------------------------------" << endl;
		cout << "Digite la opcion: "; cin >> opcion;

		switch (opcion) {
		case 1:
		{
			// AQUI VA OTRO SUB MENU QUE PREGUNTA SI ES TRIPULANTE O MISELANEO
			int segOpcion;
			do {
				cout << "------------------MENU EMPLEADOS------------------" << endl;
				cout << "Digite (1)				Ingresar Empleado Tripulante" << endl;
				cout << "Digite (2)				Ingresar Empleado de Planta" << endl;
				cout << "Digite (3)				Cancelar" << endl;
				cout << "--------------------------------------------------" << endl;
				cout << "Digite la opcion: "; cin >> segOpcion;
				switch (segOpcion) {
				case 1:
				{
					// AQUI VA OTRO SUB MENU QUE PREGUNTA SI ES PILOTO, COPILOTO O AZAFATA
					int terOpcion;
					do {
						cout << "------------------MENU TRIPULACION------------------" << endl;
						cout << "Digite (1)				Ingresar Piloto" << endl;
						cout << "Digite (2)				Ingresar Copiloto" << endl;
						cout << "Digite (3)				Ingresar Azafata" << endl;
						cout << "Digite (4)				Cancelar" << endl;
						cout << "----------------------------------------------------" << endl;
						cout << "Digite la opcion: "; cin >> terOpcion;
						switch (terOpcion) {
						case 1:
							break;
						case 2:
							break;
						case 3:
							break;
						default:
							cout << "Opcion invalida." << endl;

						}
						
						cin.get();	// system("pause") mas fino.
						system("cls");
					} while (terOpcion != 4);
					break;
				}
				case 2:
				{
					// AQUI VA OTRO SUB MENU QUE PREGUNTA SI ES ADMINISTRATIVO O MISELANEO
					int cuartOpcion;
					do {
						cuartOpcion = InterfazEmpleado::menuEmpleadoPlanta();

						switch (cuartOpcion) {
						case 1: {
							InterfazEmpleado::ingresaInfoAdministrativo(*contEmpleados);
							break;
						}
						case 2: {
							InterfazEmpleado::ingresaInfoMiscelaneo(*contEmpleados);
							break;
						}
						default:
							InterfazEmpleado::msjErrorRango();
						}

						cin.get();	// system("pause") mas fino.
						system("cls");
					} while (cuartOpcion != 3);
					break;
				}
				default:
					InterfazEmpleado::msjErrorRango();

				}

				
				cin.get();	// system("pause") mas fino.
				system("cls");
			} while (segOpcion != 3);

		}
		case 2: 
		{
			int opCase2;
			do {
				cout << "------------------MENU AVIONES------------------" << endl;
				cout << "Digite (1)				Ingresar Avion Civil" << endl;
				cout << "Digite (2)				Ingresar Avion militar" << endl;
				cout << "Digite (3)				Cancelar" << endl;
				cout << "--------------------------------------------------" << endl;
				cout << "Digite la opcion: "; cin >> opCase2;
				switch (opCase2) {
				case 1:
				{
					int caseCivil;
					do {
						cout << "------------------MENU AVIACION CIVIL------------------" << endl;
						cout << "Digite (1)				Ingresar Avion Comercial" << endl;
						cout << "Digite (2)				Ingresar Avion De Carga" << endl;
						cout << "Digite (3)				Cancelar" << endl;
						cout << "----------------------------------------------------" << endl;
						cout << "Digite la opcion: "; cin >> caseCivil;
						switch (caseCivil) 
						{
						case 1:
							break;
						case 2:
							break;
						default:
							cout << "Opcion invalida." << endl;

						}
						cin.get();
						system("cls");
					} while (caseCivil != 3);
					break;
				}
				case 2: 
				{
					break;
				}
				}
			} while (opCase2 != 3);
		}
		case 3: 
		{
			int opCase3;
			do {
				cout << "------------------MENU CONTRATOS------------------" << endl;
				cout << "Digite (1)				Crear contrato de servicios profesionales" << endl;
				cout << "Digite (2)				Crear contrato Plazo fijo" << endl;
				cout << "Digite (3)             Crear contrato de Tiempo indefinido" << endl;
				cout << "--------------------------------------------------" << endl;
				cout << "Digite la opcion: "; cin >> opCase3;
				switch (opCase3) {
				case 1:
				{
					break;
				}
				case 2:
				{
					break;
				}
				case 3:
				{
					break;
				}
				}
			} while (opCase3 != 3);
		}

		case 4: 
		{
			cout << "Saliendo del sistema..." << endl;
			break;
		}
		default:
			InterfazEmpleado::msjErrorRango();
		}


		
		cin.get();	// system("pause") mas fino.
		system("cls");

	} while (opcion != 4);



	system("pause");
	return 0;
}