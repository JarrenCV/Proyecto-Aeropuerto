#pragma once
#include"AviacionCivil.h"

class AvionComercial:public AviacionCivil{
private:
	//Queda sin atributos porque asi dijo el profe
public:
	AvionComercial();
	AvionComercial(Fecha&,double,string,string);
	virtual ~AvionComercial();

	string toString();
};

