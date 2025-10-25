#include <iostream>
using namespace std;

#include "funciones.h"

// Busca el indice del valor que le pasemos
int buscarIndice(int vec[], int tam, int numeroBuscar)
{
    //int indice = -1;
    //bool seEncontro = false;

    for(int i = 0; i < tam; i++)
    {
         //if(seEncontro == false && numeroBuscar == vec[i])
         if(numeroBuscar == vec[i])
         {
//            indice = i;
//            return indice;
            //seEncontro = true;
            return i;
         }
    }

    //return indice;

    return -1;
}
