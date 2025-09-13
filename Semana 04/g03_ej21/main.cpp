/*
Se define a un número como primo cuando tiene solamente dos divisores.
Ejemplo A: 2, 7, 11, 13 son números primos, ya que todos tienen solamente dos
divisores.

Ejemplo B: 6 no es primo, pues tiene 4 divisores (1, 2, 3 y 6)
Ejemplo C: 9 no es primo, pues tiene 3 divisores (1, 3 y 9)

Hacer un programa para ingresar un número y luego informar con un cartel
aclaratorio si el mismo es un número primo o es número no primo.
*/

#include <iostream>
using namespace std;

int main()
{
    int nro;
    int contMultiplos = 0;

    /// DATO
    cout  << "Ingrese un numero: ";
    cin >> nro;

    // Contamos múltiplos
    for(int i = 1; i <= nro; i++)
    {
        if(nro % i == 0)
        {
            contMultiplos++;
        }

    }

    // Determinamos si es primo
    if(contMultiplos == 2)
    {
        cout << "El numero " << nro << " es primo" << endl;
    }
    else
    {
        cout << "El numero " << nro << " no es primo" << endl;
    }

    return 0;
}
