#include <iostream>
#include "funciones.h"

using namespace std;

void menuPrincipal()
{

    /// VARIABLES PARA EL MENÚ
    bool salir = false;
    int opcion;

    /// VECTORES STRUCT
    const int CANT_AEROLINEA = 2;
    Aerolinea vAerolineas[CANT_AEROLINEA];
    const int CANT_VUELOS = 3;
    Vuelo vVuelos[CANT_VUELOS];

    /// VALIDADORES
    bool seCargaronAerolineas = false;
    bool seCargaronVuelos = false;
    bool seProceso = false;

    // PuntoB
    float vecRecDestinos[20]{};

    do
    {
        system("cls"); //Limpio la Pantalla de la Consola

        opcion = mostrarOpciones();
        analizarOpcion(opcion, salir, vAerolineas, CANT_AEROLINEA, vVuelos, CANT_VUELOS, seCargaronAerolineas, seCargaronVuelos, seProceso, vecRecDestinos);

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

void analizarOpcion(int opcion, bool& salir, Aerolinea vecAero[], int tam1, Vuelo vecVuelo[], int tam2, bool &lote1, bool &lote2, bool &lote3, float vecDestinos[20])
{
    system("cls");
    switch(opcion)
    {
    case 1:
        lote1 = cargarAerolineas(vecAero, tam1);
        break;
    case 2:
        if(lote1){
            lote2 = cargarVuelos(vecVuelo, tam2);
        }
        else{
            cout << "Todavía no se cargaron las Aerolíneas!" << endl;
        }
        break;
    case 3:
        if(lote1 && lote2){
            lote3 = procesarReservas(vecAero, tam1, vecVuelo, tam2, vecDestinos);
        }
        else{
            cout << "Todavía no se cargaron los Lotes de Carga!" << endl;
        }
        break;
    case 4:
        if(lote3){
            menuReportes(vecAero, tam1, vecDestinos);
        }
        else{
            cout << "Todavía no se cargaron las Ventas!" << endl;
        }
        break;
    case 0:
        cout << "Hasta la Vista, Baby!!!" << endl;
        salir = true;
        break;
    default:
        cout << "Opción ingresada No válida..." << endl;
    }
}

void menuReportes(Aerolinea vAero[], int tam1, float vecDestinos[20])
{
    bool volver = false;
    int opcion;

    do
    {
        system("cls"); //Limpio la Pantalla de la Consola

        opcion = mostrarOpcionesReportes();
        analizarOpcionReporte(opcion, volver, vAero, tam1, vecDestinos);

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

void analizarOpcionReporte(int opcion, bool& volver, Aerolinea vAero[], int tam1, float vecDestinos[20]){
    switch(opcion)
    {
    case 1:
        puntoA(vAero, tam1);
        break;
    case 2:
        puntoB(vecDestinos);
        break;
    case 0:
        volver = true;
        break;
    default:
        cout << "Opción ingresada No válida..." << endl;
    }
}

bool cargarAerolineas(Aerolinea vecAerolineas[], int tam){
    cout << " - INICIO CARGA DE AEROLÍNEAS -" << endl;
    for(int i = 0; i < tam; i++){
        cout << "Ingrese Código de Aerolínea (1 a 15): ";
        cin >> vecAerolineas[i].codAerolinea;
        cout << "Ingrese Nombre: ";
        cin.ignore();
        getline(cin, vecAerolineas[i].nombre);

        cout << "------------------------------" << endl;
    }
    cout << " - FIN CARGA DE AEROLÍNEAS -" << endl;

    return true;
}

bool cargarVuelos(Vuelo vecVuelos[], int tam){
    cout << " - INICIO CARGA DE VUELOS -" << endl;
    for(int i = 0; i < tam; i++){
        cout << "Ingrese Código de Vuelo (1 a 100): ";
        cin >> vecVuelos[i].codVuelo;
        cout << "Ingrese Código de Aerolínea (1 a 15): ";
        cin >> vecVuelos[i].codAerolinea;
        cout << "Costo del Pasaje: $ ";
        cin >> vecVuelos[i].costoPasaje;
        cout << "Destino (1 a 20): ";
        cin >> vecVuelos[i].destino;

        cout << "------------------------------" << endl;
    }
    cout << " - FIN CARGA DE VUELOS -" << endl;

    return true;
}

bool procesarReservas(Aerolinea vAero[], int tam1, Vuelo vVuelo[], int tam2, float vecDestinos[20]){
    /// Variables Lote de Proceso
    int codVuelo, cantPasajes, tipoCliente, dia;

    // Punto A
    int indiceVuelo;

    // Punto B
    int indiceDestino;

    cout << " - RESERVAS DE VIAJES -" << endl << endl;
    cout << "Código de Vuelo: ";
    cin >> codVuelo;

    while(codVuelo != 0){
        cout << "Cantidad de Pasajes: ";
        cin >> cantPasajes;
        cout << "Tipo Cliente (1 - Regular | 2 - VIP): ";
        cin >> tipoCliente;
        cout << "Día de la Reserva: ";
        cin >> dia;

        // Punto A
        indiceVuelo = buscarIndiceVuelo(vVuelo, tam2, codVuelo);
        contarVuelo(vAero, tam1, vVuelo[indiceVuelo].codAerolinea);

        // Punto B
        indiceDestino = vVuelo[indiceVuelo].destino;
        vecDestinos[indiceDestino - 1] += cantPasajes * vVuelo[indiceVuelo].costoPasaje;

        cout << "---------------------------" << endl;
        cout << "Código de Vuelo: ";
        cin >> codVuelo;
    }

    cout << " - FIN RESERVAS -" << endl;

    return true;
}

int buscarIndiceVuelo(Vuelo vVuelo[], int tam, int codigo){
    for(int i=0; i < tam; i ++){
        if(codigo == vVuelo[i].codVuelo){
            return i;
        }
    }

    return -1;
}

void contarVuelo(Aerolinea vAero[], int tam, int codigo){
    for(int i=0; i < tam; i ++){
        if(codigo == vAero[i].codAerolinea){
            vAero[i].cantVuelos++;
            //cout << vAero[i].cantVuelos << endl;
        }
    }
}

void puntoA(Aerolinea vAero[], int tam){
    cout << "  - PUNTO A -" << endl;
    for(int i=0; i < tam; i ++){
        cout << "Código de Aerolínea: " << vAero[i].codAerolinea << ", Aerolinea: " << vAero[i].nombre << ", Cant. Vuelos: " << vAero[i].cantVuelos << endl;
    }
}

void puntoB(float vecDestinos[20]){
    cout << "  - PUNTO B -" << endl;
    for(int i=0; i < 20; i ++){
        cout << "Destino: " << i + 1 << ", Recaudación: $ " << vecDestinos[i] << endl;
    }
}
