// Sort a random array of n integers (accept the value of n from user) in ascending order by using bubble sort algorithm.

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

// Function to perform bubble sort
void bubbleSort(int a[], int n) {
    int pass, i, temp;
    for (pass = 1; pass <= n - 1; pass++) {
        for (i = 0; i <= n - pass - 1; i++) {
            if (a[i] > a[i + 1]) {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
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

    bubbleSort(a, n);

    printf("Sorted array: ");
    display(a, n);

    return 0;
}