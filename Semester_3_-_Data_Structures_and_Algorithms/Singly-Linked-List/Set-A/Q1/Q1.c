// Implement a list library(singlylist.h) for a singly linked list with the above six operations. Write a menu driven driver program to call the operations.

#include <stdio.h>
#include <stdlib.h>
#include "singlylist.h"

void main() {
    NODE *head1;
    int choice, n, pos;
    head1 =(NODE*)malloc(sizeof(NODE));
    head1 -> next = NULL;
    do {
        printf("\n====== Menu ======");
        printf("\n1. CREATE");
        printf("\n2. INSERT");
        printf("\n3. DELETE BY NUMBER");
        printf("\n4. DELETE BY POSITION");
        printf("\n5. SEARCH");
        printf("\n6. DISPLAY");
        printf("\n7. EXIT\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                createlist(head1);
                break;
            case 2:
                printf("\nEnter the element and position: ");
                scanf("%d%d", &n, &pos);
                insert(head1, n, pos);
                display(head1);
                break;
            case 3:
                printf("\nEnter the element: ");
                scanf("%d",&n);
                deletevalue(head1, n);
                display(head1);
                break;
            case 4:
                printf("\nEnter the position: ");
                scanf("%d", &pos);
                deletepos(head1, pos);
                display(head1);
                break;
            case 5:
                printf("\nEnter the element to be searched: ");
                scanf("%d",&n);
                pos = search(head1, n);
                if(pos == -1)
                    printf("\nElement not found");
                else
                    printf("\nElement found at position %d", pos + 1);
                break;
            case 6:
                printf("\nList Item:\n");
                display(head1);
                break;
            case 7:
                printf("Exiting...");
                break;
            default:
                printf("Invalid Choice!!");
                break;
        }
    } while (choice != 7);
}