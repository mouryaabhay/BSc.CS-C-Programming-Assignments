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

int countNode(NODE *root) {
    static int count = 0;
    NODE *temp = root;
    if(temp != NULL) {
        count++;
        countNode(temp->left);
        countNode(temp->right);
    }
    return count;
}

int countLeaf(NODE *root) {
    static int leaf = 0;
    NODE *temp = root;
    if(temp != NULL) {
        if((temp->left == NULL) && (temp->right == NULL))
            leaf++;
        countLeaf(temp->left);
        countLeaf(temp->right);
    }
    return leaf;
}