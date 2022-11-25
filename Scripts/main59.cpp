/*
A Jill le gusta andar en bicicleta, pero dado que la hermosa ciudad de Greenhills donde vive ha crecido,
Jill suele utilizar el excelente sistema de autobuses públicos para parte de su viaje. 
Tiene una bicicleta plegable que lleva consigo cuando usa el autobús para la primera parte de su viaje. 
Cuando el autobús llega a algún lugar agradable de la ciudad, Jill se baja y monta en bicicleta. 
Sigue la ruta del autobús hasta que llega a su destino o 
llega a una parte de la ciudad que no le gusta. En este último caso, 
abordará el autobús para finalizar su viaje.

A lo largo de años de experiencia, Jill ha calificado cada camino en una escala de números enteros de "amabilidad". 
Los valores positivos de amabilidad indican caminos que le gustan a Jill; los valores negativos se utilizan para las carreteras que no le gustan. 
No hay valores cero. Jill planifica dónde dejar el autobús y comenzar a andar en bicicleta, así como dónde dejar de andar en bicicleta y volver a unirse al autobús, 
de modo que se maximice la suma de valores agradables de las carreteras en las que anda en bicicleta. Esto significa que a veces andará en bicicleta por un camino que no le gusta, 
siempre que se una con otras dos partes de su viaje que involucran caminos que le gustan lo suficiente como para compensar. Puede ser que ninguna parte de la ruta sea apta para andar en bicicleta, 
por lo que Jill toma el autobús para todo el recorrido. Por el contrario, puede ser que toda la ruta sea tan agradable que Jill no use el autobús en absoluto.
Dado que hay muchas rutas de autobús diferentes, cada una con varias paradas en las que Jill podría subir o bajar del autobús, siente que un programa de computadora 
podría ayudarla a identificar la mejor parte para andar en bicicleta en cada ruta de autobús.

Aporte
El archivo de entrada contiene información sobre varias rutas de autobús. La primera línea del archivo es un único entero b que representa el número de descripciones de ruta en el archivo. 
El identificador de cada ruta (r) es el número de secuencia dentro del archivo de datos, 1 <= r <= b. Cada descripción de ruta comienza con el número de paradas en la ruta: un número entero s, 2 <= s <= 20,000 
en una línea por sí mismo. El número de paradas va seguido de s - 1 líneas, cada línea i (1 <= i < s) es un número entero n_i, 
que representa la evaluación de Jill de la calidad del camino entre las dos paradas i e i + 1.

Producción
Para cada ruta r en el archivo de entrada, su programa debe identificar la parada de autobús inicial i y la parada de autobús final j que corresponden al segmento de la ruta que produce la suma máxima de amabilidad, 
m = n_i + n_i+1 + .. .+n_j-1. Si más de un segmento es agradable al máximo, elija el que tenga el paseo en bicicleta más largo (mayor j - i). Para romper los empates en los segmentos máximos más largos, 
elija el segmento que comienza con la primera parada (menor i). Para cada ruta r en el archivo de entrada, imprima una línea en el formulario:

La parte más bonita de la ruta r está entre las paradas i y j
Sin embargo, si la suma máxima no es positiva, su programa debería imprimir:

La ruta r no tiene partes bonitas
*/