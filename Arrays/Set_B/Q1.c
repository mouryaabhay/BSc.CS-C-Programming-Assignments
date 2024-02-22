// Program to accept and display a matrix of order m x n.

#include <stdio.h>

// Function to accept matrix elements
void accept(int x[20][20], int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &x[i][j]);
}

// Function to display matrix elements
void display(int x[20][20], int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", x[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a[20][20], m, n;

    printf("\nEnter the number of rows and columns:\n");
    scanf("%d%d", &m, &n);

    printf("\nEnter the elements of the matrix:\n");
    accept(a, m, n);

    printf("\nThe matrix is:\n");
    display(a, m, n);

    return 0;
}