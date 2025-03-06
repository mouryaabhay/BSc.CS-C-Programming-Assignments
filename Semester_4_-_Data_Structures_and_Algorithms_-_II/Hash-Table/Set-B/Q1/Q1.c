// Write a menu driven program to implement hash table using arrau (insert, search, delete, display).
// Use any of the above-mentioned hash functions.
// In case of collision apply linear probing.

#include <stdio.h>

int hf (int key, int i) {
    return (key % 10 + i) % 10;
}

void insert (int HT[10], int key) {
    int i, index;
    for (i = 0; i < 10; i++) {
        index = hf (key, i);
        if (HT[index] == -1) {
            HT[index] = key;
            return;
        }
    }
    printf ("Could not insert key %d", key);
}

int search (int HT[10], int key) {
    int i, index;
    for (i = 0; i < 10; i++) {
        index = hf (key, i);
        if (HT[index] = key) {
            return index;
        }
    }
    return -1;
}

void deleteKey (int HT[10], int key) {
    int index;
    index = search(HT, key);
    if (index == -1)
        printf ("Key %d not found", key);
    else
        HT[index] = -1; // Delete key
}

void showTable (int HT[10]) {
    int i;
    for (i = 0; i < 10; i++) {
        printf ("%d[%d]\n", i, HT[i]);
    }
}

void main () {
    int HT[10], choice, key, index, i;
    for (i = 0; i < 10; i++) {
        HT[i] = -1;
    }
    do {
        printf ("\n]==== HASH TABLE MENU ====[\n1. INSERT\n2. SEARCH\n3. DELETE\n4. EXIT\n");
        printf ("Enter your choice: ");
        scanf ("%d", &choice);
        switch (choice) {
            case 1:
                printf ("Enter the key to be inserted: ");
                scanf ("%d", &key);
                insert (HT, key);
                showTable (HT);
                break;
            case 2:
                printf ("Enter the key to be searched: ");
                scanf ("%d", &key);
                index = search (HT, key);
                if (index == -1)
                    printf ("%d not found.\n", key);
                else
                    printf ("%d found at position %d\n", key, index);
                break;
            case 3:
                printf ("Enter the key to be deleted: ");
                scanf("%d", &key);
                deleteKey (HT, key);
                showTable (HT);
                break;
            default:
                printf ("Invalid choice. Please selected a valid option form the menu.\n");
                break;
        }
    } while (choice != 4);
}

/* Inputs
 * 1. Insert: 42, 17, 86, 34, 23, 12, 9, 59
 *    Expected Final Ouput:
 *      0[59]
 *      1[-1]
 *      2[42]
 *      3[23]
 *      4[34]
 *      5[12]
 *      6[86]
 *      7[17]
 *      8[-1]
 *      9[9]
 */