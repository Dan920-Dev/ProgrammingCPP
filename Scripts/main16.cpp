/*
Ingresar 10 valores por teclado y obtener la sumatoria de los mismos. 
Imprimir el total.
*/

#include <iostream>

using namespace std;

int main() {

    cout << "*** Usando for ***" << endl;

    int suma = 0, cont = 0, valor;

    // Usando for
    for (int i = 0; i < 10; i++)
    {
        cout << "ingrese el valor Num" << i + 1 << endl;
        cin >> valor;
        suma = suma + valor;
    }

    cout << "La suma es: " << suma << endl;
    
    // Usanod while

    cout << "*** Usando while ***" << endl;

    suma = 0;

    while (cont < 10)
    {
        cout << "ingrese el valor Num" << cont + 1 << endl;
        cin >> valor;
        suma = suma + valor;

        cont++;
    }

    cout << "La suma es: " << suma << endl;

    return 0;
}