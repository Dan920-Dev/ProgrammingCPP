// Estructura de control de flujo: Operador Ternario

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

    // Evaluamos cual es mayor

    num1 > num2 ? cout << "El primer numero es mayor" << endl : cout << "El segundo numero es mayor" << endl;

    // primero se evalua la expresion, luego se determinamos que pasara si la expresion se cumple o no.
    return 0;
}