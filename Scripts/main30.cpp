#include <iostream>
#include <cmath>

using namespace std;

int sumRecursiva(int, int , int, int); //  Prototipo de la funcion

int main() {
    int n, x, i = 0, total = 0; // variables a utilizar

    cout << "Ingrese el valor de n" << endl;
    cin >> n;
    cout << "Ingrese el valor de x" << endl;
    cin >> x;

    cout << sumRecursiva(n, x, i, total); // Se llama a la funcion recursiva 
                                          // y se imprime el resultado

    return 0;
}

int sumRecursiva(int n, int x, int i, int total) { //  Recibe los valores

    if(i <= n){ // Condicion de paro
        total = total + pow(x, i); // guardamos el total sumandole el valor de x ya elevado
        i++; // Aumentamos el i en 1
		return sumRecursiva(n, x, i, total); // retornamos la funcion con los nuevos valores
    }else{
        return total; // solo retorna el total cuando i > n 
    }

}