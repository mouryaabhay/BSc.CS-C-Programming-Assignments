// Write a program which uses binary search tree library and counts the total nodes and total leaf nodes in the tree.
// int countNode(T) - Returns the total number of nodes from BST
// int countLeaf(T) - Returns the total number of leaf nodes from 

#include <stdio.h>
#include <stdlib.h>
#include "btree.h"

void main() {
    NODE *root = NULL;
    root = createbst(root);
    printf("\nNode Count: %d\n", countNode(root));
    printf("\nLeaf Count: %d\n", countLeaf(root));
}