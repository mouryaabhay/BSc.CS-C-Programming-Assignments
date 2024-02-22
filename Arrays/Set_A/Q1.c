// A program to accept n numbers and display them using functions.

#include <stdio.h>

// Function to accept n numbers into an array
void accept(int x[20], int n)
{
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", &x[i]); // Input each element into the array
}

// Function to display n numbers from an array
void display(int x[20], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d\t", x[i]); // Output each element of the array
}

int main()
{
    int a[20], n;

    printf("\nEnter the number of elements for the array:\n");
    scanf("%d", &n);
    
    printf("\nEnter the elements of the array:\n");
    accept(a, n);
    
    printf("\nElements of the array are:\n");
    display(a, n);
    
    return 0;
}