// Write a function to calculate factorial of a number and use this function in main.

#include <stdio.h>

int fact(int f) {
    int num, product;
    for (num = 1, product = 1; num <= f; num++) {
        product = product * num;
    }
    return product;
}

int main () {
    int n, result;
    printf ("Enter a number: ");
    scanf ("%d",&n);
    result = fact(n);
    printf ("The factorial of %d is %d.\n",n,result);
    return 0;
}