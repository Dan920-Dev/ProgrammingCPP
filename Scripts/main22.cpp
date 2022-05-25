/*
Dado un valor entero 1 y 12 despliegue el mes correspondiente. 
Su programa debe poder detectar si el valor proporcionado no corresponde y 
advertir al usuario mediante un mensaje en pantalla. 
*/

#include <iostream>

using namespace std;

int main() {

    int mes;

    cout << "Digite un numero: " << endl;
    cin >> mes;

    switch (mes)
    {
    case 1:
        cout << "El numero corresponde a Enero" << endl;
        break;
    case 2:
        cout << "El numero corresponde a Febrero" << endl;
        break;
    case 3:
        cout << "El numero corresponde a Marzo" << endl;
        break;
    case 4:
        cout << "El numero corresponde a Abril" << endl;
        break;
    case 5:
        cout << "El numero corresponde a Mayo" << endl;
        break;
    case 6:
        cout << "El numero corresponde a Junio" << endl;
        break;
    case 7:
        cout << "El numero corresponde a Julio" << endl;
        break;
    case 8:
        cout << "El numero corresponde a Agosto" << endl;
        break;
    case 9:
        cout << "El numero corresponde a Septiembre" << endl;
        break;
    case 10:
        cout << "El numero corresponde a Octubre" << endl;
        break;
    case 11:
        cout << "El numero corresponde a Noviembre" << endl;
        break;
    case 12:
        cout << "El numero corresponde a Diciembre" << endl;
        break;
    default:
    cout << "El numero ingresado no corresponde a ningun mes" << endl;
        break;
    }

    return 0;
}