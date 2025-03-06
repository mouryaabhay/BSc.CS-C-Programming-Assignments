// Write a program to implement hash table using chaining (Use linked list).

#include <stdio.h>
#include <stdlib.h>
#define TABLE_SIZE 10

typedef struct node {
    int key;
    struct node *next;
} NODE;

NODE *HT[TABLE_SIZE] = { NULL };

int hf (int key) {
    return key % TABLE_SIZE;
}

void insert (int key) {
    int index = hf(key);
    NODE *newnode = NULL, *temp;
    newnode = (NODE *) malloc (sizeof(NODE));
    newnode->key = key;
    newnode->next = NULL;
    if (HT[index] == NULL) {
        HT[index] = newnode;
    } else {
        temp = HT[index];
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void showTable() {
    int i;
    NODE *temp;
    printf("\nHash Table:\n");
    for(i = 0; i < TABLE_SIZE; i++) {
        printf("Index %d: ", i); 
        for (temp = HT[i]; temp != NULL; temp = temp->next) {
            printf("%d -> ", temp->key);
        }
        printf("NULL\n");
    }
}

void main() {
    insert(80);
    insert(23);
    insert(34);
    insert(48);
    insert(73);
    insert(93);
    insert(78);
    showTable();
}