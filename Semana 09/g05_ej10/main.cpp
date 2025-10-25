#include <iostream>
using namespace std;

/*
    Hacer una función que reciba un código de naipe (del 1 al 40) y determine el
número y el palo de la baraja española de 40 cartas (sin los 8, 9 y comodines
del mazo). La función debe recibir por referencia el número de naipe y el
nombre del palo (para ser completados por la función) y por valor el código de
naipe.
Tener en cuenta que:
Los códigos de naipes de espada van del 1 al 10, basto del 11 al 20, copa del
21 al 30 y oro del 31 al 40. Por ejemplo, naipe con ID #10 es el 12 de espadas.

*/

void determinarNaipe(int codigo, int &naipe, string &nombre);

int main()
{
    int codigo = 38;
    int naipe;
    string nombre;

    determinarNaipe(codigo, naipe, nombre);

    cout << "Codigo: " << codigo << endl;
    cout << "Numero de Naipe: " << naipe << endl;
    cout << "Palo del Naipe: " << nombre << endl;

    return 0;
}

void determinarNaipe(int codigo, int&naipe, string &nombre){
    // Determinar PALO
    if(codigo >= 1 && codigo <= 10){
        nombre = "ESPADA";
    }
    else if(codigo >= 11 && codigo <= 20){
        nombre = "BASTO";
    }
    else if(codigo >= 21 && codigo <= 30){
        nombre = "COPA";
    }
    else{
        nombre = "ORO";
    }

    // Determino el NAIPE
    naipe = codigo % 10;

    if(naipe >= 8)
        naipe+=2;
    if(naipe == 0)
        naipe = 12;
}
