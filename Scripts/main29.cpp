#include <iostream>

using namespace std;

void ida_y_vuelta(int n, int aux); // Prototipo de funcion


int main() {
    
    int n, aux;

    // Solicitamos n al usuario

    cout << "Digite un numero entero" << endl;
    cin >> n;

    ida_y_vuelta(n, 1); // enviamos n a la funcion

    return 0;
}

// Funcion recursiva
void ida_y_vuelta(int n,int aux) {

    if(n == 1){ // Condicion de paro
        cout << n << " ";
    }else{
        if (aux < n) // Hacemos uso de una variable auxiliar para mostrar los numeros
        {
            cout << aux << " ";
            aux++;
            ida_y_vuelta(n, aux); // llamada a la funcion
        }else{
            cout << n << " ";
            n--;
            ida_y_vuelta(n, aux); // llamada a la funcion
        }
    }

}