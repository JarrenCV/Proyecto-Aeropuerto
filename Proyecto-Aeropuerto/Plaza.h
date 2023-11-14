#pragma once
#include <iostream>
#include<sstream>
#include<fstream>
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
	string getCodPlaza();
	
	string getCodigoPlaza();
	string getNombrePuesto();
	bool getTomada();
	// ----------------------ARCHIVOS---------------------
	void save(ofstream&);
	void read(ifstream&);

	string toString();
};