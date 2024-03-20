// Interchage/swap two numbers and display the swapped numbers.

#include <stdio.h>

int main() {
    int num1, num2, temp;
    printf ("Enter the first number: ");
    scanf ("%d", &num1);
    printf ("Enter the second number: ");
    scanf ("%d", &num2);

    // Swapping logic
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf ("Swapped numbers: %d and %d\n", num1, num2);
    return 0;
}