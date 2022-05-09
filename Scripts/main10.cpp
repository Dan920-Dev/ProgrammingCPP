/*
Realizar un algoritmo para determinar el sueldo de un empleado, 
teniendo en cuenta que si trabajó menos de 5 años la antigüedad será del 30% y 
si trabajo igual o más de 5 años del 50%.
*/

#include <iostream>

using namespace std;

int main() {

    // Variables a utilizar
    float sueldo, salario;
    int aniosTrabjados, anioInicio, anioActual = 2022;

    // Pedimos datos al usuario
    cout << "Ingrese el anio en el que empezo a trabajar " << endl;
    cin >> anioInicio;

    cout << "Ingrese el salario: " << endl;
    cin >> salario;

    // Realizamos calculos necesarios
    aniosTrabjados = anioActual - anioInicio;

    // Evaluamos la expresion
    if (aniosTrabjados <5 ) 
    {
        sueldo = (salario * 0.30) + salario;
    }else{
        sueldo = (salario * 0.50) + salario;
    }

    // Mostramos datos al usuario
    cout << "DATOS:" << endl;
    cout << "Anios trabajados: " << aniosTrabjados << endl;
    cout << "Sueldo: " << sueldo;
    
    return 0;
}