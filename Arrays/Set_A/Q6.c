// Program to sort n elements in ascending order using bubble sort.

#include <stdio.h>

// Function to accept elements into the array.
void accept(int x[20], int n)
{
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", &x[i]); // Taking input from user for each element of the array.
}

// Function to perform bubble sort.
void bubblesort(int a[20], int n)
{
    int i, pass, temp;
    // Outer loop for passes
    for (pass = 1; pass < n; pass++)
    {
        // Inner loop for comparisons
        for (i = 0; i < n - pass; i++)
        {
            // Swap if adjacent elements are in the wrong order
            if (a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp; // Swapping adjacent elements if they are in the wrong order.
            }
        }
    }
}

// Function to display elements of the array.
void display(int x[20], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d\n", x[i]);
}

int main()
{
    int a[20], n;
    
    printf("\nEnter the number of elements for the array a:\n");
    scanf("%d", &n);
    
    printf("\nEnter the elements of the array:\n");
    accept(a, n);
    
    bubblesort(a, n);
    
    printf("\nArrays in sorted order:\n");
    display(a, n);
    
    return 0;
}