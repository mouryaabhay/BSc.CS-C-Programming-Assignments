// Write a program that adds two single variable polynomials. Each polynomial should be represented as a list with linked list implementation.

#include <stdio.h>
#include <stdlib.h>
#include "singlylist.h"

void main() {
    POLY *p1, *p2, *p3;
    p1 = (POLY *) malloc(sizeof(POLY));
    p1 -> next = NULL;
    p2 = (POLY *) malloc(sizeof(POLY));
    p2 -> next = NULL;
    p3 = (POLY *) malloc(sizeof(POLY));
    p3 -> next = NULL;

    printf("\nList 1:\n");
    createlist(p1);
    display(p1);
    printf("\nList 2:\n");
    createlist(p2);
    display(p2);
    add(p1, p2, p3);
    printf("\nSum of Polynomials:\n");
    display(p3);
}