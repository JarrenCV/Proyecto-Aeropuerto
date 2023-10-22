#pragma once
#include"Contrato.h"
#include"Plaza.h"

class TiempoIndefinido : public Contrato {
private:
	Plaza* plaza;

public: 

	TiempoIndefinido();
	TiempoIndefinido(Plaza&, string, string , double, Fecha&, Fecha&);
	
	virtual ~TiempoIndefinido();

	void setPlaza(Plaza&);

	Plaza* getPlaza();

	string toString();
};