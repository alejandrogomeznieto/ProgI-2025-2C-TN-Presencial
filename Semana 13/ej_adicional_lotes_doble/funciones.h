#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

using namespace std;
/**
    - Código de Aerolíneas (1 a 15)
    - Nombre de la Aerolínea

    - Código de Vuelo (1 a 100)
    - Código de Aerolínea (1 a 15)
    - Costo del Pasaje
    - Destino (1 a 20)
*/

/// Structs
struct Aerolinea
{
    int cod;
    string nombre;
};

struct Vuelo
{
    int cod;
    int codAerolinea;
    float costoPasaje;
    int destino;
};

/// Funciones
int buscarIndice(int[], int, int);

/// Funciones de Carga
bool cargarAerolineas(Aerolinea, int);
bool cargarVuelos(Vuelo, int);

#endif // FUNCIONES_H_INCLUDED
