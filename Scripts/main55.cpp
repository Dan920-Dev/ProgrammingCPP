/*
Sasha es un tipo muy alegre, por eso siempre está en movimiento. 
Hay n ciudades en el país donde vive Sasha. Todas están situadas en una línea recta y,
 por comodidad, están numeradas del 1 al n en orden creciente. 
 La distancia entre dos ciudades adyacentes es igual a 1 kilómetro. 
 Dado que todas las carreteras del país están dirigidas, sólo es posible llegar a la ciudad y desde la ciudad x si x < y.
En una ocasión, Sasha decide hacer un viaje por el país y visitar todas las n ciudades. 
Se desplazará con la ayuda de su coche, Cheetah-2677. La capacidad del depósito de este modelo es de v litros, 
y gasta exactamente 1 litro de combustible por 1 kilómetro de camino. Al principio del viaje, el depósito está vacío. 
Sasha se encuentra en la ciudad con el número 1 y quiere llegar a la ciudad con el número n. Hay una gasolinera en cada ciudad. 
En la ciudad i-ésima, el precio de 1 litro de combustible es de i dólares. Es evidente que, en cualquier momento, 
el depósito puede contener como máximo v litros de combustible.
A Sasha no le gusta malgastar el dinero, por eso quiere saber cuál es la cantidad mínima de dinero 
que necesita para terminar el viaje si puede comprar combustible en cualquier ciudad que desee. 

¡Ayúdale a averiguarlo!

Entrada
La primera línea contiene dos enteros n y v (2 ≤ n ≤ 100, 1 ≤ v ≤ 100) - el número de ciudades en el país y la capacidad del tanque
Salida
Imprime un entero - la cantidad mínima de dinero que se necesita para terminar el viaje.

*/

/*
Consideraciones:
* 2 ≤ n ≤ 100, 1 ≤ v ≤ 100
* x < y; y es a la ciudad que queremos llegar
* v = litros de conbustible pero el carro gasta 1litro por c/km 
* precio de combustible = i dolares
*/

#include <iostream>

using namespace std;

// Funcion que soluciona el problema

int solution(int n, int v) {
    
    int aux = 0, canMoney= 0;// Variable para guardar la cantidad de dinero 
    if(v > n){ // Si los litros sobrepasan el valor de n, ya que no se usaran todos esos litro para llegar a una ciudad 
                // O mejor dicho "Cuando tenemos suficiente gasolina para viajrr"
        for(int i = 1; i < n; i++) // El for lo iniciamos en 1 ya que al empezar el camnio tenemos suficiente gasolina 
                                  // y no tendremos que recargar en la primera ciudad
            canMoney+= 1; // le sumamos 1 por cada ciudad ya que se gasta $1 al llegar a una ciudad
    
        return canMoney; // Retonarmos el resultado de lo que gastara de la gasolina que ya tiene
        
    }else{ // Si Sasha necesitara comprar gasolina para completar su viaje
        
        for(int i = v + 1; i < n; i ++ ){ // El for lo iniciamos en el valor de los litros que ya tiene
                                          // porque por el momento solo necesitamos saber cuanto debera comprar
                                         // de gasolina
             
                canMoney += 1; // le sumamos 1 por cada ciudad ya que se gasta $1 al llegar a una ciudad
        }
        
        return canMoney; // Retonarmos el resultado de lo que debe comprar de gssolina
    }
    
    
}

int main()
{
    int n, v; // Declaracion de variables
                // n = ciudades, v = litros
    
    // Solicitud de datos
    cout << "Ingrese el numero de n: " << "\n";
    cin >> n;
    cout << "Ingrese el valor de v: " << "\n";
    cin >> v;
    
    // Condicion para validar el rango de los datos
    if(((n >= 2) && (n <= 100)) && ((0 <= v) && (v <= 100))){
        if(v > n){
            // Enviamos los valores para obtener la cantidad de dinero y mostramos la informacion de
            // 1. Costo total, 2. cuando le sobra en litros de gasolina
            cout << "El costo total de ir a la ciudad " << n << " es: $" << solution(n, v) << ", y aun le sobran " 
            << v - solution(n, v) << "L de gasolina";    
        }else{
            // Enviamos los valores para obtener la cantidad de dinero y mostramos la informacion de
            // 1. Costo total, 2. cuanto debe gastar en comprar gasolina
            cout << "Debe comprar $" << solution(n, v) << " de gasolina." << "\n";
            cout << "El costo total de ir a la ciudad " << n << " es: $" << solution(n, v) + v;
        }
         
    }else{
        // si los datos no estan en el rango se le muestra el mensaje al usuario
        cout << "Datos invalidos! rango n&v(2 ≤ n ≤ 100 ; 1 ≤ v ≤ 100)";
    }
    
    return 0;
}

