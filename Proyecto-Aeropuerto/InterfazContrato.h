#pragma once
#include"Aeropuerto.h"
#include"ListaContratos.h"
#include"PlazoFijo.h"
#include"TiempoIndefinido.h"
#include"ServicioProfesional.h"
#include"MensajesGenerales.h"
#include"Plaza.h"
// Nombre de estudiantes:
// Lesber Huerta Cornejo 
// Jarren Chaves Vizcaíno

class InterfazContrato
{
public:
	static int menuContrato();
	//---------------------------------------------------------------------------
	static void ingresaServiciosProfesionales(Aeropuerto&);
	static void ingresaPlazoFijo(Aeropuerto&, Fecha&);
	static void ingresaTiempoIndefinido(Aeropuerto&);
	//---------------------------------------------------------------------------
	static int menuEdicionContrato();
	static void cambiaDescripcionPuesto(Aeropuerto&);
	static void cambiaSalario(Aeropuerto&);
	static void cambiaHorario(Aeropuerto&);
	static void cambiaTipoServicio(Aeropuerto&);
	static void cambiaPuestoPlaza(Aeropuerto&);
};

