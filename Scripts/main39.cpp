#include <iostream>

using namespace std;

struct Nodo *miPila = NULL;

struct Nodo
{
    string nombre;
    int id;
    Nodo *Siguiente;
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

    while (aux != NULL)
    { 
        cout << "Nombre: " << aux -> nombre << endl;
        cout << "ID: " << aux -> id << endl;
        aux = aux -> Siguiente;
        cout << endl;
    }
 
}

void agregarOrden(int datos){
    for (int i = 0; i < datos; i++)
    {
        struct Nodo *nuevoNodo = new Nodo();

        cout << "ingrese el nombre de la persona" << endl;
        cin >> nuevoNodo -> nombre;
        cout << "ingrese el ID de la persona" << endl;
        cin >> nuevoNodo -> id;

        nuevoNodo -> Siguiente = miPila;
        miPila = nuevoNodo;

        cout << "Se a agregado la orden correctamente" << endl;
    }
}