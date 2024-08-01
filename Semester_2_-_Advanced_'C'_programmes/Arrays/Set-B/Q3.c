// Write a program to find the transpose of a matrix.

#include <stdio.h>

// Function to accept matrix elements from the user
void accept(int x[20][20], int r, int c)
{
    int i, j;
    // Loop through each row and column of the matrix
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &x[i][j]); // Input the element at position (i, j)
}

// Function to find the transpose of a matrix
void transpose(int x[20][20], int y[20][20], int r, int c)
{
    int i, j;
    // Loop through each row and column of the matrix
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            y[j][i] = x[i][j]; // Transpose element at position (i, j) to position (j, i)
}

// Function to display the elements of a matrix
void display(int x[20][20], int r, int c)
{
    int i, j;
    // Loop through each row of the matrix
    for (i = 0; i < r; i++)
    {
        // Loop through each column of the matrix
        for (j = 0; j < c; j++)
        {
            printf("%d\t", x[i][j]); // Output the element at position (i, j)
        }
        printf("\n"); // Move to the next row after each row is displayed
    }
}

int main()
{
    int a[20][20], b[20][20], m, n;

    printf("\nEnter the number of rows and columns:\n");
    scanf("%d%d", &m, &n); // Input the number of rows and columns

    printf("\nEnter the elements of the matrix:\n");
    accept(a, m, n); // Accept matrix elements from the user

    transpose(a, b, m, n); // Find the transpose of the matrix

    printf("\nThe transpose of the matrix is:\n");
    display(b, n, m); // Display the transpose of the matrix

    return 0;
}