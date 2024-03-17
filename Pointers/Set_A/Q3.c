// Write a program to accept and display n integers.
// Also calculate their sum and average.
// (Use dynamic memory allocation)

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, sum = 0;
    float average;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int)); // Dynamically allocate memory

    // Check for memory allocation failure
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit program on failure
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = (float)sum / n;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    free(arr); // Free the allocated memory

    return 0;
}