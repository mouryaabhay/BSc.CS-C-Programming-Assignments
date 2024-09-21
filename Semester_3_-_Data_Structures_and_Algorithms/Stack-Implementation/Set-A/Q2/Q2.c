// Implement a stack library (dystack.h) of integers using a dynamic (linked list) implementation of the stack and implementing the above five operations. Write a driver program that includes stack library and calls different stack operations.

#include <stdio.h>
#include <stdlib.h>
#include "dystack.h"

void displayStack() {
    printf("Stack: ");
    Node* temp = top;
    while (temp != NULL) {
        printf("%d ", temp -> info);
        temp = temp -> next;
    }
    printf("\n");
}

int main() {
    int num, choice;
    initstack();

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
                printf("Enter number to push: ");
                scanf("%d", &num);
                push(num);
                displayStack();
                break;

            case 2: /* Pop */
                if (isEmpty()) {
                    printf("Stack is empty. Cannot pop.\n");
                } else {
                    printf("Popped number: %d\n", pop());
                    displayStack();
                }
                break;

            case 3: /* Peek */
                displayStack();
                if (isEmpty())
                    printf("Stack is empty.\n");
                else
                    printf("Top number: %d\n", peek());
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 4);
    return 0;
}