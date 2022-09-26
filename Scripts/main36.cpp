// Stack - Pila

#include <iostream>
#include <stack> // Libreria para usar pilas

using namespace std;
struct Node *mystack = NULL; // Declaramos nuestra pila como puntero y de tipo Nodo

void stackFromLibrary();
void stackFromScratch();
void insertElement(int n);
void deleteElement(Node *&myStack);
void showStack(Node *&myStack);


// Estructura de un Nodo
struct Node
{
    int dato;
    Node *next;
};


int main(){

    // Pila usando libreria stack
    stackFromLibrary();
    cout << endl;
    cout << endl;
    stackFromScratch();
    return 0;
}


/* 
|Nombre |	Descripción
|empty  |	cierto (true) si el stack está vacio
|pop	|   borra el elemento en el tope del stack
|push   |   agrega un elemento en el tope del stack
|size   |   regresa el numero de elementos en el stack
|top	|   regresa el último elemento en el stack 
*/

void stackFromLibrary(){
    stack<int> miPila; // Declaramos la pila, definimos el tipo de dato

    miPila.push(3); // Agregamos datos a la pila
	miPila.push(5);
	miPila.push(1);

    cout << "MiPila: El elemento superior = "<< miPila.top() << endl;
    cout << "MiPila: tamanio = " << miPila.size() << endl;
    cout << "La siguiente funcion MiPila.pop() elimina el elemento " << miPila.top() << endl;
	miPila.pop(); // Eliminamos
	cout << "MiPila: El elemento superior = "<< miPila.top() << endl;
	cout << "MiPila: tamanio = " << miPila.size() << endl; // Nuevo size de la pila
}


void stackFromScratch(){
    int element = 6, element2 = 5, element3 = 7, element4 = 10;

    // Al principio la pila esta vacia
    deleteElement(mystack);


    insertElement(element);
    insertElement(element2);
    insertElement(element3);
    insertElement(element4);

    showStack(mystack);
    deleteElement(mystack);
    showStack(mystack);

}

void insertElement(int n){ // Push
    struct Node *newNode = new Node(); // Creamos espacio en memoria

    newNode -> dato = n; // LLenamos el nodo con el dato
    newNode -> next = mystack; // Siguiente apunta a pila
    mystack = newNode; // Pila apuntara al nuevo nodo
    cout << "el dato a sido agregado a la pila correctamente"<< endl;
}

void deleteElement(Node *&myStack){ // Pop
    
    if(myStack != NULL){ // empty

        struct Node *temp = myStack; // Creamos un nodo auxiliar que apunte donde apunta la pila

        myStack = temp -> next; // Hacemos que pila apunte al siguiente nodo

        delete temp; // Eliminamos el nodo auxiliar
        cout << "se a eliminado el dato correctamente" << endl;
    }else{

        cout << "La pila esta vacia " << endl; // Cuando la pila esta vacia
    }
}

void showStack(Node *&myStack){ // Mostramos todos los datos de la pila
    struct Node *temp = myStack;
    struct Node *pilaTemp = myStack; // Utilizamos una pila temporal para no modificar la Original
    cout << "Los datos de la pila son: ";
    while (pilaTemp != NULL) // Verificamos que no este vacia
    {
        cout << pilaTemp -> dato << " "; // Mostramos el dato
        pilaTemp = pilaTemp -> next;
    }
    cout << endl;
}