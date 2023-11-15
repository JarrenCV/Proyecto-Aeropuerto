#pragma once
#include"InterfazEmpleado.h"
#include"MensajesGenerales.h"

class ControladoraEmpleado {
public:

	// ingresos de empleados
	//-----------------------------------------
	int controlMenuIngresoEmp();
	void control0IngresosEmp(Aeropuerto&);

	// ingresos para tripulaciones;
	int controlMenuIngresoTripulacion();
	void control0IngresoTripulacion(Aeropuerto&);
	void controlIngresoP(Aeropuerto&);
	void controlIngresoC(Aeropuerto&);
	void controlIngresoA(Aeropuerto&);

	// ingresos para planta
	int controlMenuIngresoPlanta();
	void control0IngresoPlanta(Aeropuerto&);
	void controlIngresoAdmin(Aeropuerto&);
	void controlIngresoMisc(Aeropuerto&);

	// mantenimiento de empleados 
	//----------------------------------------

	int controlMenuMantEmp();

	void control0MantEmp(Aeropuerto&);
	void controlMantEliminarEmp(Aeropuerto&);
	void controlMantEditAnniosExp(Aeropuerto&);
	void controlMantEditTellP(Aeropuerto&);
	void controlMantEditNacionalidadA(Aeropuerto&);
	void controlMantEditLaborPlanta(Aeropuerto&);
	void controlMantEditTitUniEmpAdmin(Aeropuerto&);
	void controlMantEditGradoEscolaridadMisc(Aeropuerto&);
};