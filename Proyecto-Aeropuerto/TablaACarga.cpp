#include "TablaACarga.h"

string TablaACarga::nombre(string categ)
{
    if (categ == "A319") return "Airbus 319";
    if (categ == "A320") return "Airbus 320";
    if (categ == "A321") return "Airbus 321";
    if (categ == "A330") return "Airbus 330";
    if (categ == "A340") return "Airbus 340";
    if (categ == "B737") return "Boeing 737";
    if (categ == "B777") return "Boeing 777";
}

double TablaACarga::carga(string categ)
{
    if (categ == "A319") return 27.7;
    if (categ == "A320") return 37.40;
    if (categ == "A321") return 51.70;
    if (categ == "A330") return 158.4;
    if (categ == "A340") return 207.6;
    if (categ == "B737") return 52.5;
    if (categ == "B777") return 653;
}

int TablaACarga::pasajeros(string categ)
{
    if (categ == "A319") return 156;
    if (categ == "A320") return 220;
    if (categ == "A321") return 220;
    if (categ == "A330") return 335;
    if (categ == "A340") return 419;
    if (categ == "B737") return 215;
    if (categ == "B777") return 550;
}

double TablaACarga::alcance(string categ)
{
    if (categ == "A319") return 7200;
    if (categ == "A320") return 1200;
    if (categ == "A321") return 5600;
    if (categ == "A330") return 13450;
    if (categ == "A340") return 14630;
    if (categ == "B737") return 9995;
    if (categ == "B777") return 17370;
}
