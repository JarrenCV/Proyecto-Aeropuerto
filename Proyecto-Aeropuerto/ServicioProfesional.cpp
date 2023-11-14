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

int ServicioProfesional::getTipoContrato()
{
    return 1;
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

void ServicioProfesional::setPlaza(Plaza& s)
{
}

Plaza* ServicioProfesional::getPlaza()
{
    return NULL;
}

string ServicioProfesional::reportePlazoFijoMas2Anios()
{
    return "";
}

void ServicioProfesional::setElegible(bool s)
{
}

bool ServicioProfesional::getElegible()
{
    return false;
}

string ServicioProfesional::reporteServiciosProfecionales()
{
    stringstream s;

    if (empContratado != NULL) {
        s << "CONTRATO DE SERVICIO PROFESIONAL" << endl
            << "-----------------------------" << endl;
        s << "Codigo de contrato: " << codigoContrato << endl
            << "Descripcion de puesto: " << descripcionPuesto << endl
            << "Salario" << salario << endl
            << "Ingreso laboral: ";
        s << ingresoLaboral->toString() << endl;
        s << "Culminacion laboral" << endl;
        s << culminacionLaboral->toString() << endl;
        s << empContratado->toString() << endl
            << "Horario: " << horario << endl
            << "Tipo de servicio: " << tipoServicio << endl;
    }
    return s.str();
}

string ServicioProfesional::reportePlazoFijo()
{
    return "";
}

string ServicioProfesional::reporteTiempoIndefinido()
{
    return "";
}

void ServicioProfesional::save(ofstream& save)
{
    save << codigoContrato << "  " << descripcionPuesto << "  " << salario << "  " <<
        ingresoLaboral->getDia() << "  " << ingresoLaboral->getMes() << "  " << ingresoLaboral->getAnio() << "  " <<
        culminacionLaboral->getDia() << "  " << culminacionLaboral->getMes() << "  " << culminacionLaboral->getAnio() << "  " <<
        tipoContrato << "  " << horario << "  " << tipoServicio << endl;
    
   
}

void ServicioProfesional::read(ifstream& read)
{
    int diaI, mesI, anioI, diaC, mesC, anioC;
    Fecha* fechaI, *fechaC;
    read >> codigoContrato >> descripcionPuesto >> salario >> diaI >> mesI >> anioI
        >> diaC >> mesC >> anioC >> tipoContrato >> horario >> tipoServicio;

    fechaI = new Fecha(diaI, mesI, anioI);
    fechaC = new Fecha(diaC, mesC, anioC);
    ingresoLaboral = fechaI;
    culminacionLaboral = fechaC;
}

string ServicioProfesional::toString()
{
    stringstream s;
    if (empContratado != NULL) {
    s << "CONTRATO DE SERVICIO PROFESIONAL" << endl
        << "-----------------------------" << endl;
    s << "Codigo de contrato: " << codigoContrato << endl
        << "Descripcion de puesto: " << descripcionPuesto << endl
        << "Salario" << salario << endl
        << "Ingreso laboral: ";
    s << ingresoLaboral->toString() << endl;
    s << "Culminacion laboral" << endl;
    s << culminacionLaboral->toString() << endl;
        s << empContratado->toString() << endl
            << "Horario: " << horario << endl
            << "Tipo de servicio: " << tipoServicio << endl;
    }
    return s.str();
}
