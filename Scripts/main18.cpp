/*
Dados dos enteros que se ingresan desde teclado, 
indicar cuál de los dos es mayor.
*/

#include <iostream>

using namespace std;

int main(){

    int num1, num2;

    cout << "ingrese el primero numero: " << endl;
    cin >> num1;

    cout << "ingrese el segundo numero: " << endl;
    cin >> num2;

    if(num1 > num2) {
        cout << num1 << " es mayor que " << num2;
    }else{
        cout << num2 << " es mayor que " << num1;
    }
    return 0;
}