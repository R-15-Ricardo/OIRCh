# Descripción

En un futuro no muy lejano, los olimpicos de compu lograron construir una versión física de Karel, y para probarlo, le hicieron recorrer un mapa que consiste de islas conectadas por puentes.

Karel-bot ha sido cargado con un mapa de las islas y con la habilidad de poner puentes en lugar de zumbadores, ya que puede que no todas las islas sean accesibles con los puentes ya colocados.

Dadas las islas y los puentes en el mapa de Karel-bot, deberás hacer un programa que te diga el mínimo número de puentes que deberá cargar para poder recorrer todo el mapa.

# Entrada

En la primera linea, el número de islas $ n $ y el número de puentes $ p $. Despúes, $ p $ lineas representando las conexiones entre 2 islas $ a $ y $ b $ por medio de un puente.

# Salida

Un entero $ m $ con la cantidad mínima de puentes que deberá colocar Karel-bot.

# Ejemplo

||input
4 2
2 3
4 2
||output
1
||description
El mapa consta de las islas 1, 2, 3 y 4. Existe un puente entre las islas 2 y 3, y otro entre las islas 4 y 2, por lo que para conectar todos los nodos solo falta un puente que conecte con la isla 1.
||end

# Límites

$ 1 \leq n,p \leq 1000 $
