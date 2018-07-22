# Descripción

En un futuro lejano, los olímpicos lograron traer a Karel-bot a la realidad y para probarlo le han puesto un camino de obstáculos compuesto por conexiones (caminos por los que puede pasar) y nodos (puntos en donde se juntan los caminos).

 - Karel-bot ha sido cargado con un mapa del camino y con la habilidad de poner puentes en lugar de zumbadores, ya que el camino de obstáculos está dividido en islas.

 - Dados los nodos y conexiones del camino de Karel-bot, deberás hacer un programa que te diga el mínimo número de puentes que deberá cargar para poder recorrer todo el camino.

# Entrada

En la primera linea, el número de nodos $ n $ y el número de conexiones $ c $. Despúes, $ c $ lineas con las conexiones entre 2 nodos $ a $ y $ b $. 

# Salida

Un entero $ n $ con la cantidad minima de puentes que deberá cargar Karel-bot.
# Ejemplo

||input
4 2
2 3
4 2
||output
1
||description
El camino consta de los nodos 1, 2, 3 y 4. Existe una conexión entre los nodos 2 y 3 y otra entre los nodos 4 y 2, por lo que para conectar todos los nodos solo falta 1 camino.
||end

# Límites

$ 1 \leq n,c \leq 1000 $