// Write a C program that accepts the vertices and edges of a graph and stores it as an adjacency matrix.
// Implement funtions to traverse the graph using Depth First Search(DFS).

#include <stdio.h>
#define MAX_MATSIZE 5

void recdfs(int m[MAX_MATSIZE][MAX_MATSIZE], int n, int v) {
    int w;
    static int visited[20] = {0};
    visited[v] = 1;
    printf("v%d ", v+1);
    for (w = 0; w < n; w++) {
        if ((m[v][w] == 1) && (visited[w] == 0)) {
            recdfs(m, n, w);
        }
    }
}

void main () {
    int m[MAX_MATSIZE][MAX_MATSIZE] = {{0,0,1,1,0}, {0,0,1,0,1}, {0,1,0,0,0}, {0,0,0,0,1}, {0,0,0,0,0,}};
    printf ("\nThe Depth First Search Traversal is: ");
    recdfs (m, MAX_MATSIZE, 0);
}