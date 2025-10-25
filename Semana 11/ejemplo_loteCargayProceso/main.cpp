/*
    Un kiosquito comercializa 10 tipos de artículos, para cada uno de ellos se generó un registro con los
    siguientes datos:

    - Número de Artículo (1 a 10)
    - Precio Unitario

    Este lote se encuentra desordenado.
    Dispone de un segundo lote con la información de las ventas que se efectuaro, con la siguiente información:

    - Número de Artículo
    - Cantidad Vendida

    Puede haber más de un registro para el mismo artículo.
    El último registro se indica con número de artículo igual a cero.

    Resolver:
    a) El Monto Total Acumulado por cada Artículo.
*/


#include <iostream>
using namespace std;
#include "funciones.h"

int main()
{
    /// LOTE DE CARGA
    const int TAM = 10;
    int vNroArt[TAM];
    float vPrecio[TAM];

    for(int i = 0; i < TAM; i++)
    {
        cout << "Ingrese Nro. Art: ";
        cin >> vNroArt[i];
        cout << "Ingrese Precio $ ";
        cin >> vPrecio[i];
    }

    cout << endl;

    /// LOTE DE PROCESO
    int nroArticulo;
    int cantVendida;
    int indice;
    float importe;

    float vec[TAM]{};

    cout << "Ingrese Nro. Articulo: ";
    cin >> nroArticulo;

    while(nroArticulo != 0)
    {
        cout << "Ingrese Cant. Vendida: ";
        cin >> cantVendida;

        // Procesos
        indice = buscarIndice(vNroArt, TAM, nroArticulo);
        importe = vPrecio[indice] * cantVendida;

        vec[nroArticulo - 1] += importe;

        cout << "Ingrese Nro. Articulo: ";
        cin >> nroArticulo;
    }

    /// SALIDA INFORMACIÓN
    cout << endl;
    for(int i = 0; i < TAM; i++){
        cout << "Total Acumulado del Articulo " << i + 1 << " : $ " << vec[i] << endl;
    }


    return 0;
}
