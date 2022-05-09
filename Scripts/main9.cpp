/*
Escribir un algoritmo que informe por pantalla el apellido y nombre junto a la nota de examen de cada 
alumno y si la nota es mayor o igual a 6 entonces aprobó el curso si no reprobó el curso.
*/

#include <iostream>

using namespace std;

int main() {

    // Variables a utilizar 
    string nombre, apellido;
    int nota;

    // Pedimos datos al usuario
    cout << "Ingrese su nombre: " << endl;
    cin >> nombre;

    cout << "Ingrese su apellido: " << endl;
    cin >> apellido;

    cout << "Ingrese su nota: " << endl;
    cin >> nota;


    // Evaluamos la expresion y mostramos al usuario
    if (nota >= 6)
    {
        cout << "DATOS: " << endl;
        cout << "Nombre: " << nombre << " " << apellido << ", nota: " << nota << endl;
        cout << "Su nota es mayor o igual a 6, ESTA APROBADO" << endl;
    }else{

        cout << "DATOS: " << endl;
        cout << "Nombre: " << nombre << " " << apellido << ", nota: " << nota << endl;
        cout << "Su nota es mayor o igual a 6, ESTA REPROBADO" << endl;
    }

    return 0;
}