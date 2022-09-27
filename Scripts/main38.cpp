#include <iostream>

using namespace std;

struct Nodo *miPila = NULL;

struct Nodo
{
    string nombre;
    float precio;
    Nodo *Sig;
};

void mostrarPila();
void agregarOrden(int);


int main() {
    int datos;

    cout << "ingrese el numero de datos" << endl;
    cin >> datos;

    
    agregarOrden(datos);

    cout << endl;

    mostrarPila();
    

    return 0;
}

void mostrarPila(){
    struct Nodo *aux = miPila;
    cout << "Mostrando datos" << endl;

    while (miPila != NULL)
    {
        
        cout << "Nombre: " << aux -> nombre << endl;
        cout << "Precio: " << aux -> precio << endl;
        aux = aux -> Sig;
        cout << endl;
    }

    
}

void agregarOrden(int datos){
    for (int i = 0; i < datos; i++)
    {
        struct Nodo *nuevoNodo = new Nodo();

        cout << "ingrese el nombre de la pizza" << endl;
        cin >> nuevoNodo -> nombre;
        cout << "ingrese el nombre de la pizza" << endl;
        cin >> nuevoNodo -> precio;

        nuevoNodo -> Sig = miPila;
        miPila = nuevoNodo;

        cout << "Se a agregado la orden correctamente" << endl;
    }
}