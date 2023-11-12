#include"Aeropuerto.h"

#include"ListaContratos.h"
#include"ListaAviones.h"
#include"ListaEmpleados.h"
#include"InterfazEmpleado.h"
#include"MenuPrincipal.h"
#include"InterfazAvion.h"
#include"InterfazContrato.h"
#include"Fecha.h"
#include"ListaPlaza.h"

#include"ServicioProfesional.h"
using namespace std;

int main() {
	ListaEmpleados* contEmpleados = new ListaEmpleados();
	ListaAviones* contAviones = new ListaAviones();
	ListaContratos* contContratos = new ListaContratos();
	ListaPlaza* contPlazas = new ListaPlaza();

	//(string nomE, string cedJur, string numTelf, ListaAviones& contAvion, ListaContratos& contContrato, ListaEmpleados& contEmpleado)
	Aeropuerto* aeropuerto = new Aeropuerto("Aeropuerto Tilin", "11114-2314", "9861-4673", *contAviones, *contContratos, *contEmpleados,*contPlazas); // eso tilin 

	
	int opcionPrincipal,d,m,a;
	Fecha* actual;
	
	// Antes de entrar en el sistema necesitamos la fecha actual
	// para poder saber si un contrato de plazo fijo tiene mas de 2 anios
	// a asi saber si es elegible o no.

	cout << "Digite la fecha de acutal: " << endl;
	cout << "Dia: "; cin >> d;
	cout << "Mes: "; cin >> m;
	cout << "Anio: "; cin >> a;
	actual = new Fecha(d, m, a);
	do{
		
		opcionPrincipal = MenuPrincipal::menuPrincipal();

		switch (opcionPrincipal){
		case 1:
		{
			int opcion;
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
									InterfazEmpleado::ingresaInfoPiloto(*aeropuerto);
									break;
								}

								case 2: {
									InterfazEmpleado::ingresaInfoCopiloto(*aeropuerto);
									break;
								}
								case 3:
								{
									InterfazEmpleado::ingresaInfoAzafata(*aeropuerto);
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
									InterfazEmpleado::ingresaInfoAdministrativo(*aeropuerto);
									break;
								}
								case 2: {
									InterfazEmpleado::ingresaInfoMiscelaneo(*aeropuerto);
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
					} while (segOpcion != 3);
					break;
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
									InterfazAvion::ingresaInfoAvionComercial(*aeropuerto);
									break;
								}
								case 2:
								{
									InterfazAvion::ingresaInfoAvionDeCarga(*aeropuerto);
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
							InterfazAvion::ingresaInfoAvionMilitar(*aeropuerto);
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
						opCase3 = InterfazContrato::menuContrato();
						
						switch (opCase3) {
						case 1:
						{
							InterfazContrato::ingresaServiciosProfesionales(*aeropuerto);
							
							break;
						}
						case 2:
						{
							InterfazContrato::ingresaPlazoFijo(*aeropuerto, *actual);
							
							break;
						}
						case 3:
						{
							InterfazContrato::ingresaTiempoIndefinido(*aeropuerto);
							
							break;
						}
						case 4:
						{
							MensajesGenerales::msjRegreso();
							break;
						}
						}

						cin.get();
						cin.get(); // system("pause") mas fino.
						system("cls");
					} while (opCase3 != 4);
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

			} while (opcion != 4);
			break;
		}
		case 2:
		{
			int opEdicion;
			do {
				opEdicion = MenuPrincipal::menuMantenimiento();
				
				switch (opEdicion){
				case 1: 
				{
					int opEdicionEmp;
					do {
						opEdicionEmp = InterfazEmpleado::menuEdicionEmpleado();

						switch (opEdicionEmp) {
						case 1: 
						{
							InterfazEmpleado::eliminaEmpleado(*aeropuerto);
							break;
						}
						case 2:
						{
							InterfazEmpleado::cambiaAniosExperiencia(*aeropuerto);
							break;
						}
						case 3:
						{
							InterfazEmpleado::cambiaTelefono(*aeropuerto);
							break;
						}
						case 4:
						{
							InterfazEmpleado::cambiaNacionalidad(*aeropuerto);
							break;
						}
						case 5:
						{
							InterfazEmpleado::cambiaLabor(*aeropuerto);
							break;
						}
						case 6:
						{
							InterfazEmpleado::cambiaTituloU(*aeropuerto);
							break;
						}
						case 7:
						{
							InterfazEmpleado::cambiaGradoEsc(*aeropuerto);
							break;
						}
						case 8: 
						{
							MensajesGenerales::msjRegreso();
						}
						default:
							MensajesGenerales::msjErrorRango();
						}// fin del switch
					
						cin.get();
						cin.get();
						system("cls");
					} while (opEdicionEmp != 8);
					break;
				}
				case 2:
				{
					// MANTENIMIENTO AVIONES
					int opEdicionAvi;
					do {
						opEdicionAvi = InterfazAvion::menuEdicionAvion();

						switch (opEdicionAvi) {
						case 1:
						{
							//LESBER LO HACE ...................................... LESBER LO HACE ................. LESBER LO HACE .................. LESBER LO HACE ...
							string cedula;
							cout << "----------------ELIMINAR UN AVION-------------" << endl;
							cout << "Digite la cedula del Empleado que desea eliminar: "; cin >> cedula;
							
							
							
							
							
							
							break;
						}
						case 2:
						{
							InterfazAvion::editaPlacaAvionComercial(*aeropuerto);
							break;
						}
						case 3:
						{
							InterfazAvion::editaAnchuraPuerta(*aeropuerto);
							break;
						}
						case 4:
						{
							InterfazAvion::editaAlturaPuerta(*aeropuerto);
							break;
						}
						case 5:
						{
							InterfazAvion::editaDistanciaRecorrida(*aeropuerto);
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
					} while (opEdicionAvi != 6);

					break;
				}
				case 3:
				{
					int opEdicionCont = 0;
					do {
						int opEdicionCont = InterfazContrato::menuEdicionContrato();
						switch (opEdicionCont) {
						case 1:
						{
							InterfazContrato::cambiaDescripcionPuesto(*aeropuerto); 
							break;
						}
						case 2:
						{
							InterfazContrato::cambiaSalario(*aeropuerto);
							break;
						}
						case 3:
						{
							InterfazContrato::cambiaHorario(*aeropuerto);
							break;
						}
						case 4:
						{
							InterfazContrato::cambiaTipoServicio(*aeropuerto);
							break;
						}
						case 5:
						{
							InterfazContrato::cambiaPuestoPlaza(*aeropuerto);
							break;
						}
						case 6:
						{
							MensajesGenerales::msjRegreso();
						}
						default: 
							MensajesGenerales::msjErrorRango();
						}

						cin.get();
						cin.get();
						system("cls");
					} while (opEdicionCont);
					break;
				}
				case 4:
				{
					MensajesGenerales::msjRegreso();
					break;
				}
				default:
				{
					MensajesGenerales::msjErrorRango();
					break; 
				}
				}
				
				
				cin.get();
				cin.get();
			} while (opEdicion!=4);
			break;
		}
		case 3: 
		{
			int opcion3;
			do
			{
				opcion3 = MenuPrincipal::menuReportes();
				switch (opcion3)
				{
				case 1:
				{
					cout << aeropuerto->reporteContratosConEmpleado() << endl;
					break;
				}
				case 2:
				{
					cout << aeropuerto->reporteAeronaveConTripulacion() << endl;
					break;
				}
				case 3:
				{
					cout << aeropuerto->reporteSoloAeronaves() << endl;
					break;
				}
				case 4:
				{
					cout << aeropuerto->reporteContratosConEmpleado() << endl;
					break;
				}
				case 5:
				{
					cout << aeropuerto->reportePilotosAvionesCarga() << endl;
					break;
				}
				case 6:
				{
					cout << aeropuerto->reporteAvionesMas20(*actual) << endl;
					break;
				}
				case 7:
				{
					cout << aeropuerto->reporteServiciosProfecionales() << endl;
					break;
				}
				case 8:
				{
					cout << aeropuerto->reportePlazoFijo() << endl;
					break;
				}
				case 9:
				{
					cout << aeropuerto->reporteTiempoIndefinido() << endl;
					break;
				}
				case 10:
				{
					cout << aeropuerto->reporteTripulacionAvionComercial() << endl;
					break;
				}
				case 11:
				{
					cout << aeropuerto->reportePlazoFijo2Anios() << endl;
					break;
				}
				case 12:
				{
					cout << aeropuerto->avionDeCargaMayorAreaDeAcceso() << endl;
					break;
				}
				case 13:
				{
					MensajesGenerales::msjSalirSistema();
					break;
				}
				default:
					MensajesGenerales::msjErrorRango();
				}
				cin.get();
				cin.get(); // system("pause") más fino
				system("cls");
			} while (opcion3 != 13);
	
			break;
		}
		case 4: 
		{
			break;
		}
		case 5: 
		{
			MensajesGenerales::msjSalirSistema();
			break;
		}
		default:
		{
			MensajesGenerales::msjErrorRango();
		}
		}


		cin.get();
		cin.get();	// system("pause") mas fino.
		system("cls");
	}while (opcionPrincipal != 5);



	system("pause");
	return 0;
}