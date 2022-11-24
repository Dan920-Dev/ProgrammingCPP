// MAX 1D
#include <iostream>

using namespace std;

// Se recibe el arreglo y el numero de datos
int max_1d_range_sum(int* A, int n){
    int M[n+1], S = 0; // Se declara un arreglo M con un size n+1

    M[0] = 0; // La posicion 0 en ese arreglo sera 0
    // Para empezar a poblar con los datos recibidos empezamos desde 1 hasta llegar a n
    
    for(int i = 1; i <= n; i++){
        S = max( S + A[i-1], A[i-1] ); // S toma el valor mas grande entre el estado actual y el anterior
        M[i] = max( S, M[i-1] ); // El arreglo en la posicion i guarda el maximo entre S y el estado anterior
    }

    return M[n]; // Retorna el valor mayor que se guardo en el arreglo auxiliar
}

int main(void){
    int n = 8;
    int A[8] = {-2,1,-3,4,-1,2,1,-5}; // Arreglo de datos 

    cout << "El resultado máximo es: " << max_1d_range_sum(A, n) << ".\n"; // Se obtiene el tesultado

    return 0;
}