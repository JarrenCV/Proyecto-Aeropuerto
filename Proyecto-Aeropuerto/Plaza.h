#pragma once
#include <iostream>
#include<sstream>
using namespace std;


class Plaza {
private:
	string codigoPlaza;
	string nombrePuesto;
public:
	Plaza();
	Plaza(string, string);

	virtual ~Plaza();

	void setCodigoPlaza(string);
	void setNombrePuesto(string);
	
	string getCodigoPlaza();
	string getNombrePuesto();
};