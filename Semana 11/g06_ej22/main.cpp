/*
    Una empresa comercializa 10 tipos de artículos y por cada venta realizada
    genera un registro con los siguientes datos:

    - Número de Artículo (1 a 10)
    - Cantidad Vendida

    Puede haber varios registros para el mismo artículo y el último registro se indica cuando se ingresa
    un número de artículo igual a 0.

    Se pide determinar e informar:
    a) El número de artículo que más se vendió en total.
    b) Los números de artículos que no registraron ventas.
    c) Cuántas unidades se vendieron del número de artículo 10.
*/


#include <iostream>
using namespace std;

int main()
{
    int nroArticulo, cantVendida;

    const int TAM = 10;
    int vec[TAM]{};

    cout << "Ingrese Nro. Articulo: ";
    cin >> nroArticulo;

    while(nroArticulo != 0){
        cout << "Ingrese Cant. Vendida: ";
        cin >> cantVendida;

        // Procesos
        int indice = nroArticulo - 1;
        vec[indice]+= cantVendida;


        cout << "Ingrese Nro. Articulo: ";
        cin >> nroArticulo;
    }

    /// PUNTO A
    int mayorArt;
    int mayorCantV;

    for(int i = 0; i < TAM; i++){
        if(i == 0 || vec[i] > mayorCantV){
            mayorArt = i + 1;
            mayorCantV = vec[i];
        }
    }

    cout << "El Articulo que mas se vendio fue: " << mayorArt << endl;

    return 0;
}
