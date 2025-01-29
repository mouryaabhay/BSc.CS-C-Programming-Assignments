// Implement a Binary Search Tree (BST) library (btree.h) with operations - create, search, inorder, preorder, postorder.
// Write a menu driven program that perform the above operations.

#include <stdio.h>
#include <stdlib.h>
#include "btree.h"

void main() {
    int choice, num;
    NODE *root = NULL;
    root = createbst(root);

    do {
        printf("\n\nQueue Operations Menu:\n");
        printf("1. Search\n");
        printf("2. Inorder Traversal\n");
        printf("3. Preorder Traversal\n");
        printf("4. Postorder Traversal\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the number to search: ");
                scanf("%d", &num);
                if (search(root, num) != NULL) {
                    printf("Number %d found in the tree.", num);
                } else {
                    printf("Number %d not found in the tree.", num);
                }
                break;
            case 2:
                printf("\nInorder traversal is: ");
                inorder(root);
                break;
            case 3:
                printf("\nPreorder traversal is: ");
                preorder(root);
                break;
            case 4:
                printf("\nPostorder traversal is: ");
                postorder(root);
                break;
            case 5:
                printf("\nExiting the program.\n\n");
                break;
            default:
                printf("\nInvalid choice. Please choose a valid option.\n");
        }
    } while (choice != 5);
}

/* Input
    How many nodes: 5
    Enter the 5 elements: 10 5 15 1 7
*/