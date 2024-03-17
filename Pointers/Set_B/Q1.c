// Write a program to accept and display an integer matrix of size r x c.
// (Use dynamic memory allocation)

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, r, c;
    int *p[10]; // Array of pointers to hold addresses of rows

    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    // Allocate memory for each row
    for (i = 0; i < r; i++) {
        p[i] = (int*)malloc(c * sizeof(int));
        if (p[i] == NULL) {
            printf("Memory allocation failed!\n");
            return 1; // Exit program if memory allocation fails
        }
    }

    // Get user input for each element of the matrix
    for (i = 0; i < r; i++) {
        printf("\nEnter elements of row %d of matrix:\n", i + 1); // Message for each row
        for (j = 0; j < c; j++)
            scanf("%d", &p[i][j]);
    }

    // Display the matrix
    printf("\nEntered matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }

    // Free the allocated memory
    for (i = 0; i < r; i++)
        free(p[i]);
    return 0;
}