// Write a C program that accepts the vertices and edges of a graph.
// Create adjacency list.
// Implement functions to print indegree, outdegree and total degree of all vertex of graph.

#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 10  // Maximum number of vertices in the graph
#define MATRIX_SIZE MAX_VERTICES  // Dimension of the adjacency matrix (square matrix)

typedef struct node {
    int vertex;
    struct node *next;
} NODE;

NODE *list[MAX_VERTICES];

void createMatrix(int m[MATRIX_SIZE][MATRIX_SIZE], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            m[i][j] = 0;
            if (i != j) {
                printf("Is there an edge between %d -> %d (1/0): ", i + 1, j + 1);
                scanf("%d", &m[i][j]);
            }
        }
    }
}

void displayMatrix(int m[MATRIX_SIZE][MATRIX_SIZE], int n) {
    int i, j;
    printf("\nThe adjacency matrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

void createList (int m[MATRIX_SIZE][MATRIX_SIZE], int n) {
    int i, j;
    struct node *temp, *newnode;
    for (i = 0; i < n; i++) {
        list[i] = NULL;
        for (j = 0; j < n; j++) {
            if (m[i][j] == 1) {
                newnode = (NODE*) malloc(sizeof(NODE));
                newnode->vertex = j + 1;
                newnode->next=NULL;
                if (list[i] == NULL) {
                    list[i] = temp = newnode;
                } else {
                    temp->next = newnode;
                    temp = newnode;
                }
            }
        }
    }
}

void displayList (int n) {
    struct node *temp;
    int i;
    printf ("\nThe adjacency list is:");
    for (i = 0; i < n; i++) {
        printf ("\nv%d-> ", i+1);
        temp = list[i];
        while (temp) {
            printf ("v%d -> ", temp->vertex);
            temp = temp->next;
        }
        printf ("NULL");
    }
    printf("\n");
}

void calculateIndegree(int m[MATRIX_SIZE][MATRIX_SIZE], int indegree[], int n) {
    int v, i;
    for (v = 0; v < n; v++) {
        indegree[v] = 0; // Initialize indegree for vertex v
        for (i = 0; i < n; i++) {
            indegree[v] += m[i][v]; // Sum of column v
        }
    }
}

void calculateOutdegree(int m[MATRIX_SIZE][MATRIX_SIZE], int outdegree[], int n) {
    int v, i;
    for (v = 0; v < n; v++) {
        outdegree[v] = 0; // Initialize outdegree for vertex v
        for (i = 0; i < n; i++) {
            outdegree[v] += m[v][i]; // Sum of row v
        }
    }
}

void calcDegrees(int m[MATRIX_SIZE][MATRIX_SIZE], int indegree[], int outdegree[], int n) {
    int v, totalDegree = 0;

    calculateIndegree(m, indegree, n);
    calculateOutdegree(m, outdegree, n);

    printf("\nVertex  Indegree  Outdegree  Total Degree\n");
    for (v = 0; v < n; v++) {
        totalDegree = indegree[v] + outdegree[v];
        printf("%d\t%d\t\t%d\t\t%d\n", v + 1, indegree[v], outdegree[v], totalDegree);
    }
}

void main() {
    int n;
    int m[MATRIX_SIZE][MATRIX_SIZE];
    int indegree[MATRIX_SIZE], outdegree[MATRIX_SIZE];

    printf("Enter the number of vertices (max %d): ", MAX_VERTICES);
    scanf("%d", &n);

    createMatrix(m, n);
    displayMatrix(m, n);

    createList(m ,n);
    displayList(n);

    calcDegrees(m, indegree, outdegree, n);
}

/* Expected Output

Enter the number of vertices (max 10): 5
Is there an edge between 1 -> 2 (1/0): 1
Is there an edge between 1 -> 3 (1/0): 1
Is there an edge between 1 -> 4 (1/0): 1
Is there an edge between 1 -> 5 (1/0): 0
Is there an edge between 2 -> 1 (1/0): 0
Is there an edge between 2 -> 3 (1/0): 1
Is there an edge between 2 -> 4 (1/0): 0
Is there an edge between 2 -> 5 (1/0): 0
Is there an edge between 3 -> 1 (1/0): 0
Is there an edge between 3 -> 2 (1/0): 0
Is there an edge between 3 -> 4 (1/0): 1
Is there an edge between 3 -> 5 (1/0): 1
Is there an edge between 4 -> 1 (1/0): 0
Is there an edge between 4 -> 2 (1/0): 0
Is there an edge between 4 -> 3 (1/0): 0
Is there an edge between 4 -> 5 (1/0): 1
Is there an edge between 5 -> 1 (1/0): 0
Is there an edge between 5 -> 2 (1/0): 0
Is there an edge between 5 -> 3 (1/0): 0
Is there an edge between 5 -> 4 (1/0): 0

The adjacency matrix is:
0 1 1 1 0
0 0 1 0 0
0 0 0 1 1
0 0 0 0 1
0 0 0 0 0

The adjacency list is:
v1-> v2 -> v3 -> v4 -> NULL
v2-> v3 -> NULL
v3-> v4 -> v5 -> NULL
v4-> v5 -> NULL
v5-> NULL

Vertex  Indegree  Outdegree  Total Degree
1       0               3               3
2       1               1               2
3       2               2               4
4       2               1               3
5       2               0               2

*/