// Write a C program for the implementation of Dijkstra's Shortest Path First algorithm (Implement using Adjacency Matrix).

#include <stdio.h>

#define MAX_VERTICES 5
#define INF 9999

// Function to choose the unvisited vertex with the smallest distance
int choose(int n, int dist[MAX_VERTICES], int visited[MAX_VERTICES]) {
    int u = -1, min = INF, i;
    for (i = 0; i < n; i++) {
        if (!visited[i] && dist[i] < min) {
            min = dist[i];
            u = i;
        }
    }
    return u;
}

void dijkstra(int v, int n, int cost[MAX_VERTICES][MAX_VERTICES]) {
    int i, j, u, w, count;
    int dist[MAX_VERTICES], visited[MAX_VERTICES] = {0};

    // Initialize the distance array
    for (i = 0; i < n; i++) {
        dist[i] = cost[v][i];  // Set the initial distance from the source vertex
    }

    visited[v] = 1;  // Mark the source as visited
    count = 1;  // We start with the source as visited

    // Main loop for Dijkstra's algorithm
    while (count < n) {
        // Call the choose function to get the vertex u with the smallest distance
        u = choose(n, dist, visited);
        
        if (u == -1) break;  // In case no valid vertex was found, exit the loop
        
        visited[u] = 1;  // Mark the chosen vertex as visited
        count++;  // Increase the count of visited vertices

        // Update the distance values for adjacent vertices
        for (w = 0; w < n; w++) {
            if (!visited[w] && cost[u][w] != INF && dist[u] + cost[u][w] < dist[w]) {
                dist[w] = dist[u] + cost[u][w];
            }
        }
    }

    // Print the shortest distances from the source vertex
    printf("\nShortest distances from vertex %d are:\n", v);
    for (i = 0; i < n; i++) {
        if (dist[i] == INF) {
            printf("INF\t");  // Use "INF" for unreachable vertices
        } else {
            printf("%d\t", dist[i]);
        }
    }
    printf("\n");
}

void main() {
    // int cost[MAX_VERTICES][MAX_VERTICES] = {
    //     {0, INF, INF, INF, INF, INF, INF, INF},
    //     {30, 0, INF, INF, INF, INF, INF, INF},
    //     {100, 80, 0, INF, INF, INF, INF, INF},
    //     {INF, INF, 120, 0, INF, INF, INF, INF},
    //     {INF, INF, INF, 150, 0, 25, INF, INF},
    //     {INF, INF, INF, 100, INF, 0, 90, 140},
    //     {INF, INF, INF, INF, INF, INF, 0, 100},
    //     {170, INF, INF, INF, INF, INF, INF, 0}
    // };

    int cost[MAX_VERTICES][MAX_VERTICES] = {
        {0  , 10 , 3  , INF, INF},
        {INF, 0  , 1  , 2  , INF},
        {INF, 4  , 0  , 8  , 2  },
        {INF, INF, INF, 0  , 7  },
        {INF, INF, INF, 9  , 0  }
    };

    dijkstra(0, MAX_VERTICES, cost);
}

/*
  Expected Output for example 1:
  Shortest distances from vertex 4 are:
  335     325     245     125     0       25      115      165

  Expected Output for example 2:
  Shortest distances from vertex 0 are:
  0       7       3       9       5
*/