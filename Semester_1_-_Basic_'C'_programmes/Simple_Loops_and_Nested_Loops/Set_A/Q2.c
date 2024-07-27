// Write a Program to calculate n!.

#include <stdio.h>

int main() {
    int n, num, product;
    printf ("Enter the number: ");
    scanf ("%d", &n);
    for (num = 1, product = 1; num <= n; num++) {
        product = product * num;
    }
    printf ("The factorial of the %d is: %d\n", n, product);
    return 0;
}
