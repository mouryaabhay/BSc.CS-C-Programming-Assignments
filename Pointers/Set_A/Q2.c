// Accept n integers in array A.
// Pass this array and two counter variables to a function which will set the first counter to the total number of even values in the array and the other to the total number of odd values.
// Display these counts in main.
// (Hint: Pass the addresses of the counters to the function)

#include <stdio.h>

void countevenodd(int n, int *arr, int *evencount, int *oddcount) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            (*evencount)++;  // Increment evencount using pointer dereference
        else
            (*oddcount)++;   // Increment oddcount using pointer dereference
    }
}

int main() {
    int n, i, arr[20], evencount = 0, oddcount = 0;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    countevenodd(n, arr, &evencount, &oddcount);  // Pass addresses of counters
    printf("Number of even elements: %d\n", evencount);
    printf("Number of odd elements: %d\n", oddcount);
    return 0;
}