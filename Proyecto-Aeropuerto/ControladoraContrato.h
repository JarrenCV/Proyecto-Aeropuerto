#pragma once
#include"InterfazContrato.h"
#include"MensajesGenerales.h"

class ControladoraContrato {
public:

	// ingresos de Contratos
	int controlMenuIngresoContrato();
	void control0IngresosContr(Aeropuerto&,Fecha&);
	void control1IngresosProfesionales(Aeropuerto&);
	void control2IngresosPlazoFijo(Aeropuerto&,Fecha&);
	void control3IngresosPlazo(Aeropuerto&);
	// manteminientos contratos 

	int controlMenuMantContr();

	void control0MantContr(Aeropuerto&);
	void controlMantContrEditapuesto(Aeropuerto&);
	void controlMantEditSalarioDeContr(Aeropuerto&);
	void controlMantEditHorarioDeSerPr(Aeropuerto&);
	void controlMantEditTipoSerProfesional(Aeropuerto&);
	void controlMantEditNomPuestoPlazaContr(Aeropuerto&);
};