/**
Leer 10 números y guardarlos en un vector. Determinar e informar cuál es el
menor de los impares y el mayor de los pares. Suponer que habrá al menos un
número par y uno impar.

*/

#include <iostream>
#include<vector> /// NO USAR
using namespace std;

int main()
{

    // PUNTO A
    const int CANT = 10;
    int nros[CANT];

    int menorImpar = 0;
    int mayorPar = 0;

    // GUARDAMOS LOS VALORES
    for(int i = 0; i < CANT; i++)
    {
        cout << "Ingrese un número: ";
        cin >> nros[i];
    }

    for(int i = 0; i < CANT; i++)
    {
        if(nros[i] % 2 == 0) // Es par
        {
            if(mayorPar == 0 || nros[i] > mayorPar) // O es el primero o es mayor
                mayorPar = nros[i];
        }
        else // Es impar
        {
            if(menorImpar == 0 || nros[i] < menorImpar)
            {
                menorImpar = nros[i];
            }
        }
    }

    cout << "Mayor par: " << mayorPar << endl;
    cout << "Menor impar: " << menorImpar << endl;

//    // MOSTRAMOS LOS VALORES
//    for(int i = 0; i < CANT; i++)
//    {
//        cout << nros[i] << endl;
//    }

    return 0;
}
