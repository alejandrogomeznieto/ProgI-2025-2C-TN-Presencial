#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");

    int opcion;

    cout << "1. Apagar - 2. Reiniciar - 3. Suspender" << endl;
    cout << "Opción: ";
    cin >> opcion;

    /// La Estructura de Decisión Múltiple, Switch, nos permite evaluar el contenido de una variable entre valores exactos posibles.
        /// Nos permite ahorrar de tener que tener IFs en cascada preguntando opcion == 1; opcion == 2; opcion == 3

    switch (opcion)
    {
    case 1:
        cout << "Apagando el sistema..." << endl;
        break;
    case 2:
        cout << "Reiniciando..." << endl;
        break;
    case 3:
        cout << "Suspensión en curso..." << endl;
        break;
    default:
        cout << "Opción no válida." << endl;
    }

    /// La sentencia BREAK corta el bloque. Para esta estructura, lo que nos permite es que no se siga evaluando los demás CASE una vez se encontró el valor coincidente.

    return 0;
}
