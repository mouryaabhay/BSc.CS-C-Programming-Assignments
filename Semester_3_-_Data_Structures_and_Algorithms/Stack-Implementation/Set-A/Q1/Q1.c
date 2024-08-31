// Implement a stack library (ststack.h) of integers using a static implementation of the stack and implementing the above six operations. Write a driver program that includes stack library and calls different stack operations.

#include <stdio.h>
#include "ststack.h"

void displayStack(STACK *PS) {
    printf("Stack: ");
    for (int i = 0; i <= PS->top; i++) {
        printf("%d ", PS->data[i]);
    }
    printf("\n");
}

int main() {
    STACK s;
    initSTACK(&s);
    int choice, num = 0;

    while (1) {
        printf("\nStack Operations Menu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Check if empty\n");
        printf("5. Check if full\n");
        printf("6. Exit\n\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter number to push: ");
                scanf("%d", &num);
                push(&s, num);
                displayStack(&s);
                break;
            case 2:
                num = pop(&s);
                if (num != -1) {
                    printf("Popped number: %d\n", num);
                }
                displayStack(&s);
                break;
            case 3:
                num = peek(&s);
                displayStack(&s);
                if (num != -1) {
                    printf("Top number: %d\n", num);
                }
                break;
            case 4:
                printf("Is stack empty? %d\n", isEmpty(&s));
                break;
            case 5:
                printf("Is stack full? %d\n", isFull(&s));
                break;
            case 6:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}