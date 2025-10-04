#include <iostream>
using namespace std;

// FUNCION

// DEFINICION DE UNA FUNCION
// -- TIPO DE RETORNO
// -- IDENTIFICADOR
// -- PARAMETROS
// -- CUERPO DE LA FUNCION

/*
    tipo_retorno identificador(parametros)
    {
        // Cuerpo de la funciòn
    }
*/

/*----------------------------------*/

// LLAMADO DE LA FUNCION
// -- IDENTIFICADOR
// -- ARGUMENTOS

/*
    identificador(argumentos);
*/
/*----------------------------------*/

// PROTOTIPOS
int sumarDosNumeros(int a, int b);
void holaMundo();
void dibujarLinea();
void saludar(string nombre);
void mostrarSuma(int n1, int n2);
int pedirNumero();


int main()
{

    // LLAMADOS
    // holaMundo();
    // dibujarLinea();
    // holaMundo();
    // dibujarLinea();
    // string nombre = "Agus";
    // saludar("Maxi");
    // saludar("José");
    // saludar(nombre);
    //mostrarSuma(10, 20);

    int nro1, nro2;
    nro1 = pedirNumero();
    nro2 = pedirNumero();

    // mostrarSuma(nro1, nro2);

    mostrarSuma(nro1, nro2);

    return 0;
}

// DEFINICIONES

// FUNCIONES QUE NO DEVUELVEN NADA Y NO RECIBEN NADA

void holaMundo()
{
    cout << "Hola mundo" << endl;
}

void dibujarLinea()
{
    cout << "-------------------" << endl;
}

/*----------------------------------*/

// FUNCIONES QUE NO DEVUELVEN NADA Y RECIBEN PARAMETROS
void saludar(string nombre)
{
    cout << "Hola, " << nombre << endl;
}

void mostrarSuma(int n1, int n2)
{
    cout << n1 << " + " << n2 << " = " << sumarDosNumeros(n1, n2) << endl;
}

/*----------------------------------*/

// FUNCIONES QUE DEVUELVEN VALORES Y NO RECIBEN NADA

int pedirNumero()
{
    // CUERPO
    int nro;
    cout << "Ingrese un numero: ";
    cin >> nro;

    return nro;
}

/*----------------------------------*/

// FUNCIONES QUE DEVUELVEN VALORES Y RECIBEN PARAMETROS

int sumarDosNumeros(int a, int b)
{
    int resultado = a + b;
    return resultado;
}
