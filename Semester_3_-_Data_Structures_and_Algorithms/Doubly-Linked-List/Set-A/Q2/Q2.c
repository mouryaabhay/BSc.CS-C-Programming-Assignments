// Implement a list library (doublylist.h) for a doubly linked list. Create a linked list, reverse it and display reversed linked list.

#include <stdio.h>
#include <stdlib.h>
#include "doublylist.h"

void main() {
    NODE *head;
    head = (NODE *) malloc(sizeof(NODE));
    head -> next = NULL;
    head -> prev = NULL;

    createlist(head);

    printf("\nOriginal List:\n");
    display(head);

    reverse(head);

    printf("\nReversed List:\n");
    display(head);
}