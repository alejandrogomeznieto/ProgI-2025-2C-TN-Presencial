#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <iostream>
using namespace std;

/// Structs
struct Aerolinea{
    int codAerolinea;
    string nombre;

    //PUNTO A
    int cantVuelos = 0;
};

struct Vuelo{
    int codVuelo;
    int codAerolinea;
    float costoPasaje;
    int destino;
};

/// Menú Principal
void menuPrincipal();
int mostrarOpciones();
void analizarOpcion(int, bool&, Aerolinea [], int, Vuelo [], int, bool&, bool&, bool&, float[]);

/// Menú Reportes
void menuReportes(Aerolinea [], int, float []);
int mostrarOpcionesReportes();
void analizarOpcionReporte(int, bool&, Aerolinea[], int, float[]);

/// Funciones de Carga
bool cargarAerolineas(Aerolinea [], int);
bool cargarVuelos(Vuelo [], int);

/// Funciones Proceso
bool procesarReservas(Aerolinea [], int, Vuelo [], int, float []);
int buscarIndiceVuelo(Vuelo [], int, int);
void contarVuelo(Aerolinea [], int, int);

/// Funciones Reportes
void puntoA(Aerolinea [], int);
void puntoB(float []);

#endif // FUNCIONES_H_INCLUDED
