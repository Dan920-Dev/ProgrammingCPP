// Estructura de control de flujo: Switch


/* 
Este programa muestra un menu con opciones, las cuales puedes seleccionar y 
el programa hara lo que elijas
*/

#include <iostream>

using namespace std;

int main() {
    // Variables a utilizar
    int opcion;

    // Menu
    cout << "1. Decir Hola " << endl;
    cout << "2. Mostrar vocales" << endl;
    cout << "3. Mostrar los primeros 5 numeros" << endl;
    cout << "4. Salir" << endl;
    cout << "Elija una opcion: ";
    cin >> opcion;

    // Switch
    switch (opcion) // Obtenemos que opcion elijio el usuario
    {
    case 1:
        cout << "HOLA MUNDO";
        break;
    case 2:
        cout << "Las vocales son: a, e, i, o, u";
        break;
    case 3:
        cout << "Numeros: 1, 2, 3, 4, 5";
        break;
    case 4:
        cout << "Usted ha salido del programa";
        break;
    default:
        cout << "Opcion incorrecta" << endl;
        break;
    }

    /*

    Cada "Case" es cada una de las opciones que podemos elegir del menu
    "break" termina de ejecutar la opcion seleccionada
    "default" Muestra un mensaje si el usuario no eligio ninguna de las opciones o case

    */

    return 0;
}