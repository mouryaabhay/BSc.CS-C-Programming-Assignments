// Implement a circular queue library (cir_queue.h) of integers using a dynamic (circular linked list) implementation of the queue and implementing the above five operations.
// Write a menu driven program that includes queue library and calls different queue operations.

// Implement a linear queue library (queue.h) of integers using a dynamic implementation of the queue and implementing the above five operations.
// Write a  C program that includes queue library and calls different queue operations.

#include <stdio.h>
#include "cir_queue.h"

int main() {
    initq();
    int choice, num;

    do {
        printf("\nQueue Operations Menu:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the number to add: ");
                scanf("%d", &num);
                addq(num);
                printf("%d added successfully.\n", num);
                break;

            case 2:
                if (isempty()) {
                    printf("Queue is empty. Cannot remove.\n");
                } else {
                    printf("%d removed successfully.\n", removeq());
                }
                break;

            case 3:
                if (isempty()) {
                    printf("Queue is empty. Cannot peek.\n");
                } else {
                    printf("Front element is: %d\n", peek());
                }
                break;

            case 4:
                printf("Exiting the program.\n\n");
                return 0;

            default:
                printf("Invalid choice. Please choose a valid option.\n");
        }
    } while (choice != 4);

    return 0;
}