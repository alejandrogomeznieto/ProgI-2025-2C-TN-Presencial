/*
    Un comercio vende tres marcas de alfajores distintas A, B y C. Hacer un
    programa para ingresar por teclado la cantidad de alfajores vendidos de cada una de las tres marcas y luego se informe el porcentaje de ventas para cada
    una de ellas.
    Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el
    programa calculará e informará A: 50%, B: 12,50% y C: 37,50%.
*/

#include <iostream>
using namespace std;

int main()
{
    int alfajoresA, alfajoresB, alfajoresC;
    float porcentajeA, porcentajeB, porcentajeC;

    cout << "Cant. Alfajores A: ";
    cin >> alfajoresA;
    cout << "Cant. Alfajores B: ";
    cin >> alfajoresB;
    cout << "Cant. Alfajores C: ";
    cin >> alfajoresC;

    int sumaAlfajores = alfajoresA + alfajoresB + alfajoresC;

    porcentajeA = alfajoresA * 100.0 / sumaAlfajores;
    porcentajeB = (float)alfajoresB * 100 / sumaAlfajores;
    porcentajeC = alfajoresC * 100 / (float)sumaAlfajores;

    cout << "Porcentaje Alfajores A: " << porcentajeA << "%" << endl;
    cout << "Porcentaje Alfajores B: " << porcentajeB << "%" << endl;
    cout << "Porcentaje Alfajores C: " << porcentajeC << "%" << endl;

    return 0;
}
