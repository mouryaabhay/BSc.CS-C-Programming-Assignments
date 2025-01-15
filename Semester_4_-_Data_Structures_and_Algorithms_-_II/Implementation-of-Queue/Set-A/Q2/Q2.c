// Implement a linear queue library (queue.h) of integers using a dynamic implementation of the queue and implementing the above five operations.
// Write a  C program that includes queue library and calls different queue operations.

#include <stdio.h>
#include "queue.h"

int main() {
    init();
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
                printf("Enter the number to enqueue: ");
                scanf("%d", &num);
                enqueue(num);
                printf("%d enqueued successfully.\n", num);
                break;

            case 2:
                if (isempty()) {
                    printf("Queue is empty. Cannot dequeue.\n");
                } else {
                    num = dequeue();
                    printf("%d dequeued successfully.\n", num);
                }
                break;

            case 3:
                if (isempty()) {
                    printf("Queue is empty. Cannot peek.\n");
                } else {
                    num = peek();
                    printf("Front element is: %d\n", num);
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