#pragma once
#include"Aeropuerto.h"

class InterfazArchivo{
public:

	static int menuArchivo();
	static void descargarArchivo(ifstream&, ifstream&, ifstream&, ifstream&, Aeropuerto&);
	static void cargarArchivos(ofstream&, ofstream&, ofstream&, ofstream&, Aeropuerto&);

};

