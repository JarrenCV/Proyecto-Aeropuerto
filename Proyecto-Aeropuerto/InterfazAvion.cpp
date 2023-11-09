#include "InterfazAvion.h"
//----------------------------------------------------------------------------

int InterfazAvion::menuAvion()
{
	int opcion;
	system("cls");
	cout << "------------------MENU AVIONES------------------" << endl;
	cout << "Digite (1)				Ingresar Avion Civil" << endl;
	cout << "Digite (2)				Ingresar Avion militar" << endl;
	cout << "Digite (3)				Cancelar" << endl;
	cout << "--------------------------------------------------" << endl;
	cout << "Digite la opcion: "; cin >> opcion;
	return opcion;
}



//----------------------------------------------------------------------------

int InterfazAvion::menuAvionCivil()
{
	int opcion;
	system("cls");
	cout << "------------------MENU AVIACION CIVIL------------------" << endl;
	cout << "Digite (1)				Ingresar Avion Comercial" << endl;
	cout << "Digite (2)				Ingresar Avion De Carga" << endl;
	cout << "Digite (3)				Cancelar" << endl;
	cout << "----------------------------------------------------" << endl;
	cout << "Digite la opcion: "; cin >> opcion;
	return opcion;
}

void InterfazAvion::ingresaInfoAvionComercial(Aeropuerto& aeropuerto)
{
	int dia, mes, anio;
	double distanciaRecorrida;
	string numeroPlaca, categoria;
	cout << "----------------------AVION COMERCIAL----------------------" << endl;

	cout << "Digite el numero de placa del avion: "; cin >> numeroPlaca;
	//if()// Este if deberia ver si ya existe la placa digitada, pero hacer la comprobacion es imposible
		// ya que en la lista solo hay objetos Avion, los cuales no tienen getPlaca, por lo tanto
		// no tenemos acceso a la info de esa parte de la lista
		// La unica solucion posible es pasar el numero de placa a la clase PADRE...

	cout << "Digite la fecha de creacion del Avion: " << endl;
	cout << "Dia: "; cin >> dia;
	cout << "Mes: "; cin >> mes;
	cout << "Anio: "; cin >> anio;


	cout << "Digite la distancia recorrida del Avion: "; cin >> distanciaRecorrida;
	cout << "Digite la categoria del Avion: "; cin >> categoria;

	// (Fecha& fC, double dR, string nP, string cat)
	Fecha* creacion = new Fecha(dia, mes, anio);
	Avion* avionComercial = new AvionComercial(*creacion, distanciaRecorrida, categoria, numeroPlaca);
	aeropuerto.ingresaAvion(*avionComercial);
	MensajesGenerales::IngresoExitoso();
	
}
void InterfazAvion::ingresaInfoAvionDeCarga(Aeropuerto& aeropuerto)
{
	int dia, mes, anio;
	double distanciaRecorrida, alturaPuerta, anchoPuerta;
	string numeroPlaca, categoria;
	cout << "----------------------AVION DE CARGA----------------------" << endl;

	cout << "Digite el numero de placa del avion: "; cin >> numeroPlaca;
	//if()// Este if deberia ver si ya existe la placa digitada, pero hacer la comprobacion es imposible
		// ya que en la lista solo hay objetos Avion, los cuales no tienen getPlaca, por lo tanto
		// no tenemos acceso a la info de esa parte de la lista
		// La unica solucion posible es pasar el numero de placa a la clase PADRE...

	cout << "Digite la fecha de creacion del Avion: " << endl;
	cout << "Dia: "; cin >> dia;
	cout << "Mes: "; cin >> mes;
	cout << "Anio: "; cin >> anio;
	cout << "Digite la distancia recorrida del Avion: "; cin >> distanciaRecorrida;

	cout << "Digite la categoria del Avion: "; cin >> categoria;
	cout << "Digite la altura de la puerta del avion: "; cin >> alturaPuerta;
	cout << "Digite la anchura de la puerta del avion: "; cin >> anchoPuerta;

	// (Fecha& fC, double dR, string cat, string nP, double altP, double anchP)
	Fecha* creacion = new Fecha(dia, mes, anio);
	Avion* avionDeCarga = new AvionDeCarga(*creacion, distanciaRecorrida, categoria, numeroPlaca, alturaPuerta, anchoPuerta);
	aeropuerto.ingresaAvion(*avionDeCarga);
	MensajesGenerales::IngresoExitoso();
}

//----------------------------------------------------------------------------

void InterfazAvion::ingresaInfoAvionMilitar(Aeropuerto& aeropuerto)
{

	int dia, mes, anio;
	double distanciaRecorrida, velocidadMaxima;
	string categoria;
	cout << "----------------------AVION MILITAR----------------------" << endl;
	cout << "Digite la fecha de creacion del Avion: " << endl;
	cout << "Dia: "; cin >> dia;
	cout << "Mes: "; cin >> mes;
	cout << "Anio: "; cin >> anio;

	cout << "Digite la distancia recorrida del Avion: "; cin >> distanciaRecorrida;
	cout << "Digite la categoria del Avion: "; cin >> categoria;


	cout << "Digite la velocidad maxima del Avion: "; cin >> velocidadMaxima;

	// (Fecha& fC, double dR, string cat, double vMax)
	Fecha* creacion = new Fecha(dia, mes, anio);
	Avion* avionMilitar = new AviacionMilitar(*creacion, distanciaRecorrida, categoria, velocidadMaxima);
	aeropuerto.ingresaAvion(*avionMilitar);
	MensajesGenerales::IngresoExitoso();
}


//----------------------------------------------------------------------------