#include <iostream>
using namespace std;

#include "funciones.h"

int main()
{
    setlocale(LC_ALL, "spanish");

    /// LOTE DE CARGA ///
    const int CANT_AERO = 15;
    Aerolinea vecLoteAerolineas[CANT_AERO];

    const int CANT_VUELOS = 100;
    Vuelo vecLotesVuelos[CANT_VUELOS];

    cargarAerolineas(vecLoteAerolineas, CANT_AERO);
    cargarVuelos(vecLotesVuelos, CANT_VUELOS);

    /// FIN DE LOTE DE CARGA ///

    /// LOTE DE PROCESO ///

    int codVuelo, cantidadPasajes, tipoCliente;

    /// PUNTO A
    int vecCantidadPasajesPorAero[CANT_AERO]{};

    cout << "Ingrese Código de vuelo: ";
    cin >> codVuelo;

    while(codVuelo != 0)
    {
        cout << "Ingrese la cantidad de pasajes: ";
        cin >> cantidadPasajes;
        cout << "Ingrese el tipo de cliente: ";
        cin >> tipoCliente;

        /// PROCESO
        int indiceVuelo = buscarIndiceVuelo(vecLotesVuelos, CANT_VUELOS);
        int codAerolinea = vecLotesVuelos[indiceVuelo].codAerolinea;

       int indiceAerolinea = buscarIndiceAerolineas(vecLoteAerolineas, codAerolinea);

        vecCantidadPasajesPorAero[indiceAerolinea] += cantidadPasajes;


        cout << "Ingrese Código de vuelo: ";
        cin >> codVuelo;
    }

    return 0;
}

int buscarIndice(int vec[], int tam, int n);
