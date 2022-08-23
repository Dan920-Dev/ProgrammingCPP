// Selection Sort -  Usando Punteros

#include <iostream>
using namespace std;

// función para intercambiar la posición de dos elementos
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

// Funcion para imprimir el Arreglo de forma Ascendente
void printArrayAs(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}


// Funcion que muestra arreglo de forma Descendente
void printArrayDes(int array[], int size) {
  for (int i = size -1; i >= 0; i--) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void selectionSort(int array[], int size) {

    for (int step = 0; step < size - 1; step++) {

    int min_idx = step;

        for (int i = step + 1; i < size; i++) {

            // Para ordenar en orden descendente
            // Selecciona el elemento mínimo en cada bucle.
            if (array[i] < array[min_idx]) {
                min_idx = i;
            }
        
        }

    
    swap(&array[min_idx], &array[step]);
  }
}


int main() {

  int data[] = {8, 4, 3, 10, 22, 2}; // Arreglo a Utilizar

  int size = sizeof(data) / sizeof(data[0]);

  selectionSort(data, size);

  cout << "Arreglo de forma Ascendente" << endl;
  printArrayAs(data, size);

  cout << "Arreglo de forma Descendente" << endl;
  printArrayDes(data, size);

  return 0;
}