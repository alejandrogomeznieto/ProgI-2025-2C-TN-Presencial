#include <iostream>

using namespace std;

/*
    Hacer un programa para ingresar cinco números y listar cuantos de esos cinco
    números son positivos, cuantos son negativos y cuantos son iguales a 0.
*/

int main()
{
    int n1, n2, n3, n4, n5;
    int contPos = 0, contNeg = 0, contCeros = 0; /// Declaro e inicializo Contadores

    /// Siempre pero siempre cuando trabajemos con CONTADORES y/o ACUMULADORES, los debemos inicializar en 0. SIEMPRE.

    cout << "Ingrese numero: ";
    cin >> n1;
    cout << "Ingrese numero: ";
    cin >> n2;
    cout << "Ingrese numero: ";
    cin >> n3;
    cout << "Ingrese numero: ";
    cin >> n4;
    cout << "Ingrese numero: ";
    cin >> n5;

    /// Evaluamos N1
    if(n1 > 0){
        contPos = contPos + 1;
    }
    else{
        if(n1 == 0){
            contCeros++;
        }
        else{
            contNeg += 1;
        }
    }

    /// Evaluamos N2
    if(n2 > 0){
        contPos = contPos + 1;
    }
    else{
        if(n2 == 0){
            contCeros++;
        }
        else{
            contNeg += 1;
        }
    }

    /// Evaluamos N3
    if(n3 > 0){
        contPos = contPos + 1;
    }
    else{
        if(n3 == 0){
            contCeros++;
        }
        else{
            contNeg += 1;
        }
    }

    /// Evaluamos N4
    if(n4 > 0){
        contPos = contPos + 1;
    }
    else{
        if(n4 == 0){
            contCeros++;
        }
        else{
            contNeg += 1;
        }
    }

    /// Evaluamos N5
    if(n5 > 0){
        contPos = contPos + 1;
    }
    else{
        if(n5 == 0){
            contCeros++;
        }
        else{
            contNeg += 1;
        }
    }

    /// Mostramos los Contadores
    cout << "Cantidad de Positivos: " << contPos << endl;
    cout << "Cantidad de Negativos: " << contNeg << endl;
    cout << "Cantidad de Ceros:     " << contCeros << endl;

    return 0;
}
