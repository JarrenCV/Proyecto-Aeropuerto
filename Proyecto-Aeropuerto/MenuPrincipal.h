#pragma once
#include<iostream>
#include<sstream>

using namespace std;

class MenuPrincipal
{
public:

	//----------------------------------------------------------------------------

	static int menuPrincipal();
	static int menuIngresos();
	static int menuMantenimiento();
	static int menuReportes();
	static int menuConsultas();

	static void msjErrorRango();
	static void msjIngresoExistoso();


};