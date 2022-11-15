#include <iostream>
using namespace std;


// Creamos la clase usando la palabra reservada "class"

class Operacion{
    // los datos se colocan privados para que no se puedan 
    // modificar mas que por medio de los metodos que son publicos
    private:
        int datoA;
        int datoB;

    // Metodos
    public:

        Operacion(int, int); // Constructor de la clase para inicializar los datos que recibira

        // Metodo sumar
        int suma();

        // Metodo restar
        int resta();

        // Metodo dividir
        float division();

        // Metodo multiplicar
        int multiplicacio();
};


// Nuestro constructor recibe dos datos los cuales usaremos para las operaciones
Operacion::Operacion(int _datoA, int _datoB){
    datoA = _datoA;
    datoB = _datoB;
}


//Operaciones basicas
int Operacion::suma(){
    return datoA + datoB;
}

int Operacion::resta(){
    return datoA - datoB;
}

float Operacion::division(){
    return datoA / datoB;
}

int Operacion::multiplicacio(){
    return datoA * datoB;
}



int main(){

    // Creamos objeto op1

    Operacion op1(10, 3); // esto es equivalente a: Operacion op1 = Operacion(10, 3);

    cout << "Suma entre 10 y 3 es: " << op1.suma() << endl;
    cout << "Resta entre 10 y 3 es: " << op1.resta() << endl;
    cout << "Multiplicacion entre 10 y 3 es: " << op1.multiplicacio() << endl;
    cout << "Division entre 10 y 3 es: " << op1.division() << endl;

    return 0;
}