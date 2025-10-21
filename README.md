# **Laboratorio 04 – Grafos (Listas de Adyacencia)**

Este laboratorio presenta la implementación y análisis de estructuras de datos para grafos utilizando **listas de adyacencia**, empleando la cabecera `graph.h` como base para la representación del grafo. A partir de esta estructura principal se desarrollan diversas operaciones fundamentales, entre ellas el cálculo de grados de vértices, inserción y eliminación de arcos/aristas, verificación de si un grafo es no dirigido y el cálculo del grado máximo, entre otros.

A continuación se listan los ejercicios propuestos:

1. Considere el problema de decidir si un vértice v es aislado en un grafo G ¿Cuánto tiempo consume la solución del problema?. Dé su respuesta en función del número de vértices del grafo.
2. Escriba una función GRAPHindeg() que calcule el grado de entrada de un vértice v de un grafo G. Escribe una función GRAPHoutdeg() que calcule el grado de salida de v.
3. Consideremos el problema de decidir si dos vértices son adyacentes en un grafo G. ¿Cuánto tiempo se tarda en resolver este problema? De su respuesta en función del número de vértices y arcos del grafo.
4. Escribe una función GRAPHshow() que imprima todos los vértices adyacentes a v en una línea para cada vértice v del grafo G.
5. Escribe una función GRAPHdestroy() que destruya la representación de un grafo G, liberando el espacio que la representación ocupa en memoria.
6. Eliminación de arcos. Escriba una función GRAPHremoveArc() que tome dos vértices v y w de un grafo G representado por listas de adyacencia y elimine el arco v-w de G.
7. ¿No dirigido? Escriba una función GRAPHundir() que decida si un grafo dado es no dirigido.
8. Inserción de aristas. Escribe una función UGRAPHinsertEdge() que inserte una arista v-w en un grafo no dirigido G.
9. Eliminación de aristas. Escribe una función UGRAPHremoveEdge() que elimine una arista dada v-w de un grafo no dirigido G.
10. Grado Máximo. Escribe una función UGRAPHdegrees() que toma un grafo no dirigido y devuelve el grado máximo de un grafo.
