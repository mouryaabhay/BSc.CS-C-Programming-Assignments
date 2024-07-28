// Write a function to calculate the sum of digits of a number and use this function in main.

#include <stdio.h>

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum = sum + num % 10;
        num = num / 10;
    }
    return sum;
}

int main() {
    int n;
    printf ("Enter a number: ");
    scanf ("%d",&n);
    printf ("The sum of digits of %d is %d.\n", n, sumOfDigits(n));
    return 0;
}