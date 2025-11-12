#include <iostream>
#include "funciones.h"

using namespace std;

// Función que busca índice de aerolinea
int buscarIndiceAerolineas(Aerolinea vecLoteAerolinea[], int tam, int n)
{
    for(int i = 0; i < tam; i++)
    {
        if(vecLoteAerolinea[i].cod == n)
        {
            return i;
        }
    }

    return -1;
}

// Función que busca índice de Vuelo
int buscarIndiceVuelo(Vuelo vecLoteVuelo[], int tam, int n)
{
    for(int i = 0; i < tam; i++)
    {
        if(vecLoteVuelo[i].cod == n)
        {
            return i;
        }
    }

    return -1;
}


bool cargarAerolineas(Aerolinea vecLoteAerolinea[], int tam)
{
    for(int i = 0; i < tam; i++)
    {
        cout << "Ingrese el código de la aerolínea: ";
        cin >> vecLoteAerolinea[i].cod;
        cout << "Ingrese el nombre de la aerolínea: ";
        cin.ignore();
        getline(cin, vecLoteAerolinea[i].nombre);
    }

    return true
    }

bool cargarVuelos(Vuelo vecLoteVuelo[], int tam)
{
    for(int i = 0; i < tam; i++)
    {
        cout << "Ingrese el código del vuelo: ";
        cin >> vecLoteVuelo[i].cod;
        cout << "Ingrese el código de aerolínea: ";
        cin >> vecLoteVuelo[i].codAerolinea;
        cout << "Ingrese el costo del pasaje $";
        cout >> vecLoteVuelo[i].costoPasaje;
        cout << "Ingrese el destino: ";
        cin >> vecLoteVuelo[i].destino;
    }

       return true
}

