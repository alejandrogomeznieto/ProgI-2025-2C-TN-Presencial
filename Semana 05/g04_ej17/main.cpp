#include <iostream>

using namespace std;

/*
    Una farmacia tiene registrada la información de las ventas efectuadas durante
    el mes pasado entre todas las sucursales y se solicita un programa para
    obtener determinadas estadísticas.
    Los datos que se disponen por cada una de las ventas efectuadas son:
    - Número de sucursal (1 a 30)
    - Día de la venta (1 a 31)
    - Importe de la venta
    - Tipo de venta (1=Particular, 2=Obra Social)
    - Forma de Pago (1=Débito, 2=Crédito, 3=Contado)

    Los datos están agrupados (no ordenados) por número de sucursal y puede
    haber varias ventas para la misma sucursal, para el mismo día, etc. Puede haber
    sucursales sin ventas durante todo el mes o durante algunos días del mes, no
    habrá registros con importes iguales a 0. Al final de todo el lote se indicará con
    un registro con número de sucursal igual a 0.


*/

int main()
{
    /// VARIABLES DEL REGISTRO
    int nroSucursal, dia, tipoVta, formaPago;
    float importe;

    /// Clave de Corte ///
    int nroSucursalActual;

    // Cargo la Primera SUCURSAL
    cout << "Ingrese Sucursal: ";
    cin >> nroSucursal;

    while(nroSucursal != 0)                     /// GRUPOS / SUCURSALES
    {
        nroSucursalActual = nroSucursal;

        while(nroSucursal == nroSucursalActual) /// REGISTROS CORRESPONDIENTES AL GRUPO / SUCURSAL ACTUAL
        {
            // Pido los demás datos del Registro
            cout << "Dia: ";
            cin >> dia;
            cout << "Importe: $ ";
            cin >> importe;
            cout << "Tipo Venta: ";
            cin >> tipoVta;
            cout << "Forma de Pago: ";
            cin >> formaPago;

            /// PROCESOS


            // Ingreso la Siguiente SUCURSAL
            cout << "Ingrese Sucursal: ";
            cin >> nroSucursal;
        }

        /// MOSTRAR PUNTO A

        /// MOSTRAR PUNTO C

        cout << endl << "Terminaste de Procesar una tanda de Lotes de la Sucursal: " << nroSucursalActual << endl << endl;
    }

    /// MOSTRAR PUNTO B

    /// MOSTRAR PUNTO D

    cout << endl << "Terminaste de Cargar todos los registros!!!" << endl << endl;

    return 0;
}
