#pragma once
#include"Avion.h"

class AviacionCivil : public Avion {
private:
	string numeroPlaca;
	//

public:
	AviacionCivil();
	AviacionCivil(Fecha&, double, string, string);
	virtual ~AviacionCivil();

	void setNumeroPlaca(string);
	//

	string getNumeroPlaca();
	//

	virtual string toString() = 0;
};

