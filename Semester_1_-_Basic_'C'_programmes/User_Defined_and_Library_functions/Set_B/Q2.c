// Write a function isEven which returns 1 is the number is Even and 0 if odd.
// Use this function in main to accept n numbers and count the even numbers.

#include <stdio.h>

int isEven (int numf) {
    if (numf % 2 == 0) {
        return 1; // 1 represents even
    }
    else {
        return 0; // 0 represents odd
    }
}

int main() {
    int count, num, n, ec, oc;
    printf ("Enter the count of numbers: ");
    scanf ("%d", &count);
    for (ec = 0, oc = 0, num = 0; num < count; num++) {
        printf ("Enter number %d: ", num + 1);
        scanf ("%d", &n);
        if (isEven(n)) {
            ec++;
        }
        else {
            oc++;
        }
    }
    printf ("Count of even numbers: %d\n",ec);
    printf ("Count of odd numbers: %d\n",oc);
    return 0;
}