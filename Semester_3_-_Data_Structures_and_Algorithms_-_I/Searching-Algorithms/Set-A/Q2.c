// Accept n sorted values in array from user. Accept a value x from user and write a function to implement binary search algorithm to check whether the number is present in sorted array or not and output the position if the number is present.

#include <stdio.h>

// Function to accept array of integers from user
void accept(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        scanf ("%d", &arr[i]);
    }
}

// Function to perform binary search
int binarySearch(int arr[], int n, int key) {
    int begin = 0, end = n - 1, mid;

    while (begin <= end) {
        mid = (begin + end) / 2;

        // Check if key is present at mid
        if (arr[mid] == key)
            return mid;

        // If key greater, ignore left half
        // If key is smaller, ignore right half
        if (arr[mid] < key)
            begin = mid + 1;
        else
            end = mid - 1;
    }

    return -1; // Element not present
}

int main() {
    int n, x, i, result;

    printf ("Enter the number of elements in the array: ");
    scanf ("%d", &n);

    int arr[n];

    printf ("Enter %d sorted elements:\n", n);
    accept(arr, n);
    
    printf ("Enter the value to search: ");
    scanf ("%d", &x);

    result = binarySearch(arr, n, x);

    if (result == -1)
        printf ("Element is not present in array\n");
    else
        printf ("Element is present at position %d\n", result + 1);

    return 0;
}