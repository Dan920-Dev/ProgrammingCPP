// Bubble Sort

#include <iostream>

using namespace std;

void bubbleSort(int arrayNums[]); // Prototipo de funcion

int main() {

     int arrayNums[] = {8, 4, 3, 10, 22, 2}; // Arreglo a Usar


    bubbleSort(arrayNums); // Enviamos arreglo a la funcion
    
    return 0;
}

void bubbleSort(int arrayNums[]){ // Funcion recibe el Arreglo
    int aux; // Variable auxiliar para guardar el valor actual
    
    for (int i = 0; i < 6; i++)
    {
       for (int j = 0; j < 6; j++)
       {

        if(arrayNums[j] > arrayNums[j + 1]){
            aux = arrayNums[j];
            arrayNums[j] = arrayNums[j + 1];
            arrayNums[j + 1] = aux;
        }

       } 
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
}