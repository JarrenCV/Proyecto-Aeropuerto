#include "Tripulacion.h"

Tripulacion::Tripulacion() : Empleado()
{
    avion = NULL;
}

Tripulacion::Tripulacion(string ced, string nom, int ed, Avion& avi):Empleado(ced,nom,ed)
{
    avion = (Avion*)&avi;
}

Tripulacion::~Tripulacion()
{
    if (avion != NULL) delete avion;
}

void Tripulacion::setAvion(Avion& avi)
{
    avion = (Avion*)&avi;
}

Avion* Tripulacion::getAvion()
{
    return avion;
}
