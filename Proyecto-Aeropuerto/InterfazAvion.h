#pragma once
//#include"ListaAviones.h"
#include"AvionDeCarga.h"
#include"AviacionMilitar.h"
#include"AvionComercial.h"
#include"MensajesGenerales.h"
#include"Aeropuerto.h"

class InterfazAvion{
public:

	//----------------------------------------------------------------------------

	static int menuAvion();


	//----------------------------------------------------------------------------

	static int menuAvionCivil();

	static void ingresaInfoAvionComercial(Aeropuerto&);
	static void ingresaInfoAvionDeCarga(Aeropuerto&);

	//----------------------------------------------------------------------------

	static void ingresaInfoAvionMilitar(Aeropuerto&);
	

	//----------------------------------------------------------------------------
};

