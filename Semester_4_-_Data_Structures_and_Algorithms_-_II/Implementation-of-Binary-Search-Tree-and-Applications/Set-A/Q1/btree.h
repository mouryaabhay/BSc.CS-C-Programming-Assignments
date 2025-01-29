#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 20

typedef struct node {
    int info;
    struct node *left, *right;
} NODE;

NODE *createbst(NODE *root) {
    NODE *newnode, *temp, *parent;
    int i, n, num;
    printf("\nHow many nodes: ");
    scanf("%d", &n);
    printf("Enter the %d elements:\n", n);
    for(i = 0; i < n; i++) {
        newnode = (NODE*) malloc(sizeof(NODE));
        scanf("%d", &num);
        newnode->info = num;
        newnode->left = newnode->right = NULL;
        /* Attach newnode to the tree */
        if(root == NULL) {
            root = newnode;
            continue;
        }
        temp = root;
        while(temp != NULL) {
            parent = temp;
            if(num < temp->info) {
                temp = temp->left;
            } else {
                temp = temp->right;
            }
        }
        if(num < parent->info) {
            parent->left = newnode; /* Attach node */
        } else {
            parent->right = newnode; /* Attach node */
        }
    } // End for
    return(root);
}

void preorder(NODE *root) {
    NODE *temp = root;
    if(temp != NULL) {
        printf("%d ", temp->info); // Data
        preorder(temp->left); // Left
        preorder(temp->right); // Right
    }
}

void inorder(NODE *root) {
    NODE *temp = root;
    if(temp != NULL) {
        inorder(temp->left); // Left
        printf("%d ", temp->info); // Data
        inorder(temp->right); // Right
    }
}

void postorder(NODE *root) {
    NODE *temp = root;
    if(temp != NULL) {
        postorder(temp->left); // Left
        postorder(temp->right); // Right
        printf("%d ", temp->info); // Data
    }
}

NODE *search(NODE *root, int key) {
    NODE *temp = root;
    while(temp != NULL) {
        if(key == temp->info) {
            return temp;
        }
        if(key < temp->info) {
            temp = temp->left; /* Search Left Subtree */
        } else {
            temp = temp->right; /* Search Right Subtree */
        }
    }
    return NULL;
}