// Queue - Cola

#include <iostream>
#include <queue> // Libreria para usar colas

using namespace std;

void queueFromLibrary();
void queueFromScratch();
void insertElement(int n, struct cola &q);
void deleteElement(struct cola &q);
void showQueue(struct cola q);


// Estructura de un Nodo
struct Node
{
    int dato;
    Node *next;
};

struct cola
{
    Node *frente;
    Node *atras;
};



int main(){

    // Cola usando libreria queue
    queueFromLibrary();
    cout << endl;
    cout << endl;
    queueFromScratch();
    
    return 0;
}


/* 
|Nombre |	Descripción
|empty  |	cierto (true) si el queue está vacio
|pop	|   borra el elemento en el tope del queue
|push   |   agrega un elemento en el tope del queue
|size   |   regresa el numero de elementos en el queue
*/

void queueFromLibrary(){
    queue<int> miCola; // Declaramos la pila, definimos el tipo de dato

    miCola.push(3); // Agregamos datos a la pila
	miCola.push(5);
	miCola.push(1);


    cout << "Mi Cola: tamanio = " << miCola.size() << endl;
	miCola.pop(); // Eliminamos 
	cout << "Mi Cola: tamanio = " << miCola.size() << endl; // Nuevo size de la pila
}


void queueFromScratch(){
    int element = 6, element2 = 5, element3 = 7, element4 = 10;
    struct cola q;

    q.atras = NULL;
    q.frente = NULL;
    

    insertElement(element, q);
    insertElement(element2, q);
    insertElement(element3, q);
    insertElement(element4, q);

    showQueue(q);
    deleteElement(q);
    showQueue(q);

}

void insertElement(int n, struct cola &q){ // Push
    struct Node *newNode = new Node(); // Creamos espacio en memoria

    newNode -> dato = n; // LLenamos el nodo con el dato
    newNode -> next = NULL; 

    if(q.frente == NULL)
    {
       q.frente = newNode; 
    }else{
        (q.atras) -> next = newNode; 
    }

    q.atras = newNode;
    
    cout << "el dato a sido agregado a la cola correctamente"<< endl;
}

void deleteElement(struct cola &q){ // Pop
    struct Node *aux;
    aux = q.frente;
    q.frente =(q.frente)->next;
    delete(aux); 
    
}

void showQueue(struct cola q){ // Mostramos todos los datos de la cola
    struct Node *aux;
    aux = q.frente;

    while (aux != NULL)
    {
        cout << aux -> dato << endl;
        aux = aux -> next;
    }
    
}