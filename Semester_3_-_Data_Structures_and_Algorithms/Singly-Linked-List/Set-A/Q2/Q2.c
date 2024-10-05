// Implement a list library (singlylist.h) for a singly linked list. Create a linked list, reverse it and display reversed linked list.

#include <stdio.h>
#include <stdlib.h>
#include "singlylist.h"

void main() {
    NODE *head1;
    head1 =(NODE *) malloc(sizeof(NODE));
    head1 -> next = NULL;

    createlist(head1);

    printf("\nOriginal List:\n");
    display(head1);

    reverse(head1);

    printf("\nReversed List:\n");
    display(head1);
}