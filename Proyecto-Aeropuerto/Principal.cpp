#include"AvionComercial.h"
#include"AvionDeCarga.h"
#include"AviacionMilitar.h"
#include"ListaAviones.h"
// siuuuuuuuuuu
int main() {

	Fecha* aC1 = new Fecha(11, 3, 1998);
	Fecha* aC2 = new Fecha(12, 10, 1972);
	Fecha* aC3 = new Fecha(31, 1, 2022);

	Avion* avi1 = new AvionComercial(*aC1, 112.333, "22123-441", "Comercial", "A319");//(Fecha& fC, double dR, string nP, string tA, string cat)
	Avion* avi2 = new AviacionMilitar(*aC2, 1934.44, "M130", 342, "Militar 1");//(Fecha& fC, double dR, string cat, double vMax, string tAvionMili)
	Avion* avi3 = new AvionDeCarga(*aC3, 5123.242, "4431123-1234", "CARGA 1", "A320", 1.44, 0.75);//(Fecha& fC, double dR, string nP, string tA, string cat, double altP, double anchP)


	ListaAviones* lista1 = new ListaAviones();

	lista1->ingresaUltimo(*avi1);
	lista1->ingresaUltimo(*avi2);
	lista1->ingresaUltimo(*avi3);


	cout << lista1->toString();


	system("pause");
	return 0;
}