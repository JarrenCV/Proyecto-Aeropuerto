#pragma once
#include"InterfazAvion.h"
#include"MensajesGenerales.h"

class ControladoraAvion {
public:

	// ingresos de Aviones
	int controlMenuIngresoAvion();
	void control0IngresosAvion(Aeropuerto&);
	void control1IngresosMili(Aeropuerto&);

	// ingresos para Aviacion civil;
	int controlMenuIngresoCivil();
	void control0IngresoAvCivil(Aeropuerto&);
	void controlIngresoComercial(Aeropuerto&);
	void controlIngresoDeCarga(Aeropuerto&);

	// mantenimiento de aviones
	int controlMenuMantAvion();

	void control0MantAvion(Aeropuerto&);
	void controlManEliminaAvion(Aeropuerto&);
	void controlMantEditPlacaAvion(Aeropuerto&);
	void controlMantEditAnchuraPuertaAvion(Aeropuerto&);
	void controlMantEditAlturaPuertaAvion(Aeropuerto&);
	void controlMantEditDistanciaAvion(Aeropuerto&);

};
