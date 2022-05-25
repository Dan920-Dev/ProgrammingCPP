/*

Utilizar un contador iniciando en 2 hasta menor o igual a 10, 
obtener la sumatoria de los mismos. Imprimir el total.
*/

#include <iostream>

using namespace std;

int main() {

    cout << "*** Usando for ***" << endl;

    int suma = 0, cont = 2;

    // Usando for
    for (int i = 2; i < 11; i++)
    {
       suma = suma + i;
    }

    cout << "La suma es: " << suma << endl;
    
    // Usanod while

    cout << "*** Usando while ***" << endl;

    suma = 0;

    while (cont < 11)
    {
        suma = suma + cont;

        cont++;
    }

    cout << "La suma es: " << suma << endl;
    

    return 0;
}