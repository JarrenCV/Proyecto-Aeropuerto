#include "TablaAComercial.h"

string TablaAComercial::nombre(string categ)
{
    if (categ == "310") return "Airbus A310";
    if (categ == "747") return "Boeing 747";
    if (categ == "767") return "Boeing 767";
    if (categ == "777") return "Boeing 777";
    if (categ == "130") return "Concorde";
    if (categ == "850") return "DC-8-50";
}

int TablaAComercial::pasajeros(string categ)
{
    if (categ == "310") return 250;
    if (categ == "747") return 470;
    if (categ == "767") return 250;
    if (categ == "777") return 375;
    if (categ == "130") return 130;
    if (categ == "850") return 145;
}

double TablaAComercial::rango(string categ)
{
    if (categ == "310") return 8300;
    if (categ == "747") return 6700;
    if (categ == "767") return 12300;
    if (categ == "777") return 7450;
    if (categ == "130") return 6400;
    if (categ == "850") return 14000;
}

double TablaAComercial::velocidad(string categ)
{
    if (categ == "310") return 895;
    if (categ == "747") return 980;
    if (categ == "767") return 885;
    if (categ == "777") return 980;
    if (categ == "130") return 2200;
    if (categ == "850") return 875;
}

double TablaAComercial::precio(string categ)
{
    if (categ == "310") return 120;
    if (categ == "747") return 200;
    if (categ == "767") return 120;
    if (categ == "777") return 180;
    if (categ == "130") return 350;
    if (categ == "850") return 80;
}
