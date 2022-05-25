/*
Dados dos enteros, a y b, 
indicar si el primero es o no divisible entre el segundo.
*/

#include <iostream>

using namespace std;

int main() {

    int a, b;

    cout << "ingrese el primero numero: " << endl;
    cin >> a;

    cout << "ingrese el segundo numero: " << endl;
    cin >> b;

    if(b < a && a % b == 0){
        cout << a <<" si es divisible entre " << b << endl;
    }else{
        cout << a <<" no es divisible entre " << b << endl;
    }


    return 0;
}