/* Ingresar un saludo y repetirlo la cantidad de veces que el usuario desee. 
Imprimir los saludos.
*/

#include <string.h> // Libreria estandar para cadenas de caracteres
#include <iostream>



using namespace std;

int main() {

    int nVeces = 0, contador = 0;
    string saludo;

    cout << "Ingrese la cantidad de veces desea mostrar el saludo: " << endl;
    cin >> nVeces; cin.ignore(); // Limpiamos buffer c++, para poder usar getline

    cout << "Ingrese un saludo: " << endl;
    getline(cin, saludo); // Para guardar todo el saludo
    cout << endl;
    
    // Usando for
    cout << "El resultado usando for es: " << endl;

    for( int i = 0; i < nVeces; i++){
        cout << saludo << endl;
    }
    cout << endl;

    // Usando While
    cout << "El resultado usando while es: " << endl;
    while (contador < nVeces)
    {
        cout << saludo << endl;
        contador++;
    }

    
    
    return 0;
}