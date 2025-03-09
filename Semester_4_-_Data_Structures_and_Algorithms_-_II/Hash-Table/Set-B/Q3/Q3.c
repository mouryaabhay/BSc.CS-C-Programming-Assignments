// Write a program to implement hash table using chaining (Use linked list).

#include <stdio.h>
#include <stdlib.h>
#define TABLE_SIZE 10

typedef struct node {
    int key;
    struct node *next;
} NODE;

NODE *HT[TABLE_SIZE] = { NULL };

int hf(int key) {
    return key % TABLE_SIZE;
}

void insert(int key) {
    int index = hf(key);
    NODE *newnode = (NODE *)malloc(sizeof(NODE));
    newnode->key = key;
    newnode->next = NULL;
    if (HT[index] == NULL) {
        HT[index] = newnode;
    } else {
        NODE *temp = HT[index];
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
    for (i = 0; i < TABLE_SIZE; i++) {
        printf("Index %d: ", i);
        for (temp = HT[i]; temp != NULL; temp = temp->next) {
            printf("%d -> ", temp->key);
        }
        printf("NULL\n");
    }
}

void main() {
    int numKeys, key, i;

    printf("How many keys do you want to add? ");
    scanf("%d", &numKeys);

    for (i = 0; i < numKeys; i++) {
        printf("Enter key %d: ", i + 1);
        scanf("%d", &key);
        insert(key);
    }

    showTable();
}