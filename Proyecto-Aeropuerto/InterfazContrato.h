#pragma once
#include"Aeropuerto.h"
#include"ListaContratos.h"
#include"PlazoFijo.h"
#include"TiempoIndefinido.h"
#include"ServicioProfesional.h"
#include"MensajesGenerales.h"
#include"Plaza.h"

class InterfazContrato
{
public:
	static int menuContrato();
	//---------------------------------------------------------------------------
	static void ingresaServiciosProfesionales(Aeropuerto&);
	static void ingresaPlazoFijo(Aeropuerto&, Fecha&);
	static void ingresaTiempoIndefinido(Aeropuerto&);
};

