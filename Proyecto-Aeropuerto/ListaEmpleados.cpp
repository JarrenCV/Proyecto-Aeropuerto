#include "ListaEmpleados.h"

ListaEmpleados::ListaEmpleados()
{
    ppio = NULL;
}

ListaEmpleados::~ListaEmpleados()
{
    NodoEmpleado* PE;
    while (ppio != NULL) {
        PE = ppio;
        ppio = ppio->getSigNodo();
        delete PE;
    }
}

void ListaEmpleados::ingresaPrimero(Empleado& emp)
{
    ppio = new NodoEmpleado(emp, ppio);
}

void ListaEmpleados::ingresaUltimo(Empleado& emp)
{
    NodoEmpleado* PE = ppio;
    NodoEmpleado* nuevo;
    if (ppio == NULL) {
        ingresaPrimero(emp);
    }
    else {
        while (PE->getSigNodo() != NULL) {
            PE = PE->getSigNodo();
        }
        nuevo = new NodoEmpleado(emp, NULL);
        PE->setSigNodo(nuevo);
    }
}

string ListaEmpleados::reportePilotos()
{
    stringstream s;
    NodoEmpleado* PE = ppio;

    s << "--------------------LISTADO DE PILOTOS--------------------" << endl;
    while (PE != NULL) {
        s << PE->getEmpleado()->reportePilotos() << endl;
        PE = PE->getSigNodo();
    }
    s << "----------------------------------------------------------" << endl;

    return s.str();
}

bool ListaEmpleados::buscaCedula(string ced) 
{
    NodoEmpleado* PE = ppio;

    while (PE != NULL) {
        if (PE->getEmpleado()->getCedula() == ced) {
            return true;
        }
        PE = PE->getSigNodo();  
    }
    return false;
}

Empleado* ListaEmpleados::buscaEmpleado(string ced)
{
    NodoEmpleado* PE = ppio;

    while (PE != NULL) {
        if (PE->getEmpleado()->getCedula() == ced) {
            return PE->getEmpleado();
        }
        PE = PE->getSigNodo();
    }
    return NULL;
}

bool ListaEmpleados::esPiloto(string ced)
{
    return buscaEmpleado(ced)->getAniosExperiencia() != -1;
}

bool ListaEmpleados::esCopiloto(string ced)
{
    return buscaEmpleado(ced)->getTelefono() != "-1";
}

bool ListaEmpleados::esAzafata(string ced)
{
    return buscaEmpleado(ced)->getNacionalidad() != "-1";
}

bool ListaEmpleados::esPlanta(string ced)
{
    return buscaEmpleado(ced)->getLabor() != "-1";
}

bool ListaEmpleados::esAdministrativo(string ced)
{
    return buscaEmpleado(ced)->getTituloUniversitario() != "-1";
}

bool ListaEmpleados::esMiscelaneo(string ced)
{
    return buscaEmpleado(ced)->getGradoEscolaridad() != "-1";
}

bool ListaEmpleados::eliminaEmpleado(string ced)
{
    NodoEmpleado* PE = ppio;
    NodoEmpleado* elimina = NULL;

    if (PE->getEmpleado()->getCedula() == ced) {
        elimina = PE;
        ppio->setSigNodo(elimina->getSigNodo());
        delete elimina;
        return true;
    }
    while (PE->getSigNodo() != NULL) {
        if (PE->getSigNodo()->getEmpleado()->getCedula() == ced) {
            elimina = PE->getSigNodo();
            PE->setSigNodo(elimina->getSigNodo());
            delete elimina;
            return true;
        }
        PE = PE->getSigNodo();
    }
    return false;
}

void ListaEmpleados::editaAniosExperiancia(string ced, int anios)
{
    buscaEmpleado(ced)->setAniosExperiencia(anios);
}

void ListaEmpleados::editaTelefono(string ced, string telefono)
{
    buscaEmpleado(ced)->setTelefono(telefono);
}

void ListaEmpleados::editaNacionalidad(string ced, string nacionalidad)
{
    buscaEmpleado(ced)->setNacionalidad(nacionalidad);
}

void ListaEmpleados::editaLabor(string ced, string labor)
{
    buscaEmpleado(ced)->setLabor(labor);
}

void ListaEmpleados::editaTituloUniversitario(string ced, string titulo)
{
    buscaEmpleado(ced)->setTituloUniversitario(titulo);
}

void ListaEmpleados::editaGradoEscolaridad(string ced, string gradoEsc)
{
    buscaEmpleado(ced)->setGradoEscolaridad(gradoEsc);
}

string ListaEmpleados::toString()
{
    stringstream s;
    NodoEmpleado* PE = ppio;

    s << "--------------------LISTADO DE EMPLEADOS--------------------" << endl;
    while (PE != NULL) {
        s << PE->getEmpleado()->toString() << endl;
        PE = PE->getSigNodo();
    }
    s << "----------------------------------------------------------" << endl;

    return s.str();
}
