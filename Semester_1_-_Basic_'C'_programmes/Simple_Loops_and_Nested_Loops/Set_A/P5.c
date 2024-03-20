// Write a program to check if a number is Prime.

#include <stdio.h>

int main() {
    int num, n;
    printf ("Enter a number: ");
    scanf ("%d", &n);
    for (num = 2; num < n; num++) {
        if (n % num == 0) {
            break;
        }
    }
    if (num == n) {
        printf ("Number is Prime.\n");
    }
    else {
        printf ("Number id not Prime.\n");
    }
    return 0;
}