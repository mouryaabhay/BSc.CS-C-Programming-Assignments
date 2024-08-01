// Write a program to multiply two matrices and display their product.

#include <stdio.h>

// Function to accept matrix elements from the user
void accept(int x[20][20], int r, int c) {
    int i, j;
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &x[i][j]);
}

// Function to find the product of two matrices and store the result in another matrix
void multiply(int x[20][20], int y[20][20], int z[20][20], int r1, int c1, int c2) {
    int i, j, k; // Loop counters

    // Iterate over each row of the resultant matrix
    for (i = 0; i < r1; i++) {
        // Iterate over each column of the resultant matrix
        for (j = 0; j < c2; j++) {
            // Initialize the element to 0
            z[i][j] = 0;

            // Iterate over each element of the inner dimension (columns of x or rows of y)
            for (k = 0; k < c1; k++) {
                // Multiply corresponding elements and add to the result
                z[i][j] += x[i][k] * y[k][j];
            }
        }
    }
}

// Function to display the elements of a matrix
void display(int x[20][20], int r, int c) {
    int i, j;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d\t", x[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int a[20][20], b[20][20], c[20][20], r1, c1, r2, c2;

    printf("\nEnter the number of rows and columns of the first matrix:\n");
    scanf("%d%d", &r1, &c1);

    printf("\nEnter the number of rows and columns of the second matrix:\n");
    scanf("%d%d", &r2, &c2);

    // Check if the matrices can be multiplied
    if (c1 != r2) {
        printf("Error: Matrices cannot be multiplied.\n");
        return 1;
    }

    printf("\nEnter the elements of the first matrix:\n");
    accept(a, r1, c1);
    
    printf("\nEnter the elements of the second matrix:\n");
    accept(b, r2, c2);

    multiply(a, b, c, r1, c1, c2);

    printf("\nThe first matrix is:\n");
    display(a, r1, c1);

    printf("\nThe second matrix is:\n");
    display(b, r2, c2);

    printf("The product of both the matrices is:\n");
    display(c, r1, c2);

    return 0;
}