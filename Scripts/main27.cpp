// Insertion Sort 

#include <iostream>

using namespace std;


int main() {

    int arrayNums[] = {8, 4, 3, 10, 22, 2}; // Arreglo a Usar

    int temp = 0, pos = 0; // tem: Guardaremos valor temporalmente
                           // pos: Nos ayudara a guardar posciones dentro del arreglo

    for (int i = 0; i < 6; i++)
    {
        pos = i; // posicion Actual
        temp = arrayNums[i];  // valor actual

        while ((pos > 0) && (arrayNums[pos -1] > temp)) 
        {
            arrayNums[pos] = arrayNums[pos -1]; // Guardamos el valor actual en la posicion anterior

            pos--; // disminuimos en 1 el contador de posicion
        }

        arrayNums[pos] = temp; // guardamos el valor actual en la posicion anterior
    }


    cout << "Arreglo de forma Ascendente" << endl;

    for (int i = 0; i < 6; i++) // Recorremos el arreglo desde la posicion 0 hacia adelante
    {
        cout << arrayNums[i] << " ";
    }

    cout << endl;

    cout << "Arreglo de forma Descendente" << endl;

    for (int i = 5; i >= 0; i--) // Recorremos el arreglo desde la posicion 5 hacia atras
    {
        cout << arrayNums[i] << " ";
    }

    cin.ignore();

    return 0;
}