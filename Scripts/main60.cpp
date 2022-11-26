/*

Hay una SuperVenta en un SuperHiperMercado. Cada persona puede tomar solo un objeto de cada tipo, es decir,
un televisor, una zanahoria, pero por un precio extra bajo. Vamos con toda la familia a ese SuperHiperMarket.
Cada persona puede llevarse tantos objetos, como pueda realizar de la SuperVenta. Hemos dado lista
de objetos con precios y su peso. También sabemos, cuál es el peso máximo que cada persona
puede soportar ¿Cuál es el valor máximo de los objetos que podemos comprar en SuperSale?
Aporte
La entrada consiste en casos de prueba T. El número de ellos (1 ≤ T ≤ 1000) se da en la primera línea de
el archivo de entrada. Cada caso de prueba comienza con una línea que contiene un solo número entero N que indica
el número de objetos (1 ≤ N ≤ 1000). Luego sigue N líneas, cada una de las cuales contiene dos números enteros: P y W.
El primer entero (1 ≤ P ≤ 100) corresponde al precio del objeto. El segundo entero (1 ≤ W ≤ 30)
corresponde al peso del objeto. La siguiente línea contiene un número entero (1 ≤ G ≤ 100) es el número de
gente de nuestro grupo. Las siguientes líneas G contienen el peso máximo (1 ≤ MW ≤ 30) que puede soportar este i-ésimo
persona de nuestra familia (1 ≤ i ≤ G).
Producción
Para cada caso de prueba, su programa tiene que determinar un número entero. Imprimir el valor máximo de los bienes
que podemos comprar con esa familia.

*/

#include <iostream>
#include <string>

using namespace std;


// Utilizamos una estructura para poder guardar de mejor forma los datos a obtener
typedef struct{
    int max_value;
    string max_combi;
} Answer;

Answer knapsack(int K, int* V, int* W, int n){
    int M[n+1][K+1]; // agregamos una extra ya que necesitamos poner 0 en las filas y columnas
    string S[n+1][K+1]; // Una matriz de string para guardar que objetos cumplen

    for(int i = 0; i <= n; i++){ // Poblamos de 0 y espacios vacios - filas
        M[i][0] = 0;
        S[i][0] = "";
    }

    for(int j = 1; j <= K; j++){ // Poblamos de 0 y espacios vacios - columnas
        M[0][j] = 0;
        S[0][j] = "";
    }

    // Recorremos la matriz desde 1,1 
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= K; j++)
            if( j >= W[i-1] && ( V[i-1] + M[i-1][j-W[i-1]] > M[i-1][j] ) ){
                M[i][j] = V[i-1] + M[i-1][j-W[i-1]];
                S[i][j] = to_string(i) + "," + S[i-1][j-W[i-1]];
            }else{
                M[i][j] = M[i-1][j];
                S[i][j] = S[i-1][j];
            }

    // Retornamos los resultados
    Answer res;
    res.max_value = M[n][K];
    res.max_combi = S[n][K];
    return res;
}

int main(void){
    int n = 3, K = 50;
    // La persona puede cargar 50g 
    // y los productos son 60, 100, 120; los pesos de los productos son 10,20,30
    int V[3] = {60,100,120}, W[3] = {10,20,30};

    Answer respuesta = knapsack(K, V, W, n);

    cout << "El valor máximo que se puede obtener es: " << respuesta.max_value << ", y la combinación de objetos es: [" << respuesta.max_combi << "].\n";

    return 0;
}