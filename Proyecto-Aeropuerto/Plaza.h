#pragma once
#include <iostream>
#include<sstream>
using namespace std;
// Nombre de estudiantes:
// Lesber Huerta Cornejo 
// Jarren Chaves Vizcaíno

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
	
	string getCodigoPlaza();
	string getNombrePuesto();

	string toString();
};