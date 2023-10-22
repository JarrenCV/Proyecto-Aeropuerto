#include "ServicioProfesional.h"

ServicioProfecional::ServicioProfecional() : Contrato()
{
    horario = "Sin definir";
    tipoServicio = "Sin definir";

}

ServicioProfecional::ServicioProfecional(string h, string tS, string cContra, string dPuesto, double sal, Fecha& ingreso, Fecha& culmen):Contrato(cContra,dPuesto,sal,ingreso,culmen)
{
    horario = h;
    tipoServicio = tS;
}

ServicioProfecional::~ServicioProfecional()
{
}

void ServicioProfecional::setHorario(string h) 
{  
    horario = h;
}

void ServicioProfecional::setTipoServicio(string tS)
{
    tipoServicio = tS;
}

string ServicioProfecional::getHorario()
{
    return horario;
}

string ServicioProfecional::getTipoServicio()
{
    return tipoServicio;
}

string ServicioProfecional::toString()
{
    stringstream s;
    s << "CONTRATO DE SERVICIO PROFECIONAL" << endl
        << empContratado->toString() << endl
        << "Horario: " << horario << endl
        << "Tipo de servicio: " << tipoServicio << endl;

    return s.str();
}
