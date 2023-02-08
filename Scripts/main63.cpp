/******************************************************************************

Crear un programa en c++ que guarde los registros de productos de una tienda que se dedica 
a la venta de laptops con los siguientes datos:

- Id (se debera agregar el id de forma que el indice del arreglo sea su ID)
- Nombre de productos
- Precio
- Marca

Luego se debera mostrar todos los productos con la informacion correspondiente.

*******************************************************************************/

#include <iostream>

using namespace std;


// Definimos nuestra estructura con los campos requeridos
struct productos{
  string nombre, marca;
  int precio, id;
}unProducto; // unProducto tendra acceso a todos los campos de nuestra estructura

void llenarArr(int n, productos *arrProductos){
    
    // Accedemos a nuestra estructura mediante unProducto para llenar cada indice del arreglo con un registro
    for (int i = 0; i < n; i++)
    {
        cout << "escriba los datos del producto " << i + 1 << endl;
        cout << "nombre: "; cin >> unProducto.nombre; cout << "\n";
        cout << "Precio: "; cin >> unProducto.precio; cout << "\n";
        cout << "Marca: "; cin >> unProducto.marca; cout << "\n";
        unProducto.id = i;
        arrProductos[i] = unProducto;
    }
}

void mostrarArr(int n, productos *arrProductos){

    // Recorremos el arreglo y mostramos cada registro guardado
    for (int i = 0; i < n; i++)
    {
        cout << "*----------------------------------*" << endl;
        cout << "nombre: " << arrProductos[i].nombre<< "\n";
        cout << "Precio: " << arrProductos[i].precio << "\n";
        cout << "Marca: " << arrProductos[i].marca<< "\n";
        cout << "ID: " << arrProductos[i].id << "\n";
        cout << "*----------------------------------*" << endl;
    }
}

// Funcion Principal

int main()
{
    // Solicitamos datos al usuario
    int n;
    cout<<"Digite la cantidad de productos a registrar" << endl;
    cin >> n;

    productos arrProductos[n]; // Declaramos nuestro arreglo de tipo productos

    llenarArr(n , arrProductos); // LLamamos la funcion para llenar el arreglo

    mostrarArr(n , arrProductos); // Mostramos el  arreglo con todos los registros


    return 0;
}