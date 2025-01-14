// Implement a list library(singlylist.h) for a singly linked list with the above six operations. Write a menu driven driver program to call the operations.

#include <stdio.h>
#include <stdlib.h>
#include "singlylist.h"

void main() {
    NODE *head;
    int choice, n, pos;
    head = (NODE*)malloc(sizeof(NODE));
    head -> next = NULL;
    do {
        printf("\n====== Menu ======");
        printf("\n1. CREATE");
        printf("\n2. INSERT");
        printf("\n3. DELETE BY NUMBER");
        printf("\n4. DELETE BY POSITION");
        printf("\n5. SEARCH");
        printf("\n6. DISPLAY");
        printf("\n7. APPEND");
        printf("\n8. EXIT\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                createlist(head);
                break;
            case 2:
                printf("\nEnter the element and position: ");
                scanf("%d%d", &n, &pos);
                insert(head, n, pos);
                display(head);
                break;
            case 3:
                printf("\nEnter the element: ");
                scanf("%d",&n);
                deletevalue(head, n);
                display(head);
                break;
            case 4:
                printf("\nEnter the position: ");
                scanf("%d", &pos);
                deletepos(head, pos);
                display(head);
                break;
            case 5:
                printf("\nEnter the element to be searched: ");
                scanf("%d",&n);
                pos = search(head, n);
                if(pos == -1)
                    printf("\nElement not found");
                else
                    printf("\nElement found at position %d", pos + 1);
                break;
            case 6:
                printf("\nList Item:\n");
                display(head);
                break;
            case 7:
                printf("\nEnter a number to append: ");
                scanf("%d", &n);
                append(head, n);
                printf("\nNumber appended.");
                display(head);
            case 8:
                printf("Exiting...");
                break;
            default:
                printf("Invalid Choice!!");
                break;
        }
    } while (choice != 8);
}