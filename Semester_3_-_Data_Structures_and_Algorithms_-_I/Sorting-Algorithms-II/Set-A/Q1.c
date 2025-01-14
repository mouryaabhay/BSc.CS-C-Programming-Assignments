// Sort a random array of n integers (accept the value of n from user) in ascending order by using a recursive Merge sort algorithm.

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

// Function to merge two sorted subarrays
// This function takes an array a, and three indices low, mid, and high as input
// It merges the two sorted subarrays a[low...mid] and a[mid+1...high] into a single sorted subarray
void merge(int a[], int low, int mid, int high) {
    int b[100]; // temporary array to store merged subarrays
    int i = low, j = mid + 1, k = 0;

    // Merge smaller elements first
    while (i <= mid && j <= high) {
        // Compare the current elements of the two subarrays
        if (a[i] <= a[j]) {
            // If the element from the left subarray is smaller, add it to the merged array
            b[k] = a[i];
            k++;
            i++;
        } else {
            // If the element from the right subarray is smaller, add it to the merged array
            b[k] = a[j];
            k++;
            j++;
        }
    }

    // Copy remaining elements from left subarray, if any
    while (i <= mid) {
        b[k] = a[i];
        k++;
        i++;
    }

    // Copy remaining elements from right subarray, if any
    while (j <= high) {
        b[k] = a[j];
        k++;
        j++;
    }

    // Copy merged elements back to original array
    j = low;
    k = 0;
    while (j <= high) {
        a[j] = b[k];
        j++;
        k++;
    }
}

// Recursive function to perform Merge Sort
// This function takes an array a, and two indices low and high as input
// It recursively sorts the array by dividing it into two halves and merging them back together
void mergeSort(int a[], int low, int high) {
    int mid;

    if (low < high) {
        mid = (low + high) / 2;
        // Recursively sort the left half
        mergeSort(a, low, mid);
        // Recursively sort the right half
        mergeSort(a, mid + 1, high);
        // Merge the two sorted halves
        merge(a, low, mid, high);
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

    mergeSort(a, 0, n - 1);

    printf("Sorted array: ");
    display(a, n);

    return 0;
}