/*
A program with a search function that accepts an array of n elements and a key as parameters
and returns the position of the key in the array and -1 if the key is not found. 
It accepts n numbers from the user, stores them in an array, accepts the key to be searched, 
and searches using this function.
*/

#include <stdio.h>

// Function to accept n elements into the array
void accept(int x[20], int n)
{
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", &x[i]); // Accepting each element into the array
}

// Function to search for a key in the array
int search (int x[20], int n, int numf)
{
    int i;
    for (i = 0; i < n; i++)
        if (x[i] == numf)
            return i; // Return index of the element if found
    return -1; // Return -1 if element not found
}

// Main function
int main()
{
    int a[20], n, target, position;
    
    printf("\nEnter the number of elements for the array:\n");
    scanf("%d", &n);
    
    printf("\nEnter the elements of the array:\n");
    accept(a, n);
    
    printf("\nEnter the element to search for: ");
    scanf("%d", &target); // Accepting the target element to be searched
    
    position = search (a, n, target); // Call search function to find the position of the target element
    
    if (position == -1)
        printf("\nElement not found in the array.");
    else
        printf("\nElement found at position %d.", position + 1); // Adding 1 to convert to human-readable position
    
    return 0;
}