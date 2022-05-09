// Estructura de control de flujo:  If

/*
Este programa evalua cual de dos numeros es mayor 
*/

#include <iostream>

using namespace std;

int main() {

    // Variables a utilizar
    int num1, num2;


    // Pedimos datos al Usuario
    cout << "Ingrese el primer numero: " << endl;
    cin >> num1;

    cout << "Ingrese el segundo numero: " << endl;
    cin >> num2;

    // Evaluamos si el primer o segundo numero es mayor

    if (num1 > num2) // Aca se define la expresion a evaluar
    {
        // Si la expresion se cumple
        cout << "El primer numero es mayor" << endl;
    }else{
        // Si la expresion no se cumple
        cout << "El segundo numero es mayor" << endl;
    }
    

    return 0;
}