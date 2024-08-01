// Write a program to add two matrices and display their sum.

#include <stdio.h>

// Function to accept matrix elements from the user
void accept(int x[20][20], int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf ("%d", &x[i][j]);
}

// Function to find the add of two matrices and store the result in another matrix
void add(int x[20][20], int y[20][20], int z[20][20], int r, int c) {
    int i, j;
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            z[i][j] = x[i][j] + y[i][j];
}

// Function to display the elements of a matrix
void display(int x[20][20], int r, int c) {
    int i, j;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf ("%d\t", x[i][j]);
        }
        printf ("\n");
    }
}

int main() {
    int a[20][20], b[20][20], c[20][20], m, n;

    printf ("\nEnter the number of rows and columns of matrix:\n");
    scanf ("%d%d", &m, &n);

    printf ("\nEnter the elements of the first matrix:\n");
    accept(a, m, n);

    printf ("\nEnter the elements of the second matrix:\n");
    accept(b, m, n);

    add(a, b, c, m, n);

    printf ("\nThe first matrix is:\n");
    display(a, m, n);

    printf ("\nThe second matrix is:\n");
    display(b, m, n);

    printf ("The addition of both the matrices is:\n");
    display(c, m, n);

    return 0;
}