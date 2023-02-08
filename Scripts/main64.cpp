#include <iostream>

using namespace std;


struct usuarios{
  string nombre, apellido, direccion;
  int edad;
}unUsuario; 

void llenarArr(int n, usuarios *arrUsuarios){
    
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        cout << "escriba los datos del usuario " << i + 1 << endl;
        cout << "nombre: "; getline(cin, unUsuario.nombre); cout << "\n"; 
        cout << "Apellido: "; getline(cin, unUsuario.apellido); cout << "\n";
        cout << "Edad: "; cin >> unUsuario.edad; cout << "\n";cin.ignore();
        cout << "Direccion: "; getline(cin, unUsuario.direccion); cout << "\n";
        arrUsuarios[i] = unUsuario;
        
    }
}

void mostrarArr(int n, usuarios *arrUsuarios){

    for (int i = 0; i < n; i++)
    {
        cout << "*----------------------------------*" << endl;
        cout << "nombre: " << arrUsuarios[i].nombre<< "\n";
        cout << "Apellido: " << arrUsuarios[i].apellido << "\n";
        cout << "Edad: " << arrUsuarios[i].edad<< "\n";
        cout << "Direccion: " << arrUsuarios[i].direccion << "\n";
        cout << "*----------------------------------*" << endl;
    }
}


void menorYmayor(int n, usuarios *arrUsuarios){
    int menores = 0, mayores = 0; 

    for (int i = 0; i < n; i++)
    {
        if(arrUsuarios[i].edad > 17){
            mayores++;
        }else{
            menores++;
        }
    }



    cout << "El total de menores de edad es: " << menores << "\n";
    cout << "El total de mayores de edad es: " << mayores << "\n";

    usuarios arrMenores[menores];
    usuarios arrMayores[mayores];

    menores = 0, mayores =0;

    for (int i = 0; i < n; i++)
    {
        if(arrUsuarios[i].edad > 17){
            arrMayores[mayores] = arrUsuarios[i];
            mayores++;
        }else{
            arrMenores[menores] = arrUsuarios[i];
            menores++;
        }
    }
    cout << " *** Los Mayores de edad son: ***" << "\n";

    for (int i = 0; i < mayores; i++)
    {
        cout << "Nombre: " << arrMayores[i].nombre << "\n";
        cout << "Apellido: " << arrMayores[i].apellido << "\n";
        cout << "Edad: " << arrMayores[i].edad << "\n";
        cout << "direccion: " << arrMayores[i].direccion << "\n";
    }

    cout << "*** Los menores de edad son ***" << "\n";
    for (int i = 0; i < menores; i++)
    {
        cout << "Nombre: " << arrMenores[i].nombre << "\n";
        cout << "Apellido: " << arrMenores[i].apellido << "\n";
        cout << "Edad: " << arrMenores[i].edad << "\n";
        cout << "direccion: " << arrMenores[i].direccion << "\n";
    }
 
}

// Funcion Principal

int main()
{
    // Solicitamos datos al usuario
    int n;
    cout<<"Digite la cantidad de usuarios a verificar" << endl;
    cin >> n;
    usuarios arrUsuarios[n]; 
    llenarArr(n , arrUsuarios); 
    mostrarArr(n , arrUsuarios);  // Arreglo con todos los datos
    menorYmayor(n, arrUsuarios); // muestra por separado los menores y mayores

    return 0;
}