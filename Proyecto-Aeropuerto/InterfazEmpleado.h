#pragma once
#include"ListaEmpleados.h"
#include"Adminitrativo.h"
#include"Miscelaneo.h"
#include"Piloto.h"
#include"Copiloto.h"
#include"Azafata.h"
#include"MensajesGenerales.h"


class InterfazEmpleado
{
public:

	//----------------------------------------------------------------------------

	static int menuEmpleado();

	//----------------------------------------------------------------------------

	static int menuEmpleadoTripulacion();

	static void ingresaInfoPiloto(ListaEmpleados&);
	static void ingresaInfoCopiloto(ListaEmpleados&);
	static void ingresaInfoAzafata(ListaEmpleados&);



	//----------------------------------------------------------------------------
	static int menuEmpleadoPlanta();

	static void ingresaInfoAdministrativo(ListaEmpleados&);
	static void ingresaInfoMiscelaneo(ListaEmpleados&);
	
	//----------------------------------------------------------------------------
};

