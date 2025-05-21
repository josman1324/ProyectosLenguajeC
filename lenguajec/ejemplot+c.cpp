#include <stdio.h>
#include <limits.h>

#define V 7 // Número de vértices en el grafo

// Función para encontrar el vértice con la distancia mínima
int minDistance(int dist[], bool sptSet[]) {
    int min = INT_MAX, min_index;
  
    for (int v = 0; v < V; v++)
        if (sptSet[v] == false && dist[v] <= min)
            min = dist[v], min_index = v;
  
    return min_index;
}

// Función para imprimir la solución (distancias desde el nodo fuente)
void printSolution(int dist[]) {
    printf("Nodo \t Distancia desde el nodo A\n");
    for (int i = 0; i < V; i++)
        printf("%c \t %d\n", 'A' + i, dist[i]);
}

// Función que implementa el algoritmo de Dijkstra
void dijkstra(int graph[V][V], int src) {
    int dist[V]; // Arreglo para almacenar las distancias más cortas desde el nodo fuente
    bool sptSet[V]; // Conjunto de nodos ya incluidos en el árbol de caminos más cortos o permanentes
  
    // Inicializar todas las distancias como infinito y el conjunto SPT como vacío
    for (int i = 0; i < V; i++)
        dist[i] = INT_MAX, sptSet[i] = false;
  
    // La distancia del nodo fuente a sí mismo siempre es 0
    dist[src] = 0;
  
    // Encontrar el camino más corto para todos los vértices
    for (int count = 0; count < V - 1; count++) {
        // Seleccionar el vértice con la distancia mínima del conjunto de vértices aún no procesados
        int u = minDistance(dist, sptSet);
        // Marcar el vértice seleccionado como procesado
        sptSet[u] = true;
  
        // Actualizar el valor de la distancia de los vértices adyacentes al vértice seleccionado
        for (int v = 0; v < V; v++)
            // Actualizar dist[v] solo si no está en sptSet, hay una arista de u a v y
            // si la distancia total a v a través de u es menor que la distancia actualmente almacenada en dist[v]
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
    }
  
    // Imprimir las distancias más cortas
    printSolution(dist);
}

int main() {
    // Grafo representado como una matriz de adyacencia
    int graph[V][V] = {
        {0, 2, 6, 0, 0, 0, 0},
        {2, 0, 0, 5, 0, 0, 0},
        {6, 0, 0, 8, 0, 0, 0},
        {0, 5, 8, 0, 10, 15, 0},
        {0, 0, 0, 10, 0, 6, 2},
        {0, 0, 0, 15, 6, 0, 6},
        {0, 0, 0, 0, 2, 6, 0}
    };

    // Llamar a la función Dijkstra con el nodo fuente (A)
    dijkstra(graph, 0);
  
}
