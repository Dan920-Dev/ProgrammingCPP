/*
Un arreglo se define indicando el tipo de arreglo, es decir, 
el tipo de datos de todos los elementos del arreglo, 
luego se le da un nombre al arreglo y finalmente se le da un tamaño.

<tipo> nombreArreglo[Tamamaño]
*/

#include <iostream>

using namespace std;

int main() {

    int array[] = {10, 3, 5}; // Declaramos un arreglo de tipo entero con 3 valores
                         // Cada valor esta dentro de un indice

    // En el indice 0 se encuentra el valor "10"
    cout << array[0] << endl; // Mostramos el valor por medio del indice

    // Para recorrer un arreglo podemos usar for

    cout << "Ahora recorremos el arreglo usando for" << endl;
    for (int i = 0; i < 3; i++) // Mostramos todos los valores recorriendo con el iterador i 
    {
        cout << array[i] << endl;
    }
    

    return 0;
}