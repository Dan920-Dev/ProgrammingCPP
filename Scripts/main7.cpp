// Conversor de metros a cm

#include <iostream>

using namespace std;

int main() {

    // Variables a utilizar
    float metros, result = 0;

    // Pedimos datos al usuario
    cout << "Ingrese los metros que desea convertir a cm" << endl;
    cin >> metros;

    // Realizamos el calculo
    result = metros * 100;

    // Mostramos el resultado
    cout << metros << "m son: " << result << "cm";

    return 0;
}