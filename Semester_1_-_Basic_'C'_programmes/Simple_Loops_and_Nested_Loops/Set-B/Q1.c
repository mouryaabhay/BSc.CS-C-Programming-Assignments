// Write a program to diplay all prime numbers between 10 to 100.

#include <stdio.h>

int main() {
    int num, n;
    printf ("List of Prime numbers\n");
    for (n = 10; n <= 100; n++) {
        for (num = 2; num <= n-1; num++) {
            if (n % num == 0) {
                break;
            }
        }
    if (num == n) {
        printf ("%d\n", n);
    }
    }
    return 0;
}