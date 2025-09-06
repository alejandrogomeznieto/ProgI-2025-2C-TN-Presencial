/*
    Hacer un programa para ingresar un N valor que indica la cantidad de números que   componen una lista y luego solicitar se ingresen esos N números. Se pide informar cuantos son positivos

    Ejemplo A: Se ingresa como N el valor 5, y luego se ingresa: 10, -3, 2, 5, 4. Se
    listará: Cantidad de Positivos: 4

    Ejemplo B: Se ingresa como N el valor 6, y luego se ingresa: -10, -3, -2, 0, -5, -4.
    Se listará: Cantidad de Positivos: 0
*/

#include <iostream>
using namespace std;

int main()
{
    int nroVueltas;
    int nro;
    int conPos;
    cout << "Ingrese la cantidad de numeros a ingresar: ";
    cin >> nroVueltas;

    conPos = 0;

    for(int i = 0; i < nroVueltas; i++)
    {

        cout << "Ingrese un numero: ";
        cin >> nro;

        if(nro > 0)
        {
            //conPos = conPos + 1;
            conPos++;
        }

    }

    cout << "La cantidad de positivos contados fueron: " << conPos << endl;

    return 0;
}
