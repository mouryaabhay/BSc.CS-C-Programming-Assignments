// Convert amount N to denomination of 100, 50, 20, 10, 5, 1.

#include <stdio.h>

int main() {
    int amount, hundred, fifty, twenty, ten, five, one;
    printf ("Enter the amount: ");
    scanf ("%d", &amount);

    hundred = amount / 100;
    amount = amount % 100;

    fifty = amount / 50;
    amount = amount % 50;

    twenty = amount / 20;
    amount = amount % 20;

    ten = amount / 10;
    amount = amount % 10;

    five = amount / 5;
    amount = amount % 5;

    one = amount;

    printf ("100 Rs = %d\n50 Rs = %d\n20 Rs = %d\n10 Rs = %d\n5 Rs = %d\n1 Rs = %d\n", hundred, fifty, twenty, ten, five, one);
    return 0;
}