// Program which returns the largest number from an array.

#include <stdio.h>

// Function to accept elements into an array
void accept(int x[20], int n)
{
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", &x[i]);
}

// Function to add corresponding elements of two arrays and store the result in a third array
void add(int a[20], int b[20], int c[20], int n)
{
    int i;
    for (i = 0; i < n; i++)
        c[i] = a[i] + b[i];
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
    int a[20], b[20], c[20], n;

    // Input the number of elements for the arrays
    printf("\nEnter the number of elements for the array:\n");
    scanf("%d", &n);

    // Input elements for array 'a'
    printf("\nEnter the elements of the array a:\n");
    accept(a, n);

    // Input elements for array 'b'
    printf("\nEnter the elements of the array b:\n");
    accept(b, n);

    // Add corresponding elements of arrays 'a' and 'b'
    add(a, b, c, n);

    // Display elements of array 'a'
    printf("\nElements of the array a are:\n\n");
    display(a, n);

    // Display elements of array 'b'
    printf("\nElements of the array b are:\n\n");
    display(b, n);

    // Display sum of corresponding elements of arrays 'a' and 'b'
    printf("\nSum of the elements of array a & array b are:\n");
    display(c, n);

    return 0;
}