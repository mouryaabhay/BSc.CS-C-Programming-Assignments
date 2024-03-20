// Write a program to calculate the sum and avg of first 'n' numbers.

#include <stdio.h>

int main() {
    int n, num, sum;
    float avg;
    printf ("Enter the number: ");
    scanf ("%d", &n);
    for (num = 1, sum = 0; num <= n; num++) {
        sum = sum + num;
    }
    avg = (float)sum / n;
    printf ("Sum of the first %d number is: %d\n", n, sum);
    printf ("Average of the first %d number is : %f\n", n, avg);
    return 0;
}