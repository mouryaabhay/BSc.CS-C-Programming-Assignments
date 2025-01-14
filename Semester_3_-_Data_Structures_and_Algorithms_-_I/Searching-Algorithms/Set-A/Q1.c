// Create a random array of n integers. Accept a value x from user and write a function to implement linear search algorithm to check whether the number is present in the array or not and output the position if the number is present.

#include <stdio.h>
#include <stdlib.h>

// Function to generate a random array of n integers
void generate_random_array(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        arr[i] = rand() % 100; // Generate random numbers between 0 and 99
    }
}

// Function to perform linear search
int linear_search(int arr[], int n, int key) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Return the position of the element if found
        }
    }
    return -1; // Return -1 if the element is not found
}

// Function to accept array of integers from user
void accept(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        scanf ("%d", &arr[i]);
    }
}

// Function to display array of integers
void display(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf ("%d ", arr[i]);
    }
}

int main() {

    int n, x, i, result;
    printf ("Enter the size of the array: ");
    scanf ("%d", &n);

    // Generating random array automatically
    int arr[n];
    generate_random_array(arr, n);

    // Accepting Array from the user
    // printf ("Enter the %d elements of the array:\n", n);
    // accept(arr, n);

    printf ("Random array generated:\n");
    display(arr, n);

    printf ("\nEnter the number to search: ");
    scanf ("%d", &x);

    result = linear_search(arr, n, x);

    if (result != -1) {
        printf ("Number %d found at position %d.\n", x, result + 1);
    } else {
        printf ("Number %d not found in the array.\n", x);
    }

    return 0;
}