#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int info;
    struct node* next;
} NODE;

NODE *front, *rear;

void initq() {
    rear = NULL;
}

int isempty() {
    return (rear == NULL);
}

void addq(int num) {
    NODE *newnode = (NODE*) malloc(sizeof(NODE));
    newnode->info = num;
    if(rear == NULL) {
        rear = newnode;
        rear->next = rear;
    } else {
        newnode->next = rear->next;
        rear->next = newnode;
        rear = newnode;
    }
}

int removeq() {
    NODE* front = rear->next;
    int num;
    num = front->info;
    if(rear->next == rear) {
        free(rear);
        rear = NULL;
    } else {
        rear->next = front->next;
        free(front);
    }
    return num;
}

int peek() {
    return rear->next->info;
}