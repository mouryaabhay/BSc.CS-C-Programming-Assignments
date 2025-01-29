// Write a C program which uses Binary search tree library and displays nodes at each level, count of node at each level and total levels in the tree.

#include <stdio.h>
#include <stdlib.h>
#include "btree.h"


void main() {
    NODE *root = NULL;
    root = createbst(root);
    printf("\nNodes at each level:\n");
    nodesAtLevel(root);
    printf("\nCount of nodes at each level:\n");
    printf("\nTotal level:\n");
}

/* Input
    How many nodes: 5
    Enter the 5 elements: 10 5 15 1 7
*/