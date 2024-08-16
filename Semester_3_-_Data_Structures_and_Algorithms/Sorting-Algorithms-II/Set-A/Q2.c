#include <stdio.h>
#include <stdlib.h>

// Function to generate a random array of n integers
void genRandomArray(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        a[i] = rand() % 100; 
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

// Function to swap two elements in the array
void swap(int A[], int i, int j) {
    int temp;
    temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}

// Function to partition the array around a pivot element
int partition(int A[], int lb, int ub) {
    // Choose the first element as the pivot
    int pivot = A[lb];
    // Initialize two indices, one at the beginning of the array and one at the end
    int down = lb + 1;
    int up = ub;

    // Loop until the two indices meet
    while (1) {
        // Move the down index to the right until we find an element greater than the pivot
        while (A[down] <= pivot) {
            down++;
        }

        // Move the up index to the left until we find an element less than or equal to the pivot
        while (A[up] > pivot) {
            up--;
        }

        // If the down index is still less than the up index, swap the elements at the two indices
        if (down < up) {
            swap(A, down, up);
        } else {
            // If the down index is not less than the up index, break out of the loop
            break;
        }
    }

    // Swap the pivot element with the element at the up index
    swap(A, lb, up);
    // Return the index of the pivot element
    return up;
}

// Recursive function to sort the array using Quick sort algorithm
void quickSort(int a[], int low, int high) {
    int pivot;
    if (low < high) {
        // Partition the subarray around a pivot element
        pivot = partition(a, low, high);
        // Recursively sort the subarray of elements smaller than the pivot
        quickSort(a, low, pivot - 1);
        // Recursively sort the subarray of elements greater than the pivot
        quickSort(a, pivot + 1, high);
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

    quickSort(a, 0, n - 1);

    printf("Sorted array: ");
    display(a, n);

    return 0;
}