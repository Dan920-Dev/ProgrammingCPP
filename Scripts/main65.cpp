/*
Escriba un programa en c++, donde se llenen los datos de una persona:
- Nombre (Debe hacer uso de typedef para cambiar de string a cadena)
- Edad
Ademas se debe agregar una enumeracion con los dias de la semana 
y luego elejir un dia de la semana como favorito(Este puede ser un dato quemado)
*/

#include <iostream>

using namespace std;


// Uso de enumeraciones
enum Dia {Lunes, Martes, Miercoles, Jueves, Viernes, Sabado, Domingo};

// Uso de typedef
typedef string cadena;


// Struct 
struct Datos{
    cadena nombre;
    int edad;
};

Datos unaPersona;

void llenarDatos(){
    Dia diaFav;
    
    cout << "Digite su nombre: ";
    getline(cin, unaPersona.nombre);
    cout << "Digite su edad: ";
    cin >> unaPersona.edad;

    // Elejimos un dia
    diaFav = Miercoles;
    // El switch nos ayuda a mostrar un mensaje junto al nombre de la persona y el dia que se elijio como favorito
   switch (diaFav)
   {
   case Lunes:
        cout << unaPersona.nombre << " Has elegido Lunes como tu dia favorito" << "\n";
    break;
   case Martes:
        cout << unaPersona.nombre << " Has elegido Martes como tu dia favorito" << "\n";
    break;
    case Miercoles:
        cout << unaPersona.nombre << " Has elegido Miercoles como tu dia favorito" << "\n";
    break;
    case Jueves:
        cout << unaPersona.nombre << " Has elegido Jueves como tu dia favorito" << "\n";
    break;
    case Viernes:
        cout << unaPersona.nombre << " Has elegido Viernes como tu dia favorito" << "\n";
    break;
   default:
        cout << unaPersona.nombre << " Este dia no es de la semana" << endl;
    break;
   }

}


int main(){

    // Llamamos la funcion 
    llenarDatos();
    
   
    return 0;
}