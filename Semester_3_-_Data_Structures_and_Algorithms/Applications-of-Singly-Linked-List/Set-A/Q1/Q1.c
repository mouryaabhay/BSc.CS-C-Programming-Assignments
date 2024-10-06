// Write a program that merges two ordered linked lists into third new list. When two lists are merged the data in the resulting list are also ordered. The two original lists should be left unchanged. That is merged list should be new one. Use linked implementation.

#include <stdio.h>
#include <stdlib.h>
#include "singlylist.h"

void main() {
    NODE *head1, *head2, *head3;
    head1 = (NODE *) malloc(sizeof(NODE));
    head1 -> next = NULL;
    head2 = (NODE *) malloc(sizeof(NODE));
    head2 -> next = NULL;
    head3 = (NODE *) malloc(sizeof(NODE));
    head3 -> next = NULL;

    printf("\nList 1:\n");
    createlist(head1);
    display(head1);

    printf("\nList 2:\n");
    createlist(head2);
    display(head2);

    printf("\nMerged List:\n");
    merge(head1, head2, head3);
    display(head3);
}