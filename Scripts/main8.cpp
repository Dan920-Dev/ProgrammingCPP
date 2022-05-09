// Leer los valores, realizar el cálculo del área de un triángulo y mostrar el resultado.

#include <iostream>

using namespace std;

int main() {

    // Variables a utilizar
    float base, altura, result = 0;

    // Pedimos datos al usuario
    cout << "Ingrese la base del triangulo: " << endl;
    cin >> base;
    cout << "Ingrese la altura del triangulo: " << endl;
    cin >> altura;

    // Realizamos calculo y Mostramos el resultado

    result = (base * altura)/2;

    cout << "El area del triangulo es: " << result;
    
    return 0;
}