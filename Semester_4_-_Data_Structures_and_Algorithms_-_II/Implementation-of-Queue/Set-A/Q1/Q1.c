// Implement a linear queue library (queue.h) of integers using a static implementation of the queue and implementing the above six operations.
// Write a C program that includes queue library and calls different queue operations

#include <stdio.h>
#include "queue.h"

int main() {
    QUEUE q;
    init(&q);
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
                if (isfull(&q)) {
                    printf("Queue is full. Cannot enqueue.\n");
                } else {
                    printf("Enter the number to enqueue: ");
                    scanf("%d", &num);
                    enqueue(&q, num);
                    printf("%d enqueued successfully.\n", num);
                }
                break;

            case 2:
                if (isempty(&q)) {
                    printf("Queue is empty. Cannot dequeue.\n");
                } else {
                    printf("%d dequeued successfully.\n", dequeue(&q));
                }
                break;

            case 3:
                if (isempty(&q)) {
                    printf("Queue is empty. Cannot peek.\n");
                } else {
                    printf("Front element is: %d\n", peek(&q));
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