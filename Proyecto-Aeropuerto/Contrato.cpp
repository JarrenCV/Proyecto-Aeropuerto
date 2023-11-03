#include "Contrato.h"

Contrato::Contrato()
{
    codigoContrato = "0000";
    descripcionPuesto = "Sin definir";
    salario = 0.0;
    ingresoLaboral = NULL;
    culminacionLaboral = NULL;
    empContratado = NULL;
}

Contrato::Contrato(string cContra, string dPuesto, double sal, Fecha& ingreso, Fecha& culmen) : codigoContrato(cContra), descripcionPuesto(dPuesto),salario(sal) 
{
    ingresoLaboral = (Fecha*)&ingreso;
    culminacionLaboral = (Fecha*)&culmen;
    empContratado = NULL; // aún no se le asigna el empleado
}

Contrato::~Contrato()
{
    if (ingresoLaboral != NULL) delete ingresoLaboral;
    if (culminacionLaboral != NULL) delete culminacionLaboral;
    if (empContratado != NULL) delete empContratado;
}

void Contrato::setCodigoContrato(string codC)
{
    codigoContrato = codC;
}

void Contrato::setDescripcionPuesto(string dPuesto)
{
    descripcionPuesto = dPuesto;
}

void Contrato::setSalario(double sal)
{
    salario = sal;
}

void Contrato::setFechaIngreso(Fecha* fI)
{
    ingresoLaboral = fI;
}

void Contrato::setFechaCulminacion(Fecha* fC)
{
    culminacionLaboral = fC;
}

void Contrato::setEmpleadoContratado(Empleado* emp)
{
    empContratado = emp;
}

// -------------------------------------------------------------

string Contrato::getCodigoContrato()
{
    return codigoContrato;
}

string Contrato::getDescripcionPuesto()
{
    return descripcionPuesto;
}

double Contrato::getSalario()
{
    return salario;
}

Fecha* Contrato::getFechaIngreso()
{
    return ingresoLaboral;
}

Fecha* Contrato::getFechaCulminacion()
{
    return culminacionLaboral;
}

Empleado* Contrato::getEmpleadoContratado()
{
    return empContratado;
}