#include "ServicioProfesional.h"

ServicioProfesional::ServicioProfesional() : Contrato()
{
    horario = "Sin definir";
    tipoServicio = "Sin definir";

}

ServicioProfesional::ServicioProfesional(string h, string tS, string cContra, string dPuesto, double sal, Fecha& ingreso, Fecha& culmen):Contrato(cContra,dPuesto,sal,ingreso,culmen)
{
    horario = h;
    tipoServicio = tS;
}

ServicioProfesional::~ServicioProfesional()
{
    if (ingresoLaboral != NULL) delete ingresoLaboral;
    if (culminacionLaboral != NULL) delete culminacionLaboral;
}

void ServicioProfesional::setHorario(string h)
{  
    horario = h;
}

void ServicioProfesional::setTipoServicio(string tS)
{
    tipoServicio = tS;
}

string ServicioProfesional::getHorario()
{
    return horario;
}

string ServicioProfesional::getTipoServicio()
{
    return tipoServicio;
}

string ServicioProfesional::toString()
{
    stringstream s;
    s << "CONTRATO DE SERVICIO PROFESIONAL" << endl
        << empContratado->toString() << endl
        << "Horario: " << horario << endl
        << "Tipo de servicio: " << tipoServicio << endl;

    return s.str();
}
