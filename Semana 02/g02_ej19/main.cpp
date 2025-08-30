#include <iostream>

using namespace std;

int main()
{
    int cantHoras;
    char opcion;
    float total;
    bool urgente;

    cout << "Ingrese Cantidad Horas: ";
    cin >> cantHoras;
    cout << "Ingrese Lenguaje: ";
    cin >> opcion;
    cout << "Urgencia - 1 | No Urgencia 0: ";
    cin >> urgente;

    switch(opcion)
    {
    case 'C':
        cout << "Se eligio C++" << endl;
        total = cantHoras * 7500.0;
        break;
    case '#':
        cout << "Se eligio C#" << endl;
        total = cantHoras * 6100.0;
        break;
    case 'P':
        cout << "Se eligio PHYTON" << endl;
        total = cantHoras * 5400.0;
        break;
    case 'G':
        cout << "Se eligio GO" << endl;
        total = cantHoras * 5000.0;
        break;
    default:
        cout << "Lenguaje Invalido" << endl;
    }

    if(urgente){
        /// total *= 2.20
        total = total * 2.20;
    }

    cout << "Total a pagar: $ " << total << endl;

    return 0;
}
