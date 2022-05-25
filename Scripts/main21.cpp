/*
Utilice la fórmula cuadrática para encontrar las raíces de un polinomio
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    float x1 = 0, x2 = 0, a, b, c, raiz, denominador, d;

    cout << "ingrese el valor de a: " << endl;
    cin >> a;

    cout << "ingrese el valor de b: " << endl;
    cin >> b;

    cout << "ingrese el valor de c: " << endl;
    cin >> c;

    d = (pow(b, 2)) - (4 * a * c);

    if(d < 0 || (2 * a) == 0){

        cout << "No hay solucion en los reales para este polinomio" << endl;

    }else{

        x1 = ((-b) + sqrt(d)) / (2 * a);
        x2 = ((-b) - sqrt(d)) / (2 * a);

        cout << "el valor de x1= " << x1 << endl;
        cout << "el valor de x2= " << x2 << endl;
    }

    

    return 0;
}