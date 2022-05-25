/* 
Solicite el nombre y calcule el promedio de 3 notas para 5 estudiantes. 
Imprimir los promedios y nombres de estudiantes.
*/

#include <iostream>

using namespace std;

int main() {

    string nombre1, nombre2, nombre3, nombre4, nombre5;
    int nota1, nota2, nota3;
    float prome1 = 0, prome2 = 0, prome3 = 0, prome4 = 0, prome5 = 0;


    for (int i = 0; i < 5; i++)
    {

        // Para el primer estudiante
        if(i == 0){

            cout << "Ingrese el nombre del estudiante 1" << endl;
            getline(cin, nombre1); 

            for (int j = 0; j < 3; j++)
            {
                if(j == 0){
                    cout << "ingrese su nota" << " " << j + 1<< endl;
                    cin >> nota1;
                }else{
                    if(j == 1){
                    cout << "ingrese su nota" << " " << j + 1<< endl;
                    cin >> nota2;
                    }else{
                        cout << "ingrese su nota" << " " << j + 1<< endl;
                        cin >> nota3; cin.ignore();
                    }
                }
                 
            }

            prome1 = (nota1 + nota2 + nota3) / 3;
            
        }

        if(i == 1){

            cout << "Ingrese el nombre del estudiante 2" << endl;
            getline(cin, nombre2); 

            for (int j = 0; j < 3; j++)
            {
               if(j == 0){
                    cout << "ingrese su nota" << " " << j + 1<< endl;
                    cin >> nota1;
                }else{
                    if(j == 1){
                    cout << "ingrese su nota" << " " << j + 1<< endl;
                    cin >> nota2;
                    }else{
                        cout << "ingrese su nota" << " " << j + 1<< endl;
                        cin >> nota3; cin.ignore();
                    }
                }
            }
            prome2 = (nota1 + nota2 + nota3) / 3;
        }
        if(i == 2){

            cout << "Ingrese el nombre del estudiante 3" << endl;
            getline(cin, nombre3); 

            for (int j = 0; j < 3; j++)
            {
                if(j == 0){
                    cout << "ingrese su nota" << " " << j + 1<< endl;
                    cin >> nota1;
                }else{
                    if(j == 1){
                    cout << "ingrese su nota" << " " << j + 1<< endl;
                    cin >> nota2;
                    }else{
                        cout << "ingrese su nota" << " " << j + 1<< endl;
                        cin >> nota3; cin.ignore();
                    }
                }
            }
            prome3 = (nota1 + nota2 + nota3) / 3;
        }
        if(i == 3){

            cout << "Ingrese el nombre del estudiante 4" << endl;
            getline(cin, nombre4); 

            for (int j = 0; j < 3; j++)
            {
                if(j == 0){
                    cout << "ingrese su nota" << " " << j + 1<< endl;
                    cin >> nota1;
                }else{
                    if(j == 1){
                    cout << "ingrese su nota" << " " << j + 1<< endl;
                    cin >> nota2;
                    }else{
                        cout << "ingrese su nota" << " " << j + 1<< endl;
                        cin >> nota3; cin.ignore();
                    }
                }
            }
            prome4 = (nota1 + nota2 + nota3) / 3;
        }
        if(i == 4){
            
            cout << "Ingrese el nombre del estudiante 5" << endl;
            getline(cin, nombre5); 

            for (int j = 0; j < 3; j++)
            {
                if(j == 0){
                    cout << "ingrese su nota" << " " << j + 1<< endl;
                    cin >> nota1;
                }else{
                    if(j == 1){
                    cout << "ingrese su nota" << " " << j + 1<< endl;
                    cin >> nota2;
                    }else{
                        cout << "ingrese su nota" << " " << j + 1<< endl;
                        cin >> nota3; cin.ignore();
                    }
                }
            }
            prome5 = (nota1 + nota2 + nota3) / 3;
        }
    }

    // Mostrando Resultados

    cout << nombre1 << " promedio: " << prome1 << endl;
    cout << nombre2 << " promedio: " << prome2 << endl;
    cout << nombre3 << " promedio: " << prome3 << endl;
    cout << nombre4 << " promedio: " << prome4 << endl;
    cout << nombre5 << " promedio: " << prome5 << endl;
    

    return 0;
}