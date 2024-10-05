// Implement a list library (doublylist.h) for a doubly linked list with the above four operations. Write a menu driven driver program to call the operations append, insert, delete specific node, delete at position, search, display.

#include <stdio.h>
#include <stdlib.h>
#include "doublylist.h"

void main() {
    NODE *head;
    head = (NODE *) malloc(sizeof(NODE));
    head -> next = NULL;
    head -> prev = NULL;

    int choice, num, pos;

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
                scanf("%d%d", &num, &pos);
                insert(head, num, pos);
                display(head);
                break;
            case 3:
                printf("\nEnter the element: ");
                scanf("%d",&num);
                deletevalue(head, num);
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
                scanf("%d",&num);
                pos = search(head, num);
                if(pos == -1)
                    printf("\nElement not found.2");
                else
                    printf("\nElement found at position %d", pos + 1);
                break;
            case 6:
                printf("\nList Item:\n");
                display(head);
                break;
            case 7:
                printf("\nEnter a number to append: ");
                scanf("%d", &num);
                append(head, num);
                printf("\nNumber appended:\n");
                display(head);
                break;
            case 8:
                printf("Exiting...");
                break;
            default:
                printf("Invalid Choice!!");
                break;
        }
    } while (choice != 8);
}