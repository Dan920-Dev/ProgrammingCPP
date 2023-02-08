/**
 * @brief Crear un programa en c++ que permita almacenar datos enteros aleatorios en una lista simple, 
 * el programa debe permitir insertar, mostrar todos los datos, invertir cada número almacenado,  
 * Mostrar el mayor y menor número almacenado y convertir los números que correspondan a  minúsculas según tabla ASCII.
 */

#include <iostream>
#include <time.h>

using namespace std;



// Estructura del nodo con el campo number para almacenar el numero aleatorio en cada nodo
// y next que apunta al siguiente nodo
struct Node{
    int number;
    Node* next;
};


Node *list = NULL; // Declaracion de lista como puntero, al principio apunta a NULL

// funcionesunciones propias para manejo de lista

// @brief Esta funcion ingresa datos al principio  de la lista
// @param number es el numero aleatorio que se guardara en el nuevo nodo
void insert(int number){
    Node* newNode = new Node();
    newNode -> number = number;
    newNode -> next = list;
    list = newNode;
    cout << newNode -> number << "\n";
}


/// @brief Esta funcion recorre la lista y muestra cada dato almacenado
void showList(){
    Node *aux = list;
    cout << "[ ";
    while (aux != NULL) {
        cout << aux -> number << " "; 
        aux = aux -> next;
    }
    cout << "]";
    cout << "\n";
}

// Esta funcion verifica si la lista esta vacia
bool isEmpty(){
    if(list==NULL){
        return true;
    }else{
        return false;
    }
}


void menu(); // Prototipo de funcion Menu

// Prototipo de funciones para manejo de los datos almacenados en la lista
void showInvertNums();
int invertNumber(int, int);
int randomNumber();
void numMayMin();
char convertToChar(int);
void showConvertNums();


int main()
{
    srand(time(NULL));
    bool continu = true;
    int option;
    
    do{
        
        menu();
        cin >> option;
        
        switch(option){
            case 1:
                insert(randomNumber());
                break;
            case 2:
                if(!isEmpty()){
                    showList(); 
                }else{
                   cout << "Lista Vacia" << "\n";
                }
                break;
            case 3:
                if(!isEmpty()){
                    showInvertNums();
                }else{
                   cout << "Lista Vacia" << "\n";
                }
                break;
            case 4:
                if(!isEmpty()){
                    numMayMin();
                }else{
                    cout << "Lista Vacia" << "\n";
                }
                break;
            case 5:
                if(!isEmpty()){
                    showConvertNums();
                }else{
                    cout << "Lista Vacia" << "\n";
                }
                break;
            case 6:
                if(!isEmpty()){
                    showList(); // Datos almacenados
                    showInvertNums(); // Datos invertidos
                    showConvertNums(); // caracteres
                    numMayMin();    // Mayor y menor
                }else{
                    cout << "Lista Vacia" << "\n";
                }
                break;
            case 7:
                continu = false;
                break;
            default:
                cout << "Opcion Invalida" << "\n";
                break;
        }
    }while(continu);

    return 0;
}

/// Esta funcion solo muestra el menu de opciones
void menu(){
    cout << "*** Opciones ***" << "\n";
    cout << "1. Insertar numero random a lista" << "\n";
    cout << "2. Mostrar lista" << "\n";
    cout << "3. Invertir numeros mayores a 99" << "\n";
    cout << "4. Numero mayor o menor de la lista" << "\n";
    cout << "5. Convertir numeros a caracteres" << "\n";
    cout << "6. Verificar opciones 2,3,4,5" << "\n";
    cout << "7. Salir..." << "\n";
    cout << "Elija su opcion: " << "\n";
}


// Esta funcion muestra los numeros almacenados pero de forma invertida haciendo uso/
// de la funcion convertToChar()
void showConvertNums(){
    Node *aux = list;
    cout << "[ ";
    while (aux != NULL) {
        
        if((aux -> number) >= 97 && (aux -> number) <= 122){
            cout << convertToChar(aux -> number) << " "; 
            aux = aux -> next;
        }else{
            cout << aux -> number<< " "; 
            aux = aux -> next; 
        }
    }
    cout << "]";
    cout << "\n";
}

/// Esta funcion retorna un caracter que corresponde a la letra del numero recibido segun tabla ASCII
/// Solo las minusculas que se encuentran entre 97 a 122
/// Fuente: https://elcodigoascii.com.ar
char convertToChar(int number){
    char c;
    c =  number + 0;
    return c;
}

/// Esta funcion muestra los numeros almacenados, pero cada dato se mostrara invertido mediante el uso de
/// la funcion invertNumber()
void showInvertNums(){
    Node *aux = list;
    cout << "[ ";
    while (aux != NULL) {
        cout << invertNumber(aux -> number, 0) << " "; 
        aux = aux -> next;
    }
    cout << "]";
    cout << "\n";
}

/// Esta funcion muestra el mayor y menor numero almacenado en la lista, al inicio los valores estan definidos
/// de forma que mayor y menor contienen los litites entre 0 a 201, ya que los valores que se generan
/// son entre 1 y 200
void numMayMin(){
    Node *aux = list;
    int min, may, current;
    
    min = 201;
    may = 0;
    
    while (aux != NULL) {
        
        if((aux -> number) < min){
           min = aux -> number; 
        }
        if((aux -> number) > may){
           may = aux -> number; 
        }
        aux = aux -> next;
    }
    
    cout << "Numero menor: " << min << ", numero mayor: " << may << "\n";
}

/// @brief Esta es una funcion recursiva que invierte los numeros enteros que se le ingresen
/// @param number es la variable para almacenar el numero que se invertira
/// @param result nos servira para almacenar el resultado de dividir numero/10
int invertNumber(int number, int result){
    if(number < 10){
        return number;
    }else{
        result = number / 10; 
        cout << (number % 10); 
        return invertNumber(result,0); 
    }
}


/// @brief Esta funcion genera numeros aleatorios entre 1 y 200 y lo guarda en variable num
/// @return un numero aleatorio cada que se invoca
int randomNumber(){
    int num;
    
    num = 1 + rand() % 200;

    return num;
}