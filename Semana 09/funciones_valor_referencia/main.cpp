#include <iostream>

using namespace std;

void funcionConParametroValor(int valor);
void funcionConParametroReferencia(int &referencia);

int main()
{
    /// PASAJES: Valor - Referencia

    int variable = 100;
    cout << "Valor de VARIABLE: " << variable << endl;

    //funcionConParametroValor(300);
    funcionConParametroReferencia(variable);

    cout << "Valor de VARIABLE: " << variable << endl;

    return 0;
}


void funcionConParametroValor(int valor){
    cout << "Valor recibido en valor: " << valor << endl;

    valor = 500;

    cout << "Valor cambiado en valor: " << valor << endl;
}

void funcionConParametroReferencia(int &referencia){
    cout << "Valor recibido en referencia: " << referencia << endl;

    referencia = 500;

    cout << "Valor cambiado en referencia: " << referencia << endl;
}
