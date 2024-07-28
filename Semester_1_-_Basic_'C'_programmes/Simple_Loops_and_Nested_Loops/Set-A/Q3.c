// Write a program to calculate the sum of the digits of a number.

#include <stdio.h>

int main() {
    int n, num, sum = 0;
    printf ("Enter the number: ");
    scanf ("%d", &n);
    while (n > 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    printf ("sum of the digit of the number is: %d\n", sum);
    return 0;
}