/*
Ingresar 5 valores por teclado y obtener la sumatoria de 
los números pares. 
Imprimir el total.
*/

#include <iostream>

using namespace std;

int main() {

    cout << "*** Usando for ***" << endl;

    int suma = 0, cont = 0, valor;

    // Usando for
    for (int i = 0; i < 5; i++)
    {
        cout << "ingrese el valor Num" << i + 1 << endl;
        cin >> valor;

        if(valor % 2 == 0){ // validamos si el valor es par
            suma = suma + valor;
        }
        
    }

    cout << "La suma es: " << suma << endl;
    
    // Usanod while

    cout << "*** Usando while ***" << endl;

    suma = 0;

    while (cont < 5)
    {
        cout << "ingrese el valor Num" << cont + 1 << endl;
        cin >> valor;

        if(valor % 2 == 0){ // Validamos si el valor es par
            suma = suma + valor;
        }

        cont++;
    }

    cout << "La suma es: " << suma << endl;

    return 0;
}