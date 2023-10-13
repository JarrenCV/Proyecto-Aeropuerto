#pragma once
#include"AviacionCivil.h"

class AvionComercial:public AviacionCivil{
private:
	//Preguntar esto.
	string categoria;
public:
	AvionComercial();
	AvionComercial(Fecha&,double,string,string,string);
	virtual ~AvionComercial();


	void setCategoria(string);
	
	string getCategoria();

	string toString();
};

