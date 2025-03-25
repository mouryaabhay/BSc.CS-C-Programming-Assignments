// Write a program to implement various types of hash functions which are used to place the data in a hash table.
// a. Division Method
// b. Mid Square Method
// c. Digit Folding Method
// Accept n values from the user and display appropriate message in case of collision for each of the above functions.

#include <stdio.h>
#define TABLE_SIZE 10

void init(int HT[TABLE_SIZE]) {
    int i;
    for(i = 0; i < TABLE_SIZE; i++) {
        HT[i] = -1;
    }
}

void display(int HT[TABLE_SIZE]) {
    int i;
    printf("\nHash Table\n");
    for(i = 0; i < TABLE_SIZE; i++) {
        printf("Position %d: key[%d]\n", i, HT[i]);
    }
    printf("\n");
}

int divisionMethod(int key) {
    return key % TABLE_SIZE;
}

int midSquareMethod(int key) {
    int square = key * key;
    int mid = (square / 10) % 10;
    return mid % TABLE_SIZE;
}

void insert (int HT[TABLE_SIZE], int key, int index) {
    if (HT[index] == -1) {
        HT[index] = key;
    } else {
        printf("Collision detected at position %d for key %d\n\n", index, key);
    }
}

int digitFoldingMethod (int key) {
    int sum = 0;
    while (key > 0) {
        sum += key % 100;
        key = key / 100;
    }
    return sum % TABLE_SIZE;
}

int main() {
    int HT[TABLE_SIZE];
    int n, key, choice, index;

    // Ask for hashing method first
    printf("\nChoose hashing method");
    printf("\n 1. Division Method\n 2. Mid Square Method\n 3. Digit Folding Method\n");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    // Ask for the number of keys to insert
    printf("Enter the number of keys to insert: ");
    scanf("%d", &n);
    
    init(HT); // Initialize the hash table

    for(int i = 0; i < n; i++) {
        printf("Enter key %d: ", i + 1);
        scanf("%d", &key);

        // Determine the index based on the chosen hashing method
        switch (choice) {
            case 1:
                index = divisionMethod(key);
                insert(HT, key, index);
                break;
            case 2:
                index = midSquareMethod(key);
                insert(HT, key, index);
                break;
            case 3:
                index = digitFoldingMethod(key);
                insert(HT, key, index);
                break;
            default:
                printf("Invalid choice. Skipping key %d...\n", key);
                break;
        }
    }

    display(HT); // Display the final state of the hash table
    return 0;
}