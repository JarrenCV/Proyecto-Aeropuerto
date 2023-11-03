#pragma once
#include<iostream>
#include<sstream>
#include"ListaEmpleados.h"
#include"Adminitrativo.h"
#include"Miscelaneo.h"
using namespace std;

class InterfazEmpleado
{
public:

	//----------------------------------------------------------------------------

	static int menuEmpleado();




	//----------------------------------------------------------------------------

	static int menuEmpleadoTripulacion();







	//----------------------------------------------------------------------------
	static int menuEmpleadoPlanta();

	static void ingresaInfoAdministrativo(ListaEmpleados&);
	static void ingresaInfoMiscelaneo(ListaEmpleados&);
	//----------------------------------------------------------------------------

	static void msjErrorCedula();
	static void msjErrorRango();


};

