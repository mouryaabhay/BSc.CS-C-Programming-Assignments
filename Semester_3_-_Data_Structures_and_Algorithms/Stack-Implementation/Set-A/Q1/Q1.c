// Implement a stack library (ststack.h) of integers using a static implementation of the stack and implementing the above six operations. Write a driver program that includes stack library and calls different stack operations.

#include <stdio.h>
#include "ststack.h"

void displayStack(STACK *PS) {
    printf("Stack: ");
    for (int i = 0; i <= PS -> top; i++) {
        printf("%d ", PS -> data[i]);
    }
    printf("\n");
}

void main() {
    int num, choice;
    STACK s;
    initstack(&s);

    do {
        printf("\nStack Operations Menu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Exit\n\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: /* Push */
                if (isFull(&s)) {
                    printf("Stack is full. Cannot push.\n");
                } else {
                    printf("Enter number to push: ");
                    scanf("%d", &num);
                    push(&s, num);
                    displayStack(&s);
                }
                break;

            case 2: /* Pop */
                if (isEmpty(&s)) {
                    printf("Stack is empty. Cannot pop.\n");
                } else {
                    printf("Popped number: %d\n", pop(&s));
                    displayStack(&s);
                }
                break;

            case 3: /* Peek */
                displayStack(&s);
                if (isEmpty(&s))
                    printf("Stack is empty.\n");
                else
                    printf("Top number: %d\n", peek(&s));
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 4);
}