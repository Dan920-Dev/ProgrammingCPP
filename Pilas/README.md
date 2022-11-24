# Programming in C++

Dar click al titulo del ejercicio para acceder al script de la solucion 😃.


## Ejemplos sobre Pilas.

1. [Ejercicio 1](/Scripts/main38.cpp): Realice un programa en el que se puedan almacenar (utilizando pilas) los registros de las cajas de pizza que son ordenadas en un restaurante, cada registro debe de incluir: nombre de la pizza y precio.
Debe agregar dos o más pizzas a la pila (pueden agregarlas desde el código)

    El programa deberá mostrar la información de las pizzas almacenadas

    Ejemplo:

    Pizza:
    Nombre: Pizza de jamón
    Precio: 19.99

2. [Ejercicio 2](/Scripts/main39.cpp): Elabore un código en C++ que al manipular una pila ingrese la cantidad de datos por consola que desee el usuario, y finalmente muestre todo el contenido de la pila, tome en cuenta que la pila debe manejar un struct con la siguiente estructura:

```cpp
struct Nodo
{
    int id;
    string nombre;
    Nodo *siguiente;
}
```