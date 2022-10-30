// Lista Simple

#include <iostream>
#include <string.h>

using namespace std;

struct Nodo 
{
        
        int dato;
        Nodo *sig;
};

// Prototipos de funcion
void menu();

void insertarInicio(Nodo *&Lista, int edad);

void insertarFinal(Nodo *&Lista, int edad);

void mostrarLista(Nodo *&Lista);

void eliminarDato(Nodo *&Lista, int dato);


int main()
{

        Nodo *lista = NULL;
        int opcion, dato, datoDelete;

        do
        {
                menu();
                cout << "Digite una opcion: " << endl;
                cin >> opcion;
                cin.ignore();
                switch (opcion)
                {
                case 1:
                        
                        cout << "Ingrese un dato: " << endl;
                        cin >> dato;
                        insertarInicio(lista, dato);
                        break;
                case 2:
                        
                        cout << "Ingrese un dato: " << endl;
                        cin >> dato;
                        insertarFinal(lista, dato);
                        break;
                case 3:
                        mostrarLista(lista);
                        break;
                case 4: 
                        cout << "Ingrese el valor del dato a eliminar: " << endl;
                        cin >> datoDelete;
                        eliminarDato(lista, datoDelete);
                default:
                        cout << "Opcion invalida " << endl;
                        break;
                }
        } while (opcion <= 5);
        


        return 0;
}

// Funcion - Menu

void menu(){
        cout << endl;
        cout << "*** Menu ***" << endl;
        cout << "1. Insertar al inicio." << endl;
        cout << "2. Insertar al final." << endl;
        cout << "3. Mostrar Lista." << endl;
        cout << "4. Elimianr Dato." << endl;
        cout << "5. Salir." << endl;
        cout << endl;
}

// Funcion - Insertar al inicio

void insertarInicio(Nodo *&Lista, int dato){
        struct Nodo *nuevoNodo = new Nodo();
        nuevoNodo -> dato = dato;
        nuevoNodo ->sig = Lista;
        Lista = nuevoNodo;
}

// Funcion - Insertar al final

void insertarFinal(Nodo *&Lista, int dato){
        struct Nodo *aux, *nuevoNodo = new Nodo();

        nuevoNodo -> dato = dato;

        if(Lista == NULL){

                Lista = nuevoNodo;

        }else{
                aux = Lista;

                 while(aux -> sig != NULL)
                {
                        aux = aux -> sig;
                        
                }

                aux -> sig = nuevoNodo;
        }
}

// Funcion - Mostrar Lista

void mostrarLista(Nodo *&Lista){

        struct Nodo *aux = Lista;

        while(aux != NULL)
     {
        cout << "Dato: " << aux -> dato << endl;
        aux = aux -> sig;
     }
}

// Funcion - Eliminar

void eliminarDato(Nodo *&Lista, int dato){
    struct Nodo *aux = Lista;
    struct Nodo *eliminar;

        while(aux != NULL)
     {
         if (aux->sig != nullptr && (aux->sig) -> dato == dato) { //Este es el caso en que el siguiente nodo se debe eliminar
               eliminar = aux->sig;
               aux -> sig = eliminar->sig;
               delete eliminar;
           }
           else {  //El siguiente nodo no se debe eliminar o no hay siguiente, entonces avanzamos
               aux = aux->sig;
           }
     }

   
}



