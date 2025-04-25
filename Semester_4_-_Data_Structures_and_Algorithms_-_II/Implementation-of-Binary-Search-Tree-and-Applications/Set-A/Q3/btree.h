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

int isempty(QUEUE *q) {
    return(q->front == q->rear);
}

void addq(QUEUE *q, NODE *treenode) {
    q->data[++q->rear] = treenode;
}

NODE *removeq(QUEUE *q) {
    int num;
    num = q->data[++q->front];
    return num;
}

/* -------- BINARY SEARCH TREE FUNCTIONS -------- */

// Function to create a binary search tree
NODE *createbst(NODE *root) {
    NODE *newnode, *temp, *parent;
    int i, n, num;
    printf("\nHow many nodes: ");
    scanf("%d", &n);
    printf("Enter the %d elements: ", n);
    for(i = 0; i < n; i++) {
        newnode = (NODE*) malloc(sizeof(NODE));
        scanf("%d", &num);
        newnode->info = num;
        newnode->left = newnode->right = NULL;
        
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
            parent->left = newnode;
        } else {
            parent->right = newnode;
        }
    }
    return root;
}

// Function to perform level-order traversal
void levelOrderTraversal(NODE *root) {
    int i, level = 0, count = 0;
    NODE *temp, *marker = NULL;
    QUEUE q;
    initq(&q);
    addq(&q, root);
    addq(&q, marker);
    printf("\nLevel %d: ", level);
    printf("\n- Elements: ");
    while(!isempty(&q)) {
        temp = removeq(&q);
        if(temp == marker) {
            printf("\n- Total Nodes: %d\n", count);
            level++;
            count = 0;
            if(!isempty(&q)) {
                addq(&q, marker);
                printf("\nLevel %d: ", level);
                printf("\n- Elements: ");
            }
        } else {
            count++;
            printf("%d  ", temp->info);
            if(temp->left != NULL) {
                addq(&q, temp->left);
            }
            if(temp->right != NULL) {
                addq(&q, temp->right);
            }
        }
    }
    printf("\nTotal levels in the tree: %d.", level);
}

/*
// Function to perform level-order traversal
void levelOrderTraversal(NODE *root) {
    if (root == NULL) return;
    QUEUE q;
    initq(&q);
    addq(&q, root);
    int i, level = 0;
    printf("\nDisplaying nodes at each level:\n");
    while (!isempty(&q)) {
        int nodesAtCurrentLevel = q.rear - q.front; // Number of nodes at the current level
        printf("Level %d: ", level);
        printf("\n- Elements: ");
        // Process all nodes at the current level
        for (i = 0; i < nodesAtCurrentLevel; i++) {
            NODE *current = removeq(&q);
            printf("%d  ", current->info);
            // Add left and right children of current node to the queue
            if (current->left) addq(&q, current->left);
            if (current->right) addq(&q, current->right);
        }
        printf("\n- Total Nodes: %d\n", nodesAtCurrentLevel);
        level++;
    }
    printf("\nTotal levels in the tree: %d\n", level);
}
*/