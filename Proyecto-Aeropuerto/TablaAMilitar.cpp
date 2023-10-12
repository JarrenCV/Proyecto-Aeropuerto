#include "TablaAMilitar.h"

string TablaAMilitar::nombre(string categ)
{
    if (categ == "M300") return "Airbus 300-600";
    if (categ == "M130") return "Antonov";
}

double TablaAMilitar::carga(string categ)
{
    if (categ == "M300") return 1400;
    if (categ == "M130") return 1300;
}

double TablaAMilitar::alcance(string categ)
{
    if (categ == "M300") return 4630;
    if (categ == "M130") return 4000;
}

int TablaAMilitar::pasajeros()
{
    return 0;
}

bool TablaAMilitar::militar()
{
    return true;
}