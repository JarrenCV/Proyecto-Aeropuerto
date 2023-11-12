#pragma once
#include"NodoEmpleado.h"
// Nombre de estudiantes:
// Lesber Huerta Cornejo 
// Jarren Chaves Vizcaíno

class ListaEmpleados {
private:
	NodoEmpleado* ppio;

public:
	ListaEmpleados();
	virtual ~ListaEmpleados();

	void ingresaPrimero(Empleado&);
	void ingresaUltimo(Empleado&);
	string reportePilotos();
	bool buscaCedula(string ced);//Este metodo verifica que no haya una cedula repetida al ingresar en el contenedor
	bool buscaCedula(string ced);//Este metodo verifica que no haya una cedula repetida al ingresar en el contenedor
	Empleado* buscaEmpleado(string);

	bool esPiloto(string);
	bool esCopiloto(string);
	bool esAzafata(string);
	bool esPlanta(string);
	bool esAdministrativo(string);
	bool esMiscelaneo(string);

	bool eliminaEmpleado(string);
	void editaAniosExperiancia(string, int); // Piloto
	void editaTelefono(string, string); // Copiloto
	void editaNacionalidad(string, string); // Azafata
	void editaLabor(string, string); // Planta
	void editaTituloUniversitario(string, string); // Administrativo
	void editaGradoEscolaridad(string, string); // Miscelaneo
	
	string toString();
	string consultaTrabajador();
};

