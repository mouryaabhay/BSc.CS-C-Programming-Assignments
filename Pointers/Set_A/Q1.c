// Write a program to swap the values of two variables using a function. The charerchanged values should be displayed in main.

#include <stdio.h>

void swapvar(char *x, char *y) {
    char temp;
    temp = *x; // Store the value of x in a temporary variable
    *x = *y;   // Assign the value of y to x
    *y = temp; // Assign the original value of x (stored in temp) to y
}

int main() {
    char var1, var2;
    printf("Enter a single value for first variable: ");
    scanf(" %c", &var1);
    printf("Enter a single value for second variable: ");
    scanf(" %c", &var2);
    printf("\n\nBefore swapping\n First Variable = %c\n Second Variable = %c\n", var1, var2);
    swapvar(&var1, &var2);  // Call the swap function
    printf("\nAfter swapping\n First Variable = %c\n Second Variable = %c\n", var1, var2);
    return 0;
}