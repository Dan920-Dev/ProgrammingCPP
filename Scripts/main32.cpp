// una función recursiva que le devuelva el mayor de los números ingresados a un arreglo.

#include <iostream>

int numMayor(int[], int, int); // Prototipo de funcion

using namespace std;

int main(){

    int arrayNums[] = {35, 5, 200, 20, 1000}; // Arreglo de enteros

    cout << "El numero mayor es: ";
    cout << numMayor(arrayNums, 0, 0); // Se envia el arreglo, iterador y donde se guardara el numero mayor

    return 0;
}

int numMayor(int arrayNums[], int i, int mayor){ 

    if (i == 5) // Condicion de paro
    {

        return mayor;
    }
    else
    {

        if (arrayNums[i] > mayor) // verificacion en cada posicion
        {

            mayor = arrayNums[i]; // asignacion de valor mayor
            i++; // aumentanmos el iterador en 1

            return numMayor(arrayNums, i, mayor); // retornamos la funcion con los nuevos valores
        }
        else
        {

            i++;
            return numMayor(arrayNums, i, mayor); // retornamos la funcion con los nuevos valores
        }
    }
}