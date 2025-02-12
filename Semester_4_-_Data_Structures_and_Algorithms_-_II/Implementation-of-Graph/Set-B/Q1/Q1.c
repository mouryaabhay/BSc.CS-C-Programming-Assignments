// Write a C program that accepts the vertices and edges of a graph and stores it as an adjacency matrix.
// Implement funtions to traverse the graph using Breadth First Search(BFS).

#include <stdio.h>
#define MAXSIZE 20
#define MAX_MATSIZE 5

typedef struct {
    int data[MAXSIZE];
    int front, rear;
} QUEUE;

void addq (QUEUE *pq, int n) {
    pq->data[++pq->rear] = n;
}

int removeq (QUEUE *pq) {
    return pq->data[++pq->front];
}

void initq (QUEUE *pq) {
    pq->front = pq->rear = -1;
}

int isempty (QUEUE *pq) {
    return (pq->rear == pq->front);
}

void bfs(int m[MAX_MATSIZE][MAX_MATSIZE], int n) {
    int i, j, v, w;
    int visited[20] = {0};
    QUEUE q;
    initq(&q);
    v = 0; // Starting vertex is 0
    visited[v] = 1;
    addq (&q, v);
    while (!isempty(&q)) {
        v = removeq(&q);
        printf ("v%d ", v+1);
        for (w = 0;w < n; w++) {
            if ((m[v][w] == 1) && (visited[w] == 0)) {
                addq (&q, w);
                visited[w] = 1;
            }
        }
    }
    printf("\n\n");
}

void main () {
    int m[MAX_MATSIZE][MAX_MATSIZE] = {{0,0,1,1,0}, {0,0,1,0,1}, {0,1,0,0,0}, {0,0,0,0,1}, {0,0,0,0,0,}};
    printf ("\nThe Breath first traversal is: ");
    bfs (m, MAX_MATSIZE);
}