/*
Dada una lista de números que finaliza cuando se ingresa un cero, informar cuál
es el primer y último número impar ingresado.
Ejemplo 8, 4, -5, 6, 9, 5, 18, 0 se informa -5 y 5.
*/

#include <iostream>
using namespace std;

int main()
{

    int nro;
    int primerImpar;
    int ultimoImpar;
    int contImpar = 0;

    /// INGRESAMOS DATOS
    cout << "Ingrese un numero: ";
    cin >> nro;

    while(nro != 0)
    {

        /// PROCESOS
        if(nro % 2 != 0)// IMPARES
        {
            contImpar++;

            if(contImpar == 1) // GUARDAMOS EL PRIMER IMPAR
            {
                primerImpar = nro;
            }

            ultimoImpar = nro;
        }

        /// INGRESO DATOS
        cout << "Ingrese un numero: ";
        cin >> nro;
    }

    cout << "El primer impar fue " << primerImpar << endl;

    if(contImpar > 1)
        cout << "El ultimo impar fue " << ultimoImpar<< endl;

    return 0;
}
