// Write a menu driven program to perform the following operations on two integers till the user selects EXIT.
// 1. ADD   2. SUBTRACT    3. MULTIPLY    4. DIVIDE    5. EXIT

#include <stdio.h>

int main() {
    int num1, num2, choice;
    do {
        printf ("Enter first number: ");
        scanf ("%d", &num1);
        printf ("Enter second number: ");
        scanf ("%d", &num2);
        printf ("Select an operation:\n");  
        printf ("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n\n");
        printf ("Enter your choice: ");
        scanf ("%d", &choice);
        
        switch (choice) {
            case 1: printf ("Sum: %d\n\n", num1 +  num2);
                break;
            case 2: printf ("Difference: %d\n\n", num1 - num2);
                break;
            case 3: printf ("Product: %d\n\n", num1 * num2);
                break;
            case 4: if (num2 != 0) {
                    printf ("Quotient: %f\n\n", (float)num1 / num2);
                }
                else {
                    printf ("Error: Cannot divide by zero.\n\n");
                }
                break;
            case 5: printf ("Exit\n\n");
                break;
            default: printf ("Invalid Choice\n\n");
        }
    } while (choice != 5);
    
    return 0;
}