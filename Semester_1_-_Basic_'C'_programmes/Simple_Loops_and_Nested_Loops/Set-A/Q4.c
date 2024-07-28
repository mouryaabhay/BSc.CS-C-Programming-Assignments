// Write a progran to accept 'n' numbers and count the even and odd numbers.

#include <stdio.h>

int main() {
    int n, num, count, evenCount, oddCount;
    printf ("Enter the value of n: ");
    scanf ("%d", &n);
    for (count = 1, oddCount = 0, evenCount = 0; count <= n; count ++) {
        printf ("Enter the number: ");
        scanf ("%d", &num);
        if (num % 2 == 0) {
            evenCount++;
        }
        else {
            oddCount++;
        }
    }
    printf ("Count of the even number: %d\n", evenCount);
    printf ("Count of the odd number: %d\n", oddCount);
    return 0;
}