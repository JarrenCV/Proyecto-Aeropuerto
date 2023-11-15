#pragma once
#pragma once
#include"MenuPrincipal.h"
#include"MensajesGenerales.h"
#include"InterfazArchivo.h"
#include<fstream>

class ControladoraArchivo {

public:

	int controlMenuArchivo();
	void control0(Aeropuerto&, ifstream&, ifstream&, ifstream&, ifstream&, ofstream&, ofstream&, ofstream&, ofstream&);
	void control1(Aeropuerto&, ifstream&, ifstream&, ifstream&, ifstream&);
	void control2(Aeropuerto&, ofstream&, ofstream&, ofstream&, ofstream&);

};