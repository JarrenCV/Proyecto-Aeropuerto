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

void InterfazContrato::ingresaPlazoFijo(Aeropuerto& aeropuerto, Fecha& actual)
{
	string codContrato, descPuesto;
	double salario;
	int dia1, mes1, anio1, dia2, mes2, anio2;
	bool elegible = false;
	Fecha* ingreso;
	Fecha* culminacion;
	Contrato* contratoPF;

	cout << "------------------PLAZO FIJO------------------" << endl;
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
			if (ingreso->diferenciaAnios(actual, *culminacion)) {
				elegible = true;
			}

			//(bool ele, string cContra, string dPuesto, double sal, Fecha& ingreso, Fecha& culmen)
			contratoPF = new PlazoFijo(elegible, codContrato, descPuesto, salario, *ingreso, *culminacion);
			aeropuerto.ingresaContrato(*contratoPF);
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

void InterfazContrato::ingresaTiempoIndefinido(Aeropuerto& aeropuerto)
{
	string codContrato, descPuesto, codigoPlaza, nombrePuesto;
	double salario;
	int dia1, mes1, anio1, dia2, mes2, anio2;
	Fecha* ingreso;
	Fecha* culminacion;
	Plaza* plaza;
	Contrato* contratoTI;

	cout << "------------------TIEMPO INDEFINIDO------------------" << endl;
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

			if (aeropuerto.getListaPlaza()->cantidadNodos() <= 5) {
				cout << "Digite el codigo de la plaza asignada a este contrato: "; cin >> codigoPlaza;

				if (!aeropuerto.getListaPlaza()->buscaPlaza(codigoPlaza)) {
					cout << "Digite el nombre del puesto de este contrato: "; cin >> nombrePuesto;
					plaza = new Plaza(codigoPlaza, nombrePuesto,false);

					//(Plaza& p, string cContra, string dPuesto, double sal, Fecha& ingreso, Fecha& culmen)
					contratoTI = new TiempoIndefinido(*plaza, codContrato, descPuesto, salario, *ingreso, *culminacion);

					aeropuerto.ingresaContrato(*contratoTI);
					aeropuerto.ingresaPlaza(*plaza);
					MensajesGenerales::IngresoExitoso();
				}
				else {
					MensajesGenerales::msjErrorCodPlaza();
				}

			}
			else {
				MensajesGenerales::msjErrorPlazasLlenas();
			}
		}
		else {
			MensajesGenerales::msjErrorFechaIngCul();
		}
	}
	else {
		MensajesGenerales::msjErrorCodigo();
	}
}

int InterfazContrato::menuEdicionContrato()
{
	int opcion;
	system("cls");
	cout << "------------------MENU EDICION DE CONTRATOS------------------" << endl;
	cout << "Digite (1)				Editar descripcion del puesto" << endl;
	cout << "Digite (2)				Editar salario del contrato" << endl;
	cout << "Digite (3)				Editar horario de contrato por servicios profesionales" << endl;
	cout << "Digite (4)				Editar tipo de servicio de contrato por servicios profesionales" << endl;
	cout << "Digite (5)				Editar nombre del puesto de la plaza en un contrato de tiempo indefinido" << endl;
	cout << "Digite (6)				Cancelar" << endl;
	cout << "--------------------------------------------------" << endl;
	cout << "Digite la opcion: "; cin >> opcion;
	return opcion;
}

void InterfazContrato::cambiaDescripcionPuesto(Aeropuerto& aeropuerto)
{
	string codigo, descripcionPuesto;
	cout << "------------------EDITAR DESCRIPCION DEL PUESTO------------------" << endl;
	cout << "Digite el codigo del contrato que desea editar: "; cin >> codigo;
	if (aeropuerto.buscaCodigoContrato(codigo)) {
		cout << "Digite la nueva descripcion del puesto que desea editar: "; cin >> descripcionPuesto;

		aeropuerto.cambiaDescripcionPuesto(codigo, descripcionPuesto);
		MensajesGenerales::msjEdicionExitosa();
	}
	else {
		MensajesGenerales::msjErrorCodigo();
	}
}

void InterfazContrato::cambiaSalario(Aeropuerto& aeropuerto)
{
	string codigo;
	double salario;
	cout << "------------------EDITAR SALARIO DEL CONTRATO------------------" << endl;
	cout << "Digite el codigo del contrato que desea editar: "; cin >> codigo;
	if (aeropuerto.buscaCodigoContrato(codigo)) {
		cout << "Digite el nuevo salario del contrato: "; cin >> salario;

		aeropuerto.cambiaSalario(codigo, salario);
		MensajesGenerales::msjEdicionExitosa();
	}
	else {
		MensajesGenerales::msjErrorCodigo();
	}
}

void InterfazContrato::cambiaHorario(Aeropuerto& aeropuerto)
{
	string codigo, horario;
	cout << "------------------EDITAR HORARIO DEL CONTRATO------------------" << endl;
	cout << "Digite el codigo del contrato que desea editar: "; cin >> codigo;
	if (aeropuerto.buscaCodigoContrato(codigo)) {
		if (aeropuerto.esServicioProfesional(codigo)) {
			cout << "Digite el nuevo horario del contrato: "; cin >> horario;

			aeropuerto.cambiaHorario(codigo, horario);
			MensajesGenerales::msjEdicionExitosa();
		}
		else {
			MensajesGenerales::msjErrorContratoCategoria();
		}
	}
	else {
		MensajesGenerales::msjErrorCodigo();
	}
}

void InterfazContrato::cambiaTipoServicio(Aeropuerto& aeropuerto)
{
	string codigo, tipoServicio;
	cout << "------------------EDITAR TIPO DE SERVICIO------------------" << endl;
	cout << "Digite el codigo del contrato que desea editar: "; cin >> codigo;
	if (aeropuerto.buscaCodigoContrato(codigo)) {
		if (aeropuerto.esTiempoIndefinido(codigo)) {

			cout << "Digite el nuevo tipo de servicio del contrato por servicios profesionales: "; cin >> tipoServicio;
			aeropuerto.cambiaTipoServicio(codigo, tipoServicio);
			MensajesGenerales::msjEdicionExitosa();
		}
		else {
			MensajesGenerales::msjErrorContratoCategoria();
		}
	}
	else {
		MensajesGenerales::msjErrorCodigo();
	}
}

void InterfazContrato::cambiaPuestoPlaza(Aeropuerto& aeropuerto)
{
	string codigo, nombrePuesto;
	cout << "------------------EDITAR NOMBRE DEL PUESTO EN PLAZA ASIGNADA------------------" << endl;
	cout << "Digite el codigo del contrato que desea editar: "; cin >> codigo;
	if (aeropuerto.buscaCodigoContrato(codigo)) {
		if (aeropuerto.esTiempoIndefinido(codigo)) {

			cout << "Digite el nuevo nombre del puesto de la plaza asignada al contrato por tiempo indefinido: "; cin >> nombrePuesto;
			aeropuerto.cambiaTipoServicio(codigo, nombrePuesto);
			MensajesGenerales::msjEdicionExitosa();
		}
		else {
			MensajesGenerales::msjErrorContratoCategoria();
		}
	}
	else {
		MensajesGenerales::msjErrorCodigo();
	}
}
