#include "TablaAviones.h"

string TablaAviones::nombre(string categ)
{   //Comercial
    if (categ == "310") return "Airbus A310";
    if (categ == "747") return "Boeing 747";
    if (categ == "767") return "Boeing 767";
    if (categ == "777") return "Boeing 777";
    if (categ == "130") return "Concorde";
    if (categ == "850") return "DC-8-50";
    //De carga
    if (categ == "A319") return "Airbus 319";
    if (categ == "A320") return "Airbus 320";
    if (categ == "A321") return "Airbus 321";
    if (categ == "A330") return "Airbus 330";
    if (categ == "A340") return "Airbus 340";
    if (categ == "B737") return "Boeing 737";
    if (categ == "B777") return "Boeing 777";
    //Militar
    if (categ == "M300") return "Airbus 300-600";
    if (categ == "M130") return "Antonov";
}

double TablaAviones::carga(string categ) {
   //De carga
    if (categ == "A319") return 27.7;
    if (categ == "A320") return 37.40;
    if (categ == "A321") return 51.70;
    if (categ == "A330") return 158.4;
    if (categ == "A340") return 207.6;
    if (categ == "B737") return 52.5;
    if (categ == "B777") return 653;
    //Militar
    if (categ == "M300") return 1400;
    if (categ == "M130") return 1300;
}

int TablaAviones::pasajeros(string categ)
{   //Comercial
    if (categ == "310") return 250;
    if (categ == "747") return 470;
    if (categ == "767") return 250;
    if (categ == "777") return 375;
    if (categ == "130") return 130;
    if (categ == "850") return 145;
    //De carga
    if (categ == "A319") return 156;
    if (categ == "A320") return 220;
    if (categ == "A321") return 220;
    if (categ == "A330") return 335;
    if (categ == "A340") return 419;
    if (categ == "B737") return 215;
    if (categ == "B777") return 550;
    //Militar
    if (categ == "M300") return 0;
    if (categ == "M130") return 0;
}

double TablaAviones::rango(string categ)
{   //Comercial
    if (categ == "310") return 8300;
    if (categ == "747") return 6700;
    if (categ == "767") return 12300;
    if (categ == "777") return 7450;
    if (categ == "130") return 6400;
    if (categ == "850") return 14000;
    //De carga
    if (categ == "A319") return 7200;
    if (categ == "A320") return 1200;
    if (categ == "A321") return 5600;
    if (categ == "A330") return 13450;
    if (categ == "A340") return 14630;
    if (categ == "B737") return 9995;
    if (categ == "B777") return 17370;
    //Militar
    if (categ == "M300") return 4630;
    if (categ == "M130") return 4000;
}

double TablaAviones::velocidad(string categ)
{
    //Comercial
    if (categ == "310") return 895;
    if (categ == "747") return 980;
    if (categ == "767") return 885;
    if (categ == "777") return 980;
    if (categ == "130") return 2200;
    if (categ == "850") return 875;
}

double TablaAviones::precio(string categ)
{
    //Comercial
    if (categ == "310") return 120;
    if (categ == "747") return 200;
    if (categ == "767") return 120;
    if (categ == "777") return 180;
    if (categ == "130") return 350;
    if (categ == "850") return 80;
}
