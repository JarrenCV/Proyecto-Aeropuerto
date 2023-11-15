#pragma once
#include"Aeropuerto.h"
#include"MensajesGenerales.h"

class InterfazEnlace{
public:

	static int menuEnlace();
	static void enlacePilotoAvion(Aeropuerto&);
	static void enlaceCopilotoAvion(Aeropuerto&);
	static void enlaceAzafataAvion(Aeropuerto&);
	static void enlaceContratoEmpleado(Aeropuerto&);
	static void enlaceContratoPlaza(Aeropuerto&);
};

