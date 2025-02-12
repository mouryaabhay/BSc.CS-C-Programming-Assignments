// Write a C program for the implementation of Topological sorting.

#include <stdio.h>
#define MAXSIZE 20
#define MAX_MATSIZE 5

typedef struct {
    int data[MAXSIZE];
    int top;
} STACK;

void push(STACK *ps, int n) {
    if (ps->top < MAXSIZE - 1) {
        ps->data[++ps->top] = n;
    } else {
        printf("Stack overflow\n");
    }
}

int pop(STACK *ps) {
    if (ps->top >= 0) {
        return ps->data[ps->top--];
    } else {
        printf("Stack underflow\n");
        return -1; // Return an invalid value
    }
}

void init(STACK *ps) {
    ps->top = -1;
}

int isempty(STACK *ps) {
    return (ps->top == -1);
}

void topologicalSort(int m[MAX_MATSIZE][MAX_MATSIZE], int n) {
    int i, j, v, w;
    int visited[MAX_MATSIZE] = {0};
    int indeg[MAX_MATSIZE] = {0};

    // Calculate the indegrees
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            indeg[i] += m[j][i];
        }
    }

    STACK s;
    init(&s);
    for (i = 0; i < n; i++) {
        if (indeg[i] == 0) {
            push(&s, i);
        }
    }

    while (!isempty(&s)) {
        v = pop(&s);
        printf("v%d ", v + 1); // Print the vertex (1-indexed)
        visited[v] = 1; // Mark as visited

        for (w = 0; w < n; w++) {
            if (m[v][w] == 1) {
                indeg[w]--; // Reduce indegree of adjacent vertices
                if (indeg[w] == 0 && !visited[w]) {
                    push(&s, w);
                }
            }
        }
    }
    printf("\n");
}

int main() {
    int m[MAX_MATSIZE][MAX_MATSIZE] = {
        {0, 1, 1, 0, 0},
        {0, 0, 0, 1, 0},
        {0, 0, 0, 1, 1},
        {0, 0, 0, 0, 1},
        {0, 0, 0, 0, 0}
    };
    printf("Topological Sort Order: ");
    topologicalSort(m, MAX_MATSIZE);
    return 0;
}