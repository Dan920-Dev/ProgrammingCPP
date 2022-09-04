#include <iostream>

using namespace std;

void invert(int, int ); // Prototipo de funcion 


int main() {
    
    int n;

    cout << "escriba un numero: " << endl; // Solicitamos datos al usuario
    cin >> n;

    invert(n, 0); // enviamos los valores a la funcion

    return 0;
}

void invert(int n, int result){
    

    if(n < 10){ // condicion de paro
        cout << n;
    }else{
        result = n / 10; // se obtiene el cociente, ya que ese sera el nuevo valor de n
        cout << (n%10); // se imprime el residuo de la division
        invert(result,0); // invocamos la funcion con el nuevo n
    }
}