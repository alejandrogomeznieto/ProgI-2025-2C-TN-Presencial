/*
Hacer un programa para ingresar una lista de 10 números, luego informar el máximo de los negativos y el mínimo de los positivos.

Ejemplo A: 10, 20, -5, 30,-15, 3, 42, 0, 22, -13.

Se listará:
Máximo de los negativos: -5
Mínimo de los positivos: 3

Ejemplo B: 10, 20, 5, 30, 15, 5, 42, 8, 22, 13.

Se listará:
Máximo de los negativos: No hay negativos
Mínimo de los positivos: 5
*/

#include <iostream>
using namespace std;

int main()
{
    int nro;
    int minPos;
    int maxNeg;
    //int contPos = 0;
    bool hayPrimerPos = false;
    bool hayPrimerNeg = false;

    for(int i = 0; i < 10; i++){
        cout << "Ingrese un numero: ";
        cin >> nro;

        if(nro > 0){
            //contPos++;
            //if(contPos == 1){
            if(hayPrimerPos == false){
                minPos = nro;
                hayPrimerPos = true;
            }
            else{
                if(nro < minPos){
                    minPos = nro;
                }
            }
        }

        if(nro < 0){
            if(!hayPrimerNeg){
                maxNeg = nro;
                hayPrimerNeg = true;
            }
            else{
                if(nro > maxNeg){
                    maxNeg = nro;
                }
            }
        }
    }

    cout << "Maximo Negativo: " << maxNeg << endl;
    cout << "Minimo Positivo: " << minPos << endl;

    return 0;
}
