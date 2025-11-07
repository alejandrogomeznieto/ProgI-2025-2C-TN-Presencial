#include <iostream>
#include "funciones.h"

using namespace std;

void menuPrincipal()
{

    /// VARIABLES PARA EL MENÚ
    bool salir = false;
    int opcion;

    do
    {
        system("cls"); //Limpio la Pantalla de la Consola

        opcion = mostrarOpciones();
        analizarOpcion(opcion, salir);

        system("pause");
    }
    while(!salir);
}

int mostrarOpciones()
{
    int opc;

    cout << "|-----------------------------------|" << endl;
    cout << "|          Menú Principal           |" << endl;
    cout << "|-----------------------------------|" << endl;
    cout << "|    1. Cargar Aerolíneas           |" << endl;
    cout << "|    2. Cargar Vuelos y Destinos    |" << endl;
    cout << "|    3. Procesar Reservas           |" << endl;
    cout << "|    4. Mostrar Reportes            |" << endl;
    cout << "|    0. Salir del Programa          |" << endl;
    cout << "|-----------------------------------|" << endl;
    cout << "     Opción: ";
    cin >> opc;

    return opc;
}

void analizarOpcion(int opcion, bool& salir)
{
    switch(opcion)
    {
    case 1:
        cout << "OPCIÓN 1" << endl;
        break;
    case 2:
        cout << "OPCIÓN 2" << endl;
        break;
    case 3:
        cout << "OPCIÓN 3" << endl;
        break;
    case 4:
        menuReportes();
        break;
    case 0:
        cout << "Hasta la Vista, Baby!!!" << endl;
        salir = true;
        break;
    default:
        cout << "Opción ingresada No válida..." << endl;
    }
}

void menuReportes()
{
    bool volver = false;
    int opcion;

    do
    {
        system("cls"); //Limpio la Pantalla de la Consola

        opcion = mostrarOpcionesReportes();
        analizarOpcionReporte(opcion, volver);

        system("pause");
    }
    while(!volver);
}

int mostrarOpcionesReportes()
{
    int opc;

    cout << "|-------------------------------------------------------------------------------------------|" << endl;
    cout << "|                                  Menú Reportes                                            |" << endl;
    cout << "|-------------------------------------------------------------------------------------------|" << endl;
    cout << "|    1. Mostrar Cantidad de Vuelos que operan las 15 Aerolineas                             |" << endl;
    cout << "|    2. Mostrar el Monto Total Recaudado por las reservas de cada uno de los 20 destinos    |" << endl;
    cout << "|    0. Volver                                                                              |" << endl;
    cout << "|-------------------------------------------------------------------------------------------|" << endl;
    cout << "     Opción: ";
    cin >> opc;

    return opc;
}

void analizarOpcionReporte(int opcion, bool& volver){
    switch(opcion)
    {
    case 1:
        cout << "REPORTE 1" << endl;
        break;
    case 2:
        cout << "REPORTE 2" << endl;
        break;
    case 0:
        volver = true;
        break;
    default:
        cout << "Opción ingresada No válida..." << endl;
    }
}
