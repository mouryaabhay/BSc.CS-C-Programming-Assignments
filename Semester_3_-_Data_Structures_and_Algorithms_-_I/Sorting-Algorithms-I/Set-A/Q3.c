// Sort a random array of n integers (accept the value of n from user) in ascending order by using selection sort algorithm.

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

// Function to perform selection sort
void selectionSort(int a[], int n) {
    int i, j, pos, smallest, temp;
    for (i = 0; i <= n - 2; i++) {
        smallest = a[i];
        pos = i;
        for (j = i + 1; j <= n - 1; j++) {
            if (a[j] < smallest) {
                smallest = a[j];
                pos = j;
            }
        }
        // Swap a[pos] and a[i]
        temp = a[pos];
        a[pos] = a[i];
        a[i] = temp;
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

    selectionSort(a, n);

    printf("Sorted array: ");
    display(a, n);

    return 0;
}