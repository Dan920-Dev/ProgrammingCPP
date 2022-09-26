// Punteros - Son variables que se utilizan para almacenar direcciones de memoria

#include <iostream>

using namespace std;

int main() {

    // Declaracion de variable
    int a;

    // Declaracion del puntero
    int *p;

    // Asignacion de valor al puntero 
    p = &a;

    // Mostramos direccion de memoria
    cout << p ;


    // Funcion con struct
    funShow();
    return 0;
}


// Struct -  Una estructura es un tipo de dato compuesto que permite almacenar 
// un conjunto de datos de diferente tipo
void funShow(){

    struct Persona
    {
        string nombre;
        string apellido;
        int numPhone;
    }unaPersona;

    // Agregamos datos de una persona usando la estructura
    // Desta forma tambien podemos agregar datos a otras personas usando la misma estructura
    cout << "ingrese un nombre: " << endl;
    cin >> unaPersona.nombre;
    cout << "ingrese apellido: " << endl;
    cin >> unaPersona.apellido;
    cout << "ingrese numero de telefono: " << endl;
    cin >> unaPersona.numPhone;
}