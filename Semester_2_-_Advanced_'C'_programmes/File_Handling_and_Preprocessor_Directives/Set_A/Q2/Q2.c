// Create a header file “mymacros.h” which defines the following macros.
// i. SQR(x)    ii. CUBE(x) - nested    iii. MAX2(x,y)    iv. MAX3(x,y,z) – nested
// Include this file in your program.
// Write a menu driven program to use these macros in the program.

#include <stdio.h>
#include "mymacros.h"

int main() {
    int num1, num2, num3;
    int choice;

    do {
        printf("\nMenu:");
        printf("\n1. Square");
        printf("\n2. Cube");
        printf("\n3. Maximum of Two Numbers");
        printf("\n4. Maximum of Three Numbers");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nEnter a number: ");
                scanf("%d", &num1);
                printf("Square of %d is %d\n", num1, SQR(num1));
                break;
            case 2:
                printf("\nEnter a number: ");
                scanf("%d", &num1);
                printf("Cube of %d is %d\n", num1, CUBE(num1));
                break;
            case 3:
                printf("\nEnter two numbers:\n");
                scanf("%d %d", &num1, &num2);
                printf("Maximum number from %d and %d is %d\n", num1, num2, MAX2(num1, num2));
                break;
            case 4:
                printf("\nEnter three numbers:\n");
                scanf("%d %d %d", &num1, &num2, &num3);
                printf("Maximum number from %d, %d, and %d is %d\n", num1, num2, num3, MAX3(num1, num2, num3));
                break;
            case 5:
                printf("\nExiting...\n");
                break;
            default:
                printf("\nInvalid choice!\n");
        }
    } while (choice != 5);

    return 0;
}