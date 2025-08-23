/*
    Una concesionaria de autos paga a los vendedores un sueldo fijo de $5000 más
    $700 de premio por cada auto vendido. Hacer un programa que permita
    ingresar por teclado la cantidad de autos vendidos por un vendedor y luego
    informar por pantalla el sueldo total a pagar.
    Ejemplo. Si la cantidad de autos vendidos fuera 4 entonces el sueldo total a
    pagar es de $7800.
*/
// Ejercicio 3

#include <iostream>
using namespace std;

int main()
{
    const float SUELDO_BASICO = 5000;
    const float EXTRA = 700;
    int autosVendidos;
    float sueldo;

    cout << "Ingrese la cantidad de autos vendidos: ";
    cin >> autosVendidos;

    sueldo = SUELDO_BASICO + (autosVendidos * EXTRA);

    cout << "Sueldo a pagar: $" << sueldo << endl;

    return 0;
}
