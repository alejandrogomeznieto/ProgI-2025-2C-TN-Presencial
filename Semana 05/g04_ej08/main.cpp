/*
    Hacer un programa para ingresar por teclado 5 grupos compuestos por números ordenados de menor a mayor. El final de cada grupo se detecta al ingresar un número menor a su anterior.

    Se debe obtener y emitir:
    a) Para cada uno de los grupos la cantidad de números pares que lo componen.
    Se informa 1 resultado por cada grupo.
    b) El menor número par de cada uno de los grupos. Se informa 1 resultado por cada grupo.
    c) El último número positivo de cada uno de los grupos y su ubicación dentro del grupo. Se informan 2 resultados por cada grupo.


*/

#include <iostream>
using namespace std;

int main()
{
    const int GRUPOS = 5;

    int nroAnterior;
    int nroActual;

    cout << "Ingrese un número: ";
    cin >> nroActual;

    for(int i = 0; i < GRUPOS; i++)
    {
        nroAnterior =  nroActual - 1;

        while(nroActual > nroAnterior)
        {

            // PROCESOS

            nroAnterior = nroActual;

            cout << "Ingrese un número: ";
            cin >> nroActual;
        }

        cout << "-------" << endl;
    }

    return 0;
}
