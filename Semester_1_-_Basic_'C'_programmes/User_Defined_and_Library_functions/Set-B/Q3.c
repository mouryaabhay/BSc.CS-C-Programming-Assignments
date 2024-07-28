// Write a function isprime to display all prime numbers between 10 to 100.

#include <stdio.h>

int isprime (int n) {
    int numf;
    for (numf = 2; numf < n; numf++) {
        if (n % numf == 0) {
        return 0; // Not Prime
        }
    }
    return 1; // Is Prime
}

int main () {
    int num;
    printf ("List of Prime numbers between 10 to 100: \n");
    for (num = 10; num <= 100; num++) {
        if (isprime(num)) {
            printf ("%d\n", num);
        }
    }
    return 0;
}