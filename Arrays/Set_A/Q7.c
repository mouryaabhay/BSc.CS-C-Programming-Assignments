// Program to merge two sorted arrays into the third array such that it is also sorted.

#include <stdio.h>

// Function to merge two sorted arrays into the third array such that it is also sorted.
void merge(int x[20], int y[20], int z[20], int n, int m)
{
    int i = 0, j = 0, k = 0;
    while ((i < n) && (j < m))
    {
        if (x[i] < y[j])
            z[k++] = x[i++];
        else
            z[k++] = y[j++];
    }
    while (i < n)
        z[k++] = x[i++];
    while (j < m)
        z[k++] = y[j++];
}

// Function to accept elements into an array
void accept(int x[20], int n)
{
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", &x[i]);
}

// Function to display elements of an array
void display(int x[20], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d\t", x[i]);
}

int main()
{
    int a[20], b[20], c[20], n, m;
    
    // Input for array a
    printf("\nEnter the number of elements for the array a:\n");
    scanf("%d", &n);
    printf("\nEnter the elements of the array a:\n");
    accept(a, n);
    
    // Input for array b
    printf("\nEnter the number of elements for the array b:\n");
    scanf("%d", &m);
    printf("\nEnter the elements of the array b:\n");
    accept(b, m);
    
    // Merging arrays a and b into c
    merge(a, b, c, n, m);
    
    // Displaying elements of arrays a, b, and c
    printf("\nElements of the array a are:\n");
    display(a, n);
    printf("\nElements of the array b are:\n");
    display(b, m);
    printf("\nThe elements of array c are:\n");
    display(c, n + m);
    
    return 0;
}