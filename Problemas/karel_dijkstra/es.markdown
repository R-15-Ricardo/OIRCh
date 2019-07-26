# Descripción

Despues de que Karel-bot superó el reto de los puentes sin ningun problema, los olimpicos quisieron probarlo bajo nuevas circunstancias.
Ahora, se le ha dado la tarea de recolectar un zumbador colocado en alguna de las islas de manera que siempre vaya hacia él de la manera optima.

Ahora, el mapa de Karel-bot ha sido cargado con las cordenadas euclidianas $(x_i,y_i)$ para cada una de las islas $i$ de manera que tu tarea es escribir un programa que dada la cantidad de islas, la cantidad de puentes, las conexiones en los puentes, las coordenadas de las islas y la isla con el zumbador, te regrese el camino optimo y su longitud.

Asume que Karel-bot, siempre comienza en la isla "1".

# Entrada

Dos enteros $n$ y $p$ separados por un espacio, después $n$ lineas con enteros $x$ y $y$ de manera que la i'ésima linea representa la i'esima isla, seguido, $p$ lineas con enteros $a$, $b$ que representen la conexión entre dos puentes y finalmente un entero $i$ para la isla con el zumbador.

# Salida

En la primera linea, una cadena de enteros que represente el camino que debe de seguir Karel-bot y en la segunda un $x\in \mathbb{R}$ con la longitud total del este camino.

Deberá imprimir solo -1 si no es posible llegar a esa isla.

# Ejemplo

||input
3 5
111
101
101
100
111
||output
111
111
101
101
100
||end

# Límites

$0< n \leq 1000$

$0< m \leq 10^6$
