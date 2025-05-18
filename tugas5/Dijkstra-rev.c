#include <stdio.h>
#include <limits.h>

#define V 5  
#define INF INT_MAX  

int minDistance(int dist[], int visited[]) {
    int min = INF, min_index = -1;

    for (int v = 0; v < V; v++) {
        if (!visited[v] && dist[v] <= min) {
            min = dist[v];
            min_index = v;
        }
    }
    return min_index;
}

void dijkstra(int graph[V][V], int src) {
    int dist[V];    
    int visited[V]; 

    for (int i = 0; i < V; i++) {
        dist[i] = INF;
        visited[i] = 0;
    }

    dist[src] = 0; 

    for (int count = 0; count < V - 1; count++) {
        int u = minDistance(dist, visited);
        if (u == -1) break; 

        visited[u] = 1;  

        for (int v = 0; v < V; v++) {
            if (!visited[v] && graph[u][v] != INF && dist[u] != INF &&
                dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    printf("Vertex\tJarak dari Sumber\n");
    for (int i = 0; i < V; i++) {
        printf("%d\t", i);
        if (dist[i] == INF)
            printf("INF\n");
        else
            printf("%d\n", dist[i]);
    }
}

int main() {
    int graph[5][5] = {
        {0, 70, 60, 30, 100},
        {70, 0, 50, 40, 70},
        {60, 50, 0, 20, 10},
        {30, 40, 20, 0, 60},
        {100, 70, 10, 60, 0}
    };
    

    int sumber = 0;  
    dijkstra(graph, sumber);
    return 0;
}
