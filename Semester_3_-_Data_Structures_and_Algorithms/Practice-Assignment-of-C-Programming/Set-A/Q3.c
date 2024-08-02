// Write a C program to accept n numbers in an array and display the largest and smallest values.
// Write separate functions.

#include <stdio.h>

void accept(int a[20], int n) {
    int i;
    printf ("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf ("%d", &a[i]);
    }
}

void display(int a[20], int n) {
    int i;
    printf ("The numbers are:\n");
    for (i = 0; i < n; i++) {
        printf ("%d ", a[i]);
    }
    printf ("\n");
}

int maximum(int a[20], int n) {
    int i, max;
    for (i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

int minimum(int a[20], int n) {
    int i, min;
    for (i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }
    return min;
}

int main() {
    int arr[20];
    int n;
    printf ("How many numbers: ");
    scanf ("%d", &n);
    accept(arr, n);
    display(arr, n);
    printf ("The maximum is: %d\n", maximum(arr, n));
    printf ("The minimum is: %d\n", minimum(arr, n));

    return 0;
}
