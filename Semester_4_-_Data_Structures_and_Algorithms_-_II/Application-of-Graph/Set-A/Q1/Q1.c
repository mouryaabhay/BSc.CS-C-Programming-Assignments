// Write a C program for the implementation of Topological sorting.

#include <stdio.h>
#define MAX_VERTICES 25 // Max number of vertices

typedef struct {
    int data[MAX_VERTICES];
    int top;
} STACK;

void push(STACK *ps, int n) {
    ps->data[++ps->top] = n;
}

int pop(STACK *ps) {
    return ps->data[ps->top--];
}

void init(STACK *ps) {
    ps->top = -1;
}

int isempty(STACK *ps) {
    return (ps->top == -1);
}

void topologicalSort(int m[MAX_VERTICES][MAX_VERTICES], int n) {
    int i, j, v, w;
    int visited[MAX_VERTICES] = {0}; // To keep track of visited vertices
    int indeg[MAX_VERTICES] = {0};
    int count = 0;

    // Calculate indegrees
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            indeg[i] += m[j][i];
        }
    }

    STACK s;
    init(&s);
    
    // Push all vertices with zero indegree into the stack
    for (i = 0; i < n; i++) {
        if (indeg[i] == 0) {
            push(&s, i);
        }
    }

    printf("Topological Sort Order: ");
    while (!isempty(&s)) {
        v = pop(&s);
        
        // If already visited, skip this vertex
        if (visited[v]) {
            continue;
        }
        
        printf("v%d ", v + 1); // Print the vertex (1-indexed)
        visited[v] = 1; // Mark as visited
        count++;

        // Decrease indegree of adjacent vertices and push if indegree becomes zero
        for (w = 0; w < n; w++) {
            if (m[v][w] == 1) {
                indeg[w]--;
                if (indeg[w] == 0 && !visited[w]) {
                    push(&s, w);
                }
            }
        }
    }

    if (count != n) {
        printf("\nThe graph has a cycle, topological sorting is not possible.\n");
    } else {
        printf("\n");
    }
}

int main() {
    int m[MAX_VERTICES][MAX_VERTICES];
    int n, i, j;

    printf("Enter the number of vertices (max %d): ", MAX_VERTICES);
    scanf("%d", &n);

    if (n > MAX_VERTICES) {
        printf("Number of vertices exceeds maximum size.\n");
        return 1;
    }

    printf("Enter the adjacency matrix (%d x %d):\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Is there an edge between %d -> %d (1/0): ", i + 1, j + 1);
            scanf("%d", &m[i][j]);
        }
    }

    topologicalSort(m, n);
    return 0;
}
