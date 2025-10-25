/*
    Dada una lista de 10 números, cargarlos en un vector. Luego ingresar un
    número e informar el primer índice donde ese número aparece en el vector. En
    caso de no aparecer se mostrará el valor índice igual a -1.
*/

#include <iostream>
using namespace std;

#include "funciones.h"

int main()
{

    iniciarMenu();

    return 0;

    const int CANT = 10;
    int nros[CANT] = {};
    int nroBuscar;
    int indice;

    for(int i = 0; i < CANT; i++)
    {
        cout << "Ingrese un número: ";
        cin >> nros[i];
    }

    cout << "Ingrese un número para buscar: ";
    cin >> nroBuscar;

    indice = buscarIndice(nros, CANT, nroBuscar);

    cout << "El índice de " << nroBuscar << " es el " << indice << endl;

    return 0;
}
