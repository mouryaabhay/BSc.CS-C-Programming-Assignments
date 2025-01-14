// Sort a random array of n integers (create a random array of n integers) in ascending order by using iterative Quick sort algorithm.

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
void swap(int a[], int x, int y) {
    int temp;
    temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}

// Function to partition the array around a pivot element
int partition(int a[], int lb, int ub) {
    // Start from the second element (exclude pivot)
    // lb + 1 ensures pivot is not compared with itself
    int down = lb;
    int up = ub;

    // Choose the first element as the pivot
    int pivot = a[lb];

    // Loop until the two indices meet
    do {
        // Move the down index to the right until we find an element greater than or equal to the pivot
        while (a[down] <= pivot && down < up) {
            down++;
        }

        // Move the up index to the left until we find an element less than the pivot
        while (a[up] > pivot && up > lb) {
            up--;
        }

        // If the down index is still less than the up index, it means we've found a pair of elements that are in the wrong order
        if (down < up) {
            // Swap the elements at the two indices to put them in the correct order relative to the pivot
            swap(a, down, up);
        }
    } while (down < up);

    // Swap the pivot element with the element at the up index, which is the final position of the pivot element in the sorted array
    swap(a, lb, up);
    // Return the index of the pivot element, which will be used to iteratively sort the subarrays
    return up;
}

// Recursive function to sort the array using Quick sort algorithm
void quickSort(int a[], int lb, int ub) {
    int j;
    if (lb < ub) {
        // Partition the subarray around a pivot element
        j = partition(a, lb, ub);
        // Recursively sort the subarray of elements smaller than the pivot
        quickSort(a, lb, j - 1);
        // Recursively sort the subarray of elements greater than the pivot
        quickSort(a, j + 1, ub);
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