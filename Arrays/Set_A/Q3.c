// This program calculates the number of occurrences of a specific element in an array.
#include <stdio.h>

// Function to accept elements into an array
void accept(int x[20], int n)
{
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", &x[i]);
}

// Function to count occurrences of a number in an array
int occurrences(int x[20], int n, int numf)
{
    int i, count = 0;
    for (i = 0; i < n; i++)
        if (x[i] == numf)
            count++;
    return count;
}

// Main function
int main()
{
    int a[20], n, num, ans;

    printf("\nEnter the number of elements for the array:\n");
    scanf("%d", &n);

    printf("\nEnter the elements of the array:\n");
    accept(a, n);

    // Prompt user to enter the element to be counted
    printf("\nEnter the element to be counted:\n");
    scanf("%d", &num);

    // Calculate occurrences of the entered number in the array
    ans = occurrences(a, n, num);

    printf("\n%d appeared %d times.", num, ans);

    return 0;
}