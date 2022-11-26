// KNAPSACK

#include <iostream>

using namespace std;

// Recibe K el valor limite de la mochila
// Dos arreglos V para los valores y W para los pesos
// y n es el numero de objetos
int knapsack(int K, int* V, int* W, int n){
    int M[n+1][K+1]; // agregamos una extra ya que necesitamos poner 0 en las filas y columnas

    // Valores triviales
    for(int i = 0; i <= n; i++) // Poblamos con 0 la fila
        M[i][0] = 0;

    for(int j = 1; j <= K; j++) // Poblamos con 0 la columna
        M[0][j] = 0;

    // Recorremos las filas y columnas en 1,1
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= K; j++)
            if( j >= W[i-1] ) // verificamos si el objeto cabe en la mochila 
                 M[i][j] = max( V[i-1] + M[i-1][j-W[i-1]], M[i-1][j]); // Verificamos si uso o no el objeto y si lo usamos nos quedamos con el maximo
            else M[i][j] = M[i-1][j]; // Si no cabe en la mochile regresamos a la columna anterior 

    return M[n][K]; // Retornamos el valor del resultado 
}

int main(void){
    int n = 3, K = 50; // n: total de datos, K: peso
    int V[3] = {60,100,120}, W[3] = {10,20,30};

    cout << "El valor máximo que se puede obtener es: " << knapsack(K, V, W, n) << ".\n";

    return 0;
}