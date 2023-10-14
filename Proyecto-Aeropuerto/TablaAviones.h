#pragma once
#include<iostream>
#include<sstream>
using namespace std;

class TablaAviones{
public:
	static string nombre(string);
	static int pasajeros(string);
	static double carga(string);
	static double rango(string);
	static double velocidad(string);
	static double precio(string);
};

