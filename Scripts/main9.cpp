/*
Leer año de nacimiento, calcular la edad, mostrar los resultados si es mayor o menor de edad.
*/

#include <iostream>

using namespace std;

int main() {

    // Variables a utilizar
    int anioNac, anioActual = 2022, edad = 0;

    // Pedimos datos al usuario
    cout << "Ingrese su Anio de Nacimiento: " << endl;
    cin >> anioNac;

    // Calculamos
    edad = anioActual - anioNac;

    // Evaluamos si es mayor o menor de edad
    if (edad >= 18)
    {
        cout << "Usted es mayor de edad, su edad es: " << edad << endl;
    }else{

        cout << "Usted es menor de edad, su edad es: " << edad <<endl;
    }
    

    return 0;
}