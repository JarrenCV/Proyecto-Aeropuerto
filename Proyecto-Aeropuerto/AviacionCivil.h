#pragma once
#include"Avion.h"

class AviacionCivil : public Avion {
private:
	string numeroPlaca;
	string tipoAvion;
	//

public:
	AviacionCivil();
	AviacionCivil(Fecha&, double, string, string);
	virtual ~AviacionCivil();

	void setNumeroPlaca(string);
	void setTipoAvion(string);
	//

	string getNumeroPlaca();
	string getTipoAvion();
	//

	virtual string toString() = 0;
};

