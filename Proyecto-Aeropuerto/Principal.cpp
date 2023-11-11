#include"Aeropuerto.h"

#include"ListaContratos.h"
#include"ListaAviones.h"
#include"ListaEmpleados.h"
#include"InterfazEmpleado.h"
#include"MenuPrincipal.h"
#include"InterfazAvion.h"
#include"InterfazContrato.h"
#include"Fecha.h"

#include"ServicioProfesional.h"

using namespace std;

int main() {
	ListaEmpleados* contEmpleados = new ListaEmpleados();
	ListaAviones* contAviones = new ListaAviones();
	ListaContratos* contContratos = new ListaContratos();
	ListaPlaza* contPlazas = new ListaPlaza();

	//(string nomE, string cedJur, string numTelf, ListaAviones& contAvion, ListaContratos& contContrato, ListaEmpleados& contEmpleado)
	Aeropuerto* aeropuerto = new Aeropuerto("Aeropuerto Tilin", "11114-2314", "9861-4673", *contAviones, *contContratos, *contEmpleados); // eso tilin 

	
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
						/*cout << "------------------MENU CONTRATOS------------------" << endl;
						cout << "Digite (1)				Crear contrato por servicios profesionales" << endl;
						cout << "Digite (2)				Crear contrato Plazo fijo" << endl;
						cout << "Digite (3)             Crear contrato de Tiempo indefinido" << endl;
						cout << "Digite (4)             Salir" << endl;
						cout << "--------------------------------------------------" << endl;
						cout << "Digite la opcion: "; cin >> opCase3;*/
						switch (opCase3) {
						case 1:
						{
							InterfazContrato::ingresaServiciosProfesionales(*aeropuerto);
							//string codContrato, descPuesto, horario, tipoServicio;
							//double salario;
							//int dia1, mes1, anio1, dia2, mes2, anio2;
							//Fecha* ingreso;
							//Fecha* culminacion;
							//Contrato* contratoSP;

							//cout << "------------------SERVICIOS PROFESIONALES------------------" << endl;
							//cout << "Digite el codigo del Contrato: "; cin >> codContrato;
							//if (!aeropuerto.getListaContratos()->buscaContrato(codContrato)) {
							//	cin.ignore();
							//	cout << "Digite la descripcion del puesto: "; getline(cin, descPuesto);
							//	cout << "Digite el salario del contrato: "; cin >> salario;

							//	cout << "Digite la fecha de ingreso: " << endl;
							//	cout << "Dia: "; cin >> dia1;
							//	cout << "Mes: "; cin >> mes1;
							//	cout << "Anio: "; cin >> anio1;
							//	ingreso = new Fecha(dia1,mes1,anio1);

							//	cout << "Digite la fecha de culminacion: " << endl;
							//	cout << "Dia: "; cin >> dia2;
							//	cout << "Mes: "; cin >> mes2;
							//	cout << "Anio: "; cin >> anio2;
							//	culminacion = new Fecha(dia2, mes2, anio2);
							//	
							//	if (ingreso->esMenorQue(*culminacion)) {
							//		
							//		cin.ignore();
							//		cout << "Digite el horario del Contrato: "; getline(cin, horario);
							//		
							//		cin.ignore();
							//		cout << "Digite el Tipo de Servicio del Contrato: "; getline(cin, tipoServicio);


							//		//string h, string tS, string cContra, string dPuesto, double sal, Fecha& ingreso, Fecha& culmen
							//		contratoSP = new ServicioProfesional(horario,tipoServicio,codContrato,descPuesto,salario,*ingreso,*culminacion);
							//		aeropuerto.ingresaContrato(*contratoSP);
							//		MensajesGenerales::IngresoExitoso();
							//	}
							//	else {
							//		MensajesGenerales::msjErrorFechaIngCul();
							//	}
							//}
							//else {
							//	MensajesGenerales::msjErrorCodigo();
							//}
							break;
						}
						case 2:
						{
							InterfazContrato::ingresaPlazoFijo(*aeropuerto, *actual);
							//string codContrato, descPuesto;
							//double salario;
							//int dia1, mes1, anio1, dia2, mes2, anio2;
							//bool elegible = false;
							//Fecha* ingreso;
							//Fecha* culminacion;
							//Contrato* contratoPF;

							//cout << "------------------PLAZO FIJO------------------" << endl;
							//cout << "Digite el codigo del Contrato: "; cin >> codContrato;
							//if (!aeropuerto.getListaContratos()->buscaContrato(codContrato)) {
							//	cin.ignore();
							//	cout << "Digite la descripcion del puesto: "; getline(cin, descPuesto);
							//	cout << "Digite el salario del contrato: "; cin >> salario;

							//	cout << "Digite la fecha de ingreso: " << endl;
							//	cout << "Dia: "; cin >> dia1;
							//	cout << "Mes: "; cin >> mes1;
							//	cout << "Anio: "; cin >> anio1;
							//	ingreso = new Fecha(dia1, mes1, anio1);

							//	cout << "Digite la fecha de culminacion: " << endl;
							//	cout << "Dia: "; cin >> dia2;
							//	cout << "Mes: "; cin >> mes2;
							//	cout << "Anio: "; cin >> anio2;
							//	culminacion = new Fecha(dia2, mes2, anio2);

							//	if (ingreso->esMenorQue(*culminacion)) {
							//		if (ingreso->diferenciaAnios(*actual, *culminacion)) {
							//			elegible = true;
							//		}


							//		//(bool ele, string cContra, string dPuesto, double sal, Fecha& ingreso, Fecha& culmen)
							//		contratoPF = new PlazoFijo(elegible, codContrato, descPuesto, salario, *ingreso, *culminacion);
							//		aeropuerto.ingresaContrato(*contratoPF);
							//		MensajesGenerales::IngresoExitoso();
							//	}
							//	else {
							//		MensajesGenerales::msjErrorFechaIngCul();
							//	}
							//}
							//else {
							//	MensajesGenerales::msjErrorCodigo();
							//}
							break;
						}
						case 3:
						{
							InterfazContrato::ingresaTiempoIndefinido(*aeropuerto);
							//string codContrato, descPuesto, codigoPlaza, nombrePuesto;
							//double salario;
							//int dia1, mes1, anio1, dia2, mes2, anio2;
							//Fecha* ingreso;
							//Fecha* culminacion;
							//Plaza* plaza;
							//Contrato* contratoTI;

							//cout << "------------------TIEMPO INDEFINIDO------------------" << endl;
							//cout << "Digite el codigo del Contrato: "; cin >> codContrato;
							//if (!aeropuerto.getListaContratos()->buscaContrato(codContrato)) {
							//	cin.ignore();
							//	cout << "Digite la descripcion del puesto: "; getline(cin, descPuesto);
							//	cout << "Digite el salario del contrato: "; cin >> salario;

							//	cout << "Digite la fecha de ingreso: " << endl;
							//	cout << "Dia: "; cin >> dia1;
							//	cout << "Mes: "; cin >> mes1;
							//	cout << "Anio: "; cin >> anio1;
							//	ingreso = new Fecha(dia1, mes1, anio1);

							//	cout << "Digite la fecha de culminacion: " << endl;
							//	cout << "Dia: "; cin >> dia2;
							//	cout << "Mes: "; cin >> mes2;
							//	cout << "Anio: "; cin >> anio2;
							//	culminacion = new Fecha(dia2, mes2, anio2);

							//	if (ingreso->esMenorQue(*culminacion)) {
							//		
							//		if(aeropuerto.getListaPlaza()->cantidadNodos() <= 5){
							//			cout << "Digite el codigo de la plaza asignada a este contrato: "; cin >> codigoPlaza;

							//			if (!aeropuerto.getListaPlaza()->buscaPlaza(codigoPlaza)) {
							//				cout << "Digite el nombre del puesto de este contrato: "; cin >> nombrePuesto;
							//				plaza = new Plaza(codigoPlaza, nombrePuesto);

							//				//(Plaza& p, string cContra, string dPuesto, double sal, Fecha& ingreso, Fecha& culmen)
							//				contratoTI = new TiempoIndefinido(*plaza, codContrato, descPuesto, salario, *ingreso, *culminacion);
							//				
							//				aeropuerto.ingresaContrato(*contratoTI);
							//				aeropuerto.ingresaPlaza(*plaza);
							//				MensajesGenerales::IngresoExitoso();

							//			}
							//			else {
							//				MensajesGenerales::msjErrorCodPlaza();
							//			}

							//		}
							//		else {
							//			MensajesGenerales::msjErrorPlazasLlenas();
							//		}
							//	}
							//	else {
							//		MensajesGenerales::msjErrorFechaIngCul();
							//	}
							//}
							//else {
							//	MensajesGenerales::msjErrorCodigo();
							//}
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
			break;
		}
		case 3: 
		{
			break;
		}
		case 4: 
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
	}while (opcionPrincipal != 4);



	system("pause");
	return 0;
}