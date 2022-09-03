#include <iostream>
#include <cmath>

using namespace std;

void multiRecursiva(int);
int i = 1; // Para iniciar la multiplicacion en 1

int main() {
    int n;

    cout << "Ingrese el valor de n" << endl;
    cin >> n;

    multiRecursiva(n); // Enviamos n a la funcion

    return 0;
}

void multiRecursiva(int n) {
    if(i <= 10){ // Condicion de paro
        cout << i << "*" << n << " = " << i * n << endl; /// Imprimimos el resultado
        i++; // aumentamos el i en 1
        multiRecursiva(n); // llamamos la funcion
    }
}