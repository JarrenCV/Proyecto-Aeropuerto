#pragma once
#include <iostream>
#include<sstream>
using namespace std;


class Plaza {
private:
	string codigoPlaza;
	string nombrePuesto;
	bool tomada;
public:
	Plaza();
	Plaza(string, string, bool);

	virtual ~Plaza();

	void setCodigoPlaza(string);
	void setNombrePuesto(string);
	string getCodPlaza();
	
	string getCodigoPlaza();
	string getNombrePuesto();

	string toString();
};