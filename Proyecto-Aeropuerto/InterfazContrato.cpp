#include "InterfazContrato.h"

int InterfazContrato::menuContrato()
{
    int opcion;
	system("cls");
	cout << "------------------MENU CONTRATOS------------------" << endl;
	cout << "Digite (1)				Crear contrato por servicios profesionales" << endl;
	cout << "Digite (2)				Crear contrato Plazo fijo" << endl;
	cout << "Digite (3)             Crear contrato de Tiempo indefinido" << endl;
	cout << "Digite (4)             Salir" << endl;
	cout << "--------------------------------------------------" << endl;
	cout << "Digite la opcion: "; cin >> opcion;


    return opcion;
}

void InterfazContrato::ingresaServiciosProfesionales(Aeropuerto& aeropuerto)
{
	string codContrato, descPuesto, horario, tipoServicio;
	double salario;
	int dia1, mes1, anio1, dia2, mes2, anio2;
	Fecha* ingreso;
	Fecha* culminacion;
	Contrato* contratoSP;

	cout << "------------------SERVICIOS PROFESIONALES------------------" << endl;
	cout << "Digite el codigo del Contrato: "; cin >> codContrato;
	if (!aeropuerto.getListaContratos()->buscaContrato(codContrato)) {
		cin.ignore();
		cout << "Digite la descripcion del puesto: "; getline(cin, descPuesto);
		cout << "Digite el salario del contrato: "; cin >> salario;

		cout << "Digite la fecha de ingreso: " << endl;
		cout << "Dia: "; cin >> dia1;
		cout << "Mes: "; cin >> mes1;
		cout << "Anio: "; cin >> anio1;
		ingreso = new Fecha(dia1, mes1, anio1);

		cout << "Digite la fecha de culminacion: " << endl;
		cout << "Dia: "; cin >> dia2;
		cout << "Mes: "; cin >> mes2;
		cout << "Anio: "; cin >> anio2;
		culminacion = new Fecha(dia2, mes2, anio2);

		if (ingreso->esMenorQue(*culminacion)) {

			cin.ignore();
			cout << "Digite el horario del Contrato: "; getline(cin, horario);

			cin.ignore();
			cout << "Digite el Tipo de Servicio del Contrato: "; getline(cin, tipoServicio);


			//string h, string tS, string cContra, string dPuesto, double sal, Fecha& ingreso, Fecha& culmen
			contratoSP = new ServicioProfesional(horario, tipoServicio, codContrato, descPuesto, salario, *ingreso, *culminacion);
			aeropuerto.ingresaContrato(*contratoSP);
			MensajesGenerales::IngresoExitoso();
		}
		else {
			MensajesGenerales::msjErrorFechaIngCul();
		}
	}
	else {
		MensajesGenerales::msjErrorCodigo();
	}
}

void InterfazContrato::ingresaPlazoFijo(Aeropuerto& aeropuerto)
{
}

void InterfazContrato::ingresaTiempoIndefinido(Aeropuerto& aeropuerto)
{
}
