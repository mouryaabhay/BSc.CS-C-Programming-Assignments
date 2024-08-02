// Write a C Program to calculate the sum of digits of a number (Without using Recurssion).

#include <stdio.h>

int main() {
    int num, sum = 0, remainder;
    printf ("Enter a number: ");
    scanf ("%d", &num);
    while (num != 0) {
        remainder = num % 10;
        sum = sum + remainder;
        num = num / 10;
    }
    printf ("Sum of digits: %d\n", sum);
    return 0;
}