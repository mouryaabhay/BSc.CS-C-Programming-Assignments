// Write a program to accept n numbers and display them in the reverse order using functions. 

#include <stdio.h>

// Function to accept elements into an array
void accept(int x[20], int a)
{
    int i;
    for (i = 0; i < a; i++)
        scanf("%d", &x[i]);
}

// Function to display elements of an array in reverse order
void reverseDisplay(int x[20], int a)
{
    int i;
    for (i = a - 1; i >= 0; i--)
        printf("%d\n", x[i]);
    printf("\n");
}

int main()
{
    int a[20], n;

    printf("\nEnter the number of elements for the array:\n");
    scanf("%d", &n);

    printf("\nEnter the elements of the array:\n");
    accept(a, n);
    
    // Displaying elements of the array in reverse order
    printf("\nElements of the array in reverse order are:\n");
    reverseDisplay(a, n);
    
    return 0;
}
