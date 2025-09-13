/*
Hacer un programa que permita ingresar el sueldo y la modalidad de trabajo
(1– Fulltime y 2 – Parttime) de 10 empleados y determine:

- La cantidad de trabajadores part-time con sueldos mayores a $750000.
- El sueldo promedio de los trabajadores Fulltime.

- Qué modalidad tiene más trabajadores que ganan más de un millón de
pesos. (Se debe mostrar Fulltime o Parttime)

*/

/*
755715
1
730544
1
737153
1
720652
2
725914
1
705997
1
737562
2
718863
1
753921
2
709021
2

PUNTO A:  1
PUNTO B:  729031


*/

#include <iostream>
using namespace std;

int main()
{
    float sueldo;
    int modalidad;
    int contEmpl = 0;

    float acuSueldo = 0;
    int contFullTime = 0;
    float promedioFullTime;

    for(int i = 0; i < 10; i++){
        // PIDO REGISTROS
        cout << "Ingrese Sueldo: $ ";
        cin >> sueldo;
        cout << "Ingrese Modalidad: ";
        cin >> modalidad;

        // PROCESOS
        /// PUNTO A
        if(modalidad == 2 && sueldo > 750000)
            contEmpl++;

        /// PUNTO B
        if(modalidad == 1){
            //acuSueldo = acuSueldo + sueldo;
            acuSueldo+=sueldo;
            contFullTime++;
        }

    }

    // INFORMACIÓN SALIDA
    /// PUNTO A
    cout << endl << "La Cant. de Empleados con Sueldo > 750000 es de: " << contEmpl << endl;
    /// PUNTO B
    promedioFullTime = acuSueldo / contFullTime;
    cout << "El Promedio Sueldo FullTime es: $ " << promedioFullTime << endl;

    return 0;
}
