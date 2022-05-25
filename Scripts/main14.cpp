/*
Calcula el total a pagar de la cantidad de productos 
indicada por el usuario, para ello debe solicitar 
el precio por cada producto y la cantidad de productos que ha comprado.. 
Imprimir los los precios y el total a pagar.
*/
#include <iostream>

using namespace std;

int main() {

    float precio = 0, result = 0;
    int cantProduc = 0;
    
    cout << "Ingrese la cantidad de productos a pagar: " << endl;
    cin >> cantProduc;
    
    for (int i = 0; i < cantProduc; i++)
    {
        cout << "Ingrese el precio del producto " << i + 1 << endl;
        cin >> precio;

        result = result + precio; // result guarda el precio de cada iteracion mas el precio anterior

        precio = 0; // regresamos al valor original el precio
    }

    cout << "El total a pagar es: $" << result << endl;
    

    return 0;
}