#pragma once
#include"Adminitrativo.h"
#include"Miscelaneo.h"
#include"Piloto.h"
#include"Copiloto.h"
#include"Azafata.h"
#include"MensajesGenerales.h"
#include"Aeropuerto.h"

class InterfazEmpleado
{
public:

	//----------------------------------------------------------------------------

	static int menuEmpleado();

	//----------------------------------------------------------------------------

	static int menuEmpleadoTripulacion();

	static void ingresaInfoPiloto(Aeropuerto&);
	static void ingresaInfoCopiloto(Aeropuerto&);
	static void ingresaInfoAzafata(Aeropuerto&);



	//----------------------------------------------------------------------------
	static int menuEmpleadoPlanta();

	static void ingresaInfoAdministrativo(Aeropuerto&);
	static void ingresaInfoMiscelaneo(Aeropuerto&);
	
	//----------------------------------------------------------------------------
};

