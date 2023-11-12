#pragma once
#include"Adminitrativo.h"
#include"Miscelaneo.h"
#include"Piloto.h"
#include"Copiloto.h"
#include"Azafata.h"
#include"MensajesGenerales.h"
#include"Aeropuerto.h"
// Nombre de estudiantes:
// Lesber Huerta Cornejo 
// Jarren Chaves Vizcaíno

class InterfazEmpleado
{
public:
	//-------------------------------GENERALES---------------------------------------------
	static void empNoEsPiloto();
	static void empNoEsCopiloto();
	static void empNoEsAzafata();
	static void empNoEsPlanta();
	static void empNoEsAdministrativo();
	static void empNoEsMiscelaneo();

	//-------------------------------INGRESOS---------------------------------------------
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
	//-------------------------------EDICION---------------------------------------------
	static int menuEdicionEmpleado();
	static void eliminaEmpleado(Aeropuerto&);
	static void cambiaAniosExperiencia(Aeropuerto&);
	static void cambiaTelefono(Aeropuerto&);
	static void cambiaNacionalidad(Aeropuerto&);
	static void cambiaLabor(Aeropuerto&);
	static void cambiaTituloU(Aeropuerto&);
	static void cambiaGradoEsc(Aeropuerto&);

};

