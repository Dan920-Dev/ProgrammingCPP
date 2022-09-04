#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

void min_a_may(string, int);

int main() {

    string cadena;
    int n;

    cout << "Escriba algo..." << endl;
    cin >> cadena;

    

    min_a_may(cadena, 0);

    return 0;
}

void min_may(string cadena, int n){
    if(n < 25){
        cadena[n] = toupper(cadena[n]);
        n++;
        min_a_may(cadena, n);
    }
} 