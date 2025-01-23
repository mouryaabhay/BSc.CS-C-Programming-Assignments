#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int info;
    struct node* next;
} NODE;

NODE *front, *rear;

void init() {
    front = rear = NULL;
}

int isempty() {
    return (front == NULL);
}

void addq(int num) {
    NODE* newnode = (NODE*) malloc(sizeof(NODE));
    newnode->info = num;
    newnode->next = NULL;
    if (front == NULL) {
        front = rear = newnode;
    } else {
        rear->next = newnode;
        rear = newnode;
    }
}

int removeq() {
    int num;
    NODE* temp = front;
    num = front->info;
    front = front->next;
    if (front == NULL) {
        rear = NULL;
    }
    free(temp);
    return num;
}

int peek() {
    return front->info;
}
