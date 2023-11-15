#pragma once
#include"MenuPrincipal.h"
#include"ControladoraAvion.h"
#include"ControladoraContrato.h"
#include"ControladoraEmpleados.h"

class ControladoraMantenimiento {
private:
	ControladoraEmpleado contrEmple;
	ControladoraContrato contrContrat;
	ControladoraAvion contrAvion;

public:
	ControladoraMantenimiento();

	int controlMenuMantenimiento();
	void control0(Aeropuerto&);
	void control1(Aeropuerto&);
	void control2(Aeropuerto&);
	void control3(Aeropuerto&);

};