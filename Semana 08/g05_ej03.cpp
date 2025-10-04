#include<iostream>
using namespace std;
/*
Hacer una función llamada EsPrimo que determine si un número es primo o
no. La función debe recibir el número y devolver true si es primo o false si no lo
es. La función no debe mostrar nada por pantalla.

Hacer un programa para ingresar un número y, utilizando EsPrimo, emita luego
un cartel indicando si el número ingresado es primo o no es primo.
*/

// Prototipo
bool esPrimo(int nro);

int main()
{

    int nro;
    cout << "Ingrese un numero: ";
    cin >> nro;

    //bool resultado = esPrimo(nro);
    /*
        if(resultado == true)
        */
    if(esPrimo(nro))
    {
        cout << "Es primo" << endl;
    }
    else
    {
        cout << "No es primo";
    }

    return 0;
}

// Definición
bool esPrimo(int nro)
{
    int cd = 0;

    for(int i = 1; i <= nro; i++)
    {
        if(nro  % i == 0)
        {
            cd++;
        }
    }

    /*
    if(cd == 2)
    {
        return true;
    }
    else
    {
        return false;
    }

    */

    return cd == 2;
}
