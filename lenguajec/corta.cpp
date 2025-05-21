#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define INF 9999
#define V 5 // Número de lugares importantes en la ciudad

// Función para encontrar el nodo no visitado con la distancia mínima
int minDistance(int dist[], bool visited[]) {
    int min = INF, min_index;

    for (int v = 0; v < V; v++) {
        if (!visited[v] && dist[v] <= min) {
            min = dist[v];
            min_index = v;
        }
    }

    return min_index;
}

// Función para encontrar la ruta más corta usando el algoritmo de Dijkstra
void dijkstra(int graph[V][V], int src, int dest, char places[][50]) {
    int dist[V];
    bool visited[V] = {false};

    for (int i = 0; i < V; i++) {
        dist[i] = INF;
    }

    dist[src] = 0;

    for (int count = 0; count < V - 1; count++) {
        int u = minDistance(dist, visited);
        visited[u] = true;

        for (int v = 0; v < V; v++) {
            if (!visited[v] && graph[u][v] && dist[u] != INF && dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    printf("La distancia más corta desde %s hasta %s es: %d\n", places[src], places[dest], dist[dest]);
}

int main() {
    char places[V][50] = {"Casa", "Trabajo", "Supermercado", "Escuela", "Parque"};

    int graph[V][V] = {
        {0, 4, 0, 0, 0},
        {4, 0, 6, 0, 0},
        {0, 6, 0, 3, 0},
        {0, 0, 3, 0, 7},
        {0, 0, 0, 7, 0}
    };

    printf("Lista de lugares:\n");
    for (int i = 0; i < V; i++) {
        printf("%d. %s\n", i, places[i]);
    }

    int origen, destino;

    printf("\nIngresa el número del lugar de origen (0 a %d): ", V - 1);
    scanf("%d", &origen);

    printf("Ingresa el número del lugar de destino (0 a %d): ", V - 1);
    scanf("%d", &destino);

    if (origen < 0 || origen >= V || destino < 0 || destino >= V) {
        printf("Los números de lugar deben estar entre 0 y %d\n", V - 1);
        return 1;
    }

    dijkstra(graph, origen, destino, places);

    return 0;
}

