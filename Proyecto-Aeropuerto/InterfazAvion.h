#pragma once
#include"ListaAviones.h"
#include"AvionDeCarga.h"
#include"AviacionMilitar.h"
#include"AvionComercial.h"
#include"MensajesGenerales.h"
class InterfazAvion{
public:

	//----------------------------------------------------------------------------

	static int menuAvion();


	//----------------------------------------------------------------------------

	static int menuAvionCivil();

	static void ingresaInfoAvionComercial(ListaAviones&);
	static void ingresaInfoAvionDeCarga(ListaAviones&);

	//----------------------------------------------------------------------------

	static void ingresaInfoAvionMilitar(ListaAviones&);
	

	//----------------------------------------------------------------------------
};

