#pragma once
#include"MenuPrincipal.h"
#include"ControladoraAvion.h"
#include"ControladoraContrato.h"
#include"ControladoraEmpleados.h"

class ControladoraIngresos {
private:
	ControladoraEmpleado controlEmple;
	ControladoraContrato contContrat;
	ControladoraAvion contAvion;

public:
	ControladoraIngresos();

	int controlMenuIngresos();
	void control0(Aeropuerto&, Fecha&);
	void control1(Aeropuerto&);
	void control2(Aeropuerto&);
	void control3(Aeropuerto&, Fecha&);

};