/**
Leer 10 números y guardarlos en un vector. Determinar e informar cuál es el
menor de los impares y el mayor de los pares. Suponer que habrá al menos un
número par y uno impar.

Paso 1: Leer 10 números y guardarlos en el vector
Paso 2: Determinar si es par
Paso 3.1: Determinar mayor
Paso 3.2: Determinar menor
Paso 4: Mostrar resultados
*/

#include <iostream>
using namespace std;

void cargarVector(int vec[], int tam);
bool esPar(int nro);
void determinarSiEsMayor(int nro, int & mayor);
void determinarSiEsMenor(int nro, int & menor);
void mostrarResultados(int mayorPar, int menorImpar);
void determinarMayorParYMenorImpar(int vec[], int tam, int & mayorPar, int & menorImpar);

int main()
{
    // PUNTO A
    const int CANT = 10;
    int nros[CANT] = {};

    int menorImpar = 0;
    int mayorPar = 0;

    cargarVector(nros, CANT);
    determinarMayorParYMenorImpar(nros, CANT, mayorPar, menorImpar);
    mostrarResultados(mayorPar, menorImpar);

    return 0;
}

// Función que carga vector con números enteros
void cargarVector(int vec[], int tam)
{
    for(int i = 0; i < tam; i++)
    {
        cout << "Ingrese un número: ";
        cin >> vec[i];
    }
}

bool esPar(int nro)
{
    return nro % 2 == 0;
}

void determinarSiEsMayor(int nro, int & mayor)
{
    if(mayor == 0 || nro > mayor)
    {
        mayor = nro;
    }
}

void determinarSiEsMenor(int nro, int & menor)
{
    if(menor == 0 || nro < menor)
    {
        menor = nro;
    }
}

void mostrarResultados(int mayorPar, int menorImpar)
{
    cout << "Mayor par: " << mayorPar << endl;
    cout << "Menor impar: " << menorImpar << endl;
}

void determinarMayorParYMenorImpar(int nros[], int tam, int & mayorPar, int & menorImpar)
{
    for(int i = 0; i < tam; i++)
    {
        // bool determinarPar = esPar(nros[i]);

        if(esPar(nros[i])) // Es par
        {
            determinarSiEsMayor(nros[i], mayorPar);
        }
        else // Es impar
        {
            determinarSiEsMenor(nros[i], menorImpar);
        }
    }

}
