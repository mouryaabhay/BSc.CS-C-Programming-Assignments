#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 20

typedef struct node {
    int info;
    struct node *left, *right;
} NODE;

/* -------- QUEUE FUNCTIONS -------- */

typedef struct {
    NODE *data[MAXSIZE];
    int front, rear;
} QUEUE;

void initq(QUEUE *q) {
    q->front = q->rear = -1;
}

int isfull(QUEUE *q) {
    return(q->rear == MAXSIZE - 1);
}

int isempty(QUEUE *q) {
    return(q->front == q->rear);
}

void addq(QUEUE *q, NODE *treenode) {
    q->data[++q->rear] = treenode;
}

NODE *removeq(QUEUE *q) {
    return q->data[++q->front];
}

/* -------- QUEUE FUNCTIONS -------- */

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

void nodesAtLevel(NODE *root) {
    int i, level = 0, nodeCount = 0;
    NODE *temp, *marker = NULL;
    QUEUE q;
    initq(&q);
    addq(&q, root);
    addq(&q, marker);
    printf("\nLevel %d --> ", level);
    while(!isempty(&q)) {
        temp = removeq(&q);
        if(temp == marker) {
            level++;
            if(!isempty(&q)) {
                addq(&q, marker);
                printf("\nLevel %d --> ", level);
            }
        } else {
            nodeCount++;
            printf("1. %d\n", nodeCount);
            printf("%d\t", temp->info);
            if(temp->left) {
                addq(&q, temp->left);
            }
            if(temp->right) {
                addq(&q, temp->right);
            }
        }
    }
    printf("\nTotal Levels: %d\n", level);
}