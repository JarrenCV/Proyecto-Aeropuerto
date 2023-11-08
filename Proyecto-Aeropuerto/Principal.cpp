#include"ListaContratos.h"
#include"ListaAviones.h"
#include"ListaEmpleados.h"
#include"InterfazEmpleado.h"
#include"MenuPrincipal.h"
#include"InterfazAvion.h"

int main() {
	int opcion;
	ListaEmpleados* contEmpleados = new ListaEmpleados();
	ListaAviones* contAviones = new ListaAviones();

	do {
		opcion = MenuPrincipal::menuIngresos();

		switch (opcion) {
		case 1:
		{
			// AQUI VA OTRO SUB MENU QUE PREGUNTA SI ES TRIPULANTE O MISELANEO
			int segOpcion;
			do {
				segOpcion = InterfazEmpleado::menuEmpleado();
				
				switch (segOpcion) {
				case 1:
				{
					// AQUI VA OTRO SUB MENU QUE PREGUNTA SI ES PILOTO, COPILOTO O AZAFATA
					int terOpcion;
					do {
						terOpcion = InterfazEmpleado::menuEmpleadoTripulacion();
						
						switch (terOpcion) {
						case 1: {
							InterfazEmpleado::ingresaInfoPiloto(*contEmpleados);
							break;
						}
						
						case 2:{
							InterfazEmpleado::ingresaInfoCopiloto(*contEmpleados);
							break;
						}
						case 3:
						{
							InterfazEmpleado::ingresaInfoAzafata(*contEmpleados);
							break;
						}
						case 4:
						{
							MensajesGenerales::msjRegreso();
							break;
						}
						default:
							MensajesGenerales::msjErrorRango();
						}
						cin.get();
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
						case 3:
						{
							MensajesGenerales::msjRegreso();
							break;
						}
						default:
							MensajesGenerales::msjErrorRango();
						}
						cin.get();
						cin.get();	// system("pause") mas fino.
						system("cls");
					} while (cuartOpcion != 3);
					break;
				}
				default:
					MensajesGenerales::msjErrorRango();

				}

				cin.get();
				cin.get();	// system("pause") mas fino.
				system("cls");
			} while (segOpcion != 3);

		}
		case 2: 
		{
			int opCase2;
			do {
				opCase2 = InterfazAvion::menuAvion();
				
				switch (opCase2) {
				case 1:
				{
					int caseCivil;
					do {
						caseCivil = InterfazAvion::menuAvionCivil();
						
						switch (caseCivil) 
						{
						case 1:
						{
							InterfazAvion::ingresaInfoAvionComercial(*contAviones);
							break;
						}
						case 2:
						{
							InterfazAvion::ingresaInfoAvionDeCarga(*contAviones);
							break;
						}
						case 3:
						{
							MensajesGenerales::msjRegreso();
							break;
						}
						default:
							MensajesGenerales::msjErrorRango();

						}
						cin.get();
						cin.get();
						system("cls");
					} while (caseCivil != 3);
					break;
				}
				case 2: 
				{
					InterfazAvion::ingresaInfoAvionMilitar(*contAviones);
					break;
				}
				case 3:
				{
					MensajesGenerales::msjRegreso();
					break; 
				}
				}
			} while (opCase2 != 3);
			break;
		}
		case 3: 
		{
			int opCase3;
			do {
				cout << "------------------MENU CONTRATOS------------------" << endl;
				cout << "Digite (1)				Crear contrato de servicios profesionales" << endl;
				cout << "Digite (2)				Crear contrato Plazo fijo" << endl;
				cout << "Digite (3)             Crear contrato de Tiempo indefinido" << endl;
				cout << "Digite (4)             Salir" << endl;
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
				case 4:
				{
					MensajesGenerales::msjRegreso();
					break;
				}
				}
			} while (opCase3 != 4);
			break;
		}

		case 4: 
		{
			MensajesGenerales::msjSalirSistema();
			break;
		}
		default:
			MensajesGenerales::msjErrorRango();
		}


		cin.get();
		cin.get();	// system("pause") mas fino.
		system("cls");

	} while (opcion != 4);



	system("pause");
	return 0;
}