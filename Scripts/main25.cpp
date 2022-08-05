/*
Las matrices o como algunos las llaman "arreglos multidimensionales" 
son una estructura de datos bastante similar a los vectores o arreglos. 
De hecho, una matriz no es más que una serie de vectores contenidos uno en el otro (u otros), 
es decir, una matriz es un vector cuyas posiciones son otros vectores. 
Hablemos con más detalle de esto para quedar más claros.
*/

// tipoDato nombreMatriz[filas][columnas]; -- De esta forma se declara una matriz
// y para recorrerla haremos uso de dos ciclos for, 1 para las filas y el otro para las columnas


#include <iostream>

using namespace std;

int main() {

int myMatriz[2][2] = {{1,2},{1,1}}; //Matriz con 4 elementos
int fila1Casilla1 = myMatriz[1][1]; //Para acceder a la casilla 1,1 se usan dichos indices

cout << "Mostramos fila 1 Casilla 1" << fila1Casilla1 << endl;
int primerNumero = myMatriz[0][0]; //La primer casilla siempre será la de la fila 0 columna 0
cout << "Mostramos primer casilla" << myMatriz[0][0] << endl;


// Para recorrer todo la matriz
for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 2; j++)
    {
        cout << myMatriz[i][j]; // Hacemos uso de j ya que necesitamos recorrer filas y columnas
    }
    
}

    return 0;
}