// Sort a random array of n integers (create a random array of n integers) in ascending order by using insertion sort algorithm.

#include <stdio.h>
#include <stdlib.h>

// Function to generate a random array
void genRandomArray(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        a[i] = rand() % 100; // Generate random numbers between 0 and 99
    }
}

// Function to display the array
void display(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

// Function to perform insertion sort
void insertionSort(int a[], int n) {
    int i, j, key;
    for (i = 1; i < n; i++) { // Unsorted Set
        key = a[i];
        for (j = i - 1; j >= 0; j--) { // Sorted Set
            if (key < a[j])
                a[j + 1] = a[j]; // Shift a[j] to a[j+1]
            else
                break;
        }
        a[j + 1] = key; // Insert key at a[j+1]
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int a[n];
    genRandomArray(a, n);

    printf("Original array: ");
    display(a, n);

    insertionSort(a, n);

    printf("Sorted array: ");
    display(a, n);

    return 0;
}