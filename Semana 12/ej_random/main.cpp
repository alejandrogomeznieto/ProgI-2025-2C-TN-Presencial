#include <iostream>
#include <cstdlib> // Para RAND -> Secuencia Nros | SRAND -> Inicializacion
#include <ctime> // Para obtener Hora del Sistema

using namespace std;

int main()
{
    srand(time(0));    // Inicializar UNA SOLA VEZ

    int inicio = 10;
    int fin = 20;

    int rango = fin - inicio + 1;

    int nroRandom = rand() % rango + inicio; // Aleatorios entre 10 a 20
    //int nroRandom = rand() % 10 + 1; // Nros aleatorios entre 1 a 10

    cout << "RANDOM: " << nroRandom << endl;

    return 0;
}
