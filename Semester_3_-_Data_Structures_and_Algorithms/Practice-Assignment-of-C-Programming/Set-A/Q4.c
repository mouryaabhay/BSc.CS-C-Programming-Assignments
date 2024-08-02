// Write a C program to count the number of occurrence of element in an array.
// Note: Accept element to be count from the user.

#include <stdio.h>

int main() {
    int arr[100];
    int n, no, ctr = 0;
    int i, j;

    // Accept the size of the array from the user
    printf ("Enter the number of inputs: ");
    scanf ("%d", &n);

    // Accept the values of the array from the user
    printf ("Enter %d elements of the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf ("%d", &arr[i]);
    }

    // Accept the number whose occurrence to be counted from the user
    printf ("Enter the number to count its occurrences: ");
    scanf ("%d", &no);

    // Count the occurrences of the number
    for (j = 0; j < n; j++) {
        if (arr[j] == no) {
            ctr++;
        }
    }

    // Print the occurrences
    printf ("The number %d occurs %d times in the array.\n", no, ctr);

    return 0;
}