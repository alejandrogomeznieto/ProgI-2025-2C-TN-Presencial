#include <iostream>
using namespace std;

/*
256
25
1
1091
392
3
1
343
533
18
1
696
913
6
1
696
48
19
1
434
621
10
1
283
788
4
1
930
800
8
1
286
910
2
2
1303
1000
27
1
778
962
10
2
716
318
2
2
428
656
6
2
953
278
20
1
1795

PUNTO A: -3932
PUNTO D: 2
*/

int main()
{
    /// VARIABLES
    int nroMov;
    int dia;
    int tipo;
    float importe;

    /// VARIABLES PUNTO A
    float saldo = 0;

    /// VARIABLES PUNTO D
    int contMov10 = 0;


    /// INGRESOS Y PROCESOS
    for (int i = 0; i < 14; i++)
    {
        // Registro
        cout << "Ingrese el número de movimiento: ";
        cin >> nroMov;
        cout << "Ingrese el día del movimiento: ";
        cin >> dia;
        cout << "Ingrese el tipo de movimiento: ";
        cin >> tipo;
        cout << "Ingrese el importe del movimiento: $";
        cin >> importe;

        /// PUNTO A
        if(tipo == 1)
            saldo = saldo - importe;
        if(tipo == 2)
            saldo+=importe;

        /// PUNTO D
        if(dia == 10)
            contMov10++;
    }

    /// RESULTADOS
    cout << "PUNTO A: EL saldo final es de $" << saldo << endl;
    cout << "PUNTO D: La cantidad de movimientos del día 10 fueron de " << contMov10 << endl;

    return 0;
}
