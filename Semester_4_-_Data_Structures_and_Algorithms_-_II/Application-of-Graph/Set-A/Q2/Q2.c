// Write a C program for the implementation of Dijkstra's Shortest Path First algorithm (Implement using Adjacency Matrix).

#include <stdio.h>

#define MATSIZE 8

void dijkstra (int v, int n, int cost[MATSIZE][MATSIZE]) {
    int i, j, u, w, count, min;
    int dist[10], visited[10] = {0};
    visited[v] = 1;
    for (i = 0; i < n; i++) {
        dist[i] = cost[v][i];
    }
    count = 2;
    while (count < n) {
        min = 999;
        for (i = 0; i < n; i++) {
            if (visited[i] == 0 && dist[i] < min) {
                min = dist[i];
                u = i;
            }
        }
        visited[u] = 1;
        for (w = 0; w < n; w++) {
            if (dist[u] + cost[u][w] < dist[w]) {
                dist[w] = dist[u] + cost[u][w];
            }
        }
        count++;
    }
    printf ("\nShortest distance from vertex %d are:\n", v);
    for (i = 0; i < n; i++) {
        printf ("%d\t", dist[i]);
    }
}

void main () {
    int cost[MATSIZE][MATSIZE] = {
        {0, 999, 999, 999, 999, 999, 999, 999},
        {30, 0, 999, 999, 999, 999, 999, 999},
        {100, 80, 0, 999, 999, 999, 999, 999},
        {999, 999, 120, 0, 999, 999, 999, 999},
        {999, 999, 999, 150, 0, 25, 999, 999},
        {999, 999, 999, 100, 999, 0, 90, 140},
        {999, 999, 999, 999, 999, 999, 0, 100},
        {170, 999, 999, 999, 999, 999, 999, 0}
    };
    dijkstra(4,8, cost);
}

/* Expected Output

Shortest distance from vertex 4 are:
335     325     245     125     0       25      115      165

*/