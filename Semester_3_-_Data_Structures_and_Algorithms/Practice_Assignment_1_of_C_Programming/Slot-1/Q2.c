// Write a C program to calculate the sum of digits of a number using recursion.

#include <stdio.h>

int sum(int num) {
    if (num == 0)
        return 0;
    return (num % 10 + sum(num / 10));
}

int main() {
    int num, result;
    printf ("Enter a number: ");
    scanf ("%d", &num);
    result = sum(num);
    printf ("Sum of digits of %d is %d\n", num, result);
    return 0;
}