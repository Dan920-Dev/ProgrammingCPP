/*
Estructuras repetitivas y Funciones

For, While and Do While

*/

// Declaramos prototipos de funciones
// Las dunciones pueden ser de tipo int, float, string, etc igual que en las variables!

void funFOR();
void funWhile();
void funDoWhile();

#include <iostream>

using namespace std;

int main() {


    // Mostramos el resultado de todas las funciones usando iteradores
    
    cout << "Numeros del 1 al 10 usando for " << endl;
    funFOR();
    cout << endl;

    cout << "Numeros del 1 al 10 usando While " << endl;
    funWhile();
    cout << endl;

    cout << "Numeros del 1 al 10 usando Do While" << endl;
    funDoWhile();

    return 0;
}



// funcion que usara for - mostrar numeros del 1 al 10

void funFOR(){
    for (int i = 1; i < 11; i++) // Se declara una variable la cual sera nuestro iterador
    {
        cout << i << " "; // y mientras se cumpla que i sea menor a 11 nos mostrara el valor de i
    }
    
}


// funcion que usara while - mostrar numeros del 1 al 10
void funWhile(){

    int contador = 1; // iniciamos un contador

    while (contador <11) // La condicion es muestre el valor del contador mientras sea menor a 11
    {
        cout << contador << " ";
        contador++; // aumentamos el contador en una unidad
    }
    
}

// funcion que usara Do while
void funDoWhile(){

    int contador = 1;

    do
    {
        cout << contador << " ";
        contador++; // aumentamos el contador en una unidad
    } while (contador < 11); // La condicion es muestre el valor del contador mientras sea menor a 11
    
}