/*
Como Manuel quiere hacerse rico rápido y sin demasiado trabajo, decidió hacer carrera en el juego.
Inicialmente, planea estudiar las ganancias y pérdidas de los jugadores, de modo que pueda identificar patrones de resultados consecutivos.
gana y elaborar una estrategia ganar-ganar. Pero Manuel, por inteligente que se crea, no sabe cómo
programar computadoras. Así que te contrató para que escribieras programas que lo ayudarán a elaborar su estrategia.
Su primera tarea es escribir un programa que identifique la ganancia máxima posible de una secuencia de
apuestas Una apuesta es una cantidad de dinero y es ganadora (y esto se registra como un valor positivo) o
perdiendo (y esto se registra como un valor negativo).
Aporte
El conjunto de entrada consta de un número positivo N ≤ 10000 , que da la longitud de la secuencia, seguido
por N enteros. Cada apuesta es un número entero mayor que 0 y menor que 1000.
La entrada se termina con N = 0.
Producción
Para cada conjunto de entrada dado, la salida reflejará una línea con la solución correspondiente. Si la secuencia
no muestra ninguna posibilidad de ganar dinero, entonces el resultado es el mensaje "Racha perdedora".
*/

#include <iostream>

using namespace std;

int max_1d_range_sum(int* A, int n){
    int M[n+1], S = 0; // Se declara un arreglo M con un size n+1 donde sera la respuesta 
                      // hasta i-1. y S es igual a la sumatoria hasta i-1

    M[0] = 0; // La posicion 0 en ese arreglo sera 0
    // Para empezar a poblar con los datos recibidos empezamos desde 1 hasta llegar a n
    
    for(int i = 1; i <= n; i++){
        S = max( S + A[i-1], A[i-1] ); // S toma el valor mas grande entre el estado actual y el anterior
        M[i] = max( S, M[i-1] ); // El arreglo en la posicion i guarda el maximo entre S y el estado anterior
    }

    return M[n]; // Retorna el valor mayor que se guardo en el arreglo auxiliar
}

void solution(){
    int datos, dato; // recibiremos el dato que ingrese el usuario

    while (cout << "Ingrese la longitud de la secuencia: ", cin >> datos) // Mientras el usuario ingrese datos enteros
    {
        int arraySeq[datos];

        if(datos == 0) // Si el dato es 0, terminara el programa
            break;

        for (int i = 0; i < datos; i++) // Pedimos los datos y poblamos el arreglo
        {
            cout << "ingrese el dato " << i + 1 << "\n";
            cin >> dato;
            arraySeq[i] = dato;
        }

        if(max_1d_range_sum(arraySeq, datos) > 0){ // Extraemos el resultado para evaluar
            cout << "The maximum winning streak is " << max_1d_range_sum(arraySeq, datos) << "\n";
        }else{
            cout << "Losing streak. \n";
        }

    }
}


int main() {

    solution(); // Solucion del ejercicio

    return 0;
}