// Write a function isEven, which accepts an integer as parameter and returns 1 if the number is even, and 0 otherwise.
// Use this function in main to accept n numbers and check if they are even or odd.

#include <stdio.h>

int isEven(int n) {
    if (n % 2 == 0)
        return 1; // 1 represents even
    else
        return 0; // 0 represents odd
}

int main() {
    int inputCount, count, num;
    printf ("Enter the number of inputs: ");
    scanf ("%d", &inputCount);
    for (count = 0; count < inputCount; count++) {
        printf ("Enter number %d: ", count + 1);
        scanf ("%d", &num);
        if (isEven(num))
            printf ("%d is even number.\n", num);
        else
            printf ("%d is odd number.\n", num);
    }
    return 0;
}