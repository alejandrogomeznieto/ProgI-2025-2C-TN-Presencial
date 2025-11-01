#include <iostream>
using namespace std;

int buscarIndice(int vCod[], int tam, int codProd);

int main()
{
    /// ----- LOTE DE CARGA ----- //
    const int CANT_PROD = 50;

    int vecCodProd[CANT_PROD] {};
    int vecCatProd[CANT_PROD] {};
    float vecPrecioProd[CANT_PROD] {};

    for(int i = 0; i < CANT_PROD; i++)
    {
        cout << "Ingrese código producto " << i + 1<<": ";
        cin >> vecCodProd[i];
        cout << "Ingrese categoría producto: ";
        cin >> vecCatProd[i];
        cout << "Ingrese precio producto: $";
        cin >> vecPrecioProd[i];
    }

    /// ----- FIN LOTE DE CARGA ----- //


    /// ----- LOTE DE PROCESO ----- //
    int codProd, codVendedor, dia, cantidad;
    int indice;

    const int CANT_CAT = 20;
    const int CANT_EMPL = 50;

    int vecCantProdPorCat[CANT_CAT] {};
    int vecCantProdPorEmpl[CANT_EMPL] {};

    cout << endl << endl <<"INICIO DE LOTE DE PROCESO" << endl << endl;

    cout << "Ingrese el código de producto: ";
    cin >> codProd;

    while(codProd != 0)
    {
        cout << "Ingrese el código de vendedor: ";
        cin >> codVendedor;

        cout << "Ingrese el día: ";
        cin >> dia;

        cout << "Ingrese la cantidad: ";
        cin >> cantidad;

        // PROCESOS
        indice = buscarIndice(vecCodProd, CANT_PROD, codProd);

        // PUNTO A
        int categoria = vecCatProd[indice];
        vecCantProdPorCat[categoria - 1]+= cantidad;

        // PUNTO C
        vecCantProdPorEmpl[codVendedor - 101] += cantidad;

        cout << "Ingrese el código de producto: ";
        cin >> codProd;
    }

    /// ----- FIN LOTE DE PROCESO ----- //

    /// ----- RESULTADOS ----- //

    cout << endl << endl << "-------------------------------------" << endl << endl;

    /// PUNTO A
    cout << endl << "PUNTO A" << endl << endl;
    for(int i = 0; i < CANT_CAT; i++)
    {
        cout << "Categoria: " << i+1 << ": " <<vecCantProdPorCat[i] << " productos"<< endl;
    }


    /// PUNTO C
    int mayorCodEmpl = 0;
    int mayorCantVendPorEmpl = vecCantProdPorEmpl[0];

    for(int i = 0; i < CANT_EMPL; i++)
    {
        if(vecCantProdPorEmpl[i] > mayorCantVendPorEmpl)
        {
            mayorCodEmpl = i + 101;
            mayorCantVendPorEmpl = vecCantProdPorEmpl[i];
        }
    }

    cout << endl << "PUNTO C" << endl << endl;
    cout << endl << "El empleado que más vendió es el número: " << mayorCodEmpl << endl;

    return 0;
}


/// FUNCIONES
int buscarIndice(int vCod[], int tam, int codProd)
{
    for(int i = 0; i < tam; i++)
    {
        if(vCod[i] == codProd)
        {
            return i;
        }
    }

    return -1;
}
