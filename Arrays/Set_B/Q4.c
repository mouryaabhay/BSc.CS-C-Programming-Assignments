// Program to calculate the trace of n x n matrix

#include <stdio.h>

// Function to accept elements of an n x n matrix from the user
void accept(int x[20][20], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &x[i][j]); // Input the element at position (i, j)
}

// Function to calculate the trace of an n x n matrix
int trace(int x[20][20], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
        sum += x[i][i]; // Sum the diagonal elements
    return sum; // Return the sum as the trace
}

int main()
{
    int a[20][20], ans, n;

    printf("\nEnter the number of rows and columns of the square matrix:\n");
    scanf("%d", &n); // Input the size of the square matrix

    printf("\nEnter the elements of the matrix:\n");
    accept(a, n); // Accept elements of the matrix from the user

    ans = trace(a, n); // Calculate the trace of the matrix

    printf("\nThe trace of the matrix is: %d\n", ans); // Output the trace of the matrix

    return 0;
}