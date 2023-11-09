#include "Fecha.h"

Fecha::Fecha()
{
    dia = 0;
    mes = 0;
    anio = 0;
}

Fecha::Fecha(int d, int m, int a)
{
    dia = d;
    mes = m;
    anio = a;
}

Fecha::~Fecha()
{
}

void Fecha::setDia(int d)
{
    dia = d;
}

void Fecha::setMes(int m)
{
    mes = m;
}

void Fecha::setAnio(int a)
{
    anio = a;
}

int Fecha::getDia()
{
    return dia;
}

int Fecha::getMes()
{
    return mes;
}

int Fecha::getAnio()
{
    return anio;
}

bool Fecha::esMenorQue(Fecha& fecha2) {
    
    if (anio < fecha2.getAnio()) {
        return true;
    }
    else {
        if (anio == fecha2.getAnio() && mes < fecha2.getMes()) {
            return true;
        }
        else {
            if (anio == fecha2.getAnio() && mes == fecha2.getMes() && dia < fecha2.getDia()) {
                return true;
            }
            else {
                if (anio == fecha2.getAnio() && mes == fecha2.getMes() && dia == fecha2.getDia()) {
                    return true;
                }
                else {
                    return false;
                }
            }
        }
    }
    return false;
}

int Fecha::diferenciaAnios(Fecha& actual, Fecha& culminacion)
{
    if(actual.esMenorQue(culminacion)){
        int diferencia = actual.getAnio() - anio;
        if (diferencia > 2) {
            return diferencia;
        }
        else {
            if ((diferencia == 2 && mes > actual.getMes()) || (diferencia == 2 && mes == actual.getMes() && dia >= actual.getDia()))
                return diferencia;
        }
    }
    return -1;
}


string Fecha::toString()
{
    stringstream s;
    s << dia << "/" << mes << "/" << anio;
    return s.str();
}
