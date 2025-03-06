// Write a program to implement hash table using chaining (Use linked list).

#include <stdio.h>

typedef struct {
    int key;
    int chain;
} HT;

void initialize (HT ht[10]) {
    int i;
    for (i = 0; i < 10; i++) {
        ht[i].key = ht[i].chain = -1;
    }
}

int hf (int key, int i) {
    return (key % 10 + i) % 10;
}

void showTable (HT ht[10]) {
    int i;
    for (i = 0; i < 10; i++) {
        printf ("%d[%d][%d]\n", i, ht[i].key, ht[i].chain);
    }
}

void insert (HT ht[10], int key) {
    int index, oldindex, i = 0;
    index = hf (key, i);
    if (ht[index].key == -1) { // Empty Bucket
        ht[index].key = key;
    } else {
        // Reach the end of the chain
        while (ht[index].chain != -1) {
            index = ht[index].chain;
            oldindex = index;
            for (i = 1; i < 10; i++) { // Find new location
                index = hf(key, i);
                if (ht[index].key == -1) { // Empty Bucket
                    ht[index].key = key;
                    ht[oldindex].chain = index; // Form the chain
                    return;
                }
            }
        }
    }
}

int search (HT ht[10], int key) {
    int index = hf(ht, key);
    while (index != -1) {
        if (ht[index].key == key) {
            return index;
        } else {
            index = ht[index].chain;
        }
    }
    return -1;
}

void main() {
    HT ht[10];
    initialize(ht);
    insert(ht, 11);
    insert(ht, 32);
    insert(ht, 41);
    insert(ht, 54);
    insert(ht, 33);
    insert(ht, 61);
    insert(ht, 72);
}