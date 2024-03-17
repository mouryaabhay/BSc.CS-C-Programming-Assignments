// Write a program to read the contents of a file (passed as command line argument) and display its contents on the screen.
// Also display total number of characters, lines and words in the file.

#include <stdio.h>

int main(int argc, char *argv[]) {
    int countchar = 0, countline = 0, countword = 0, flag = 0;
    FILE *fp;
    char ch;

    // Open the file passed as command line argument
    fp = fopen(argv[1], "r");
    if (fp == NULL) {
        printf("File opening Error!!");
        return -1;
    }

    // Read the file character by character
    while (!feof(fp)) {
        ch = fgetc(fp);
        countchar++;

        // Increment line count on newline character
        if (ch == '\n') {
            countline++;
        }

        // Word count logic
        if (ch == '\n' || ch == '\t' || ch == '\0' || ch == ',' || ch == '.' || ch == ' ' || ch == ':') {
            if (flag == 1) {
                countword++;
                flag = 0;
            }
            else {
                flag = 1; // Signifies the end of a word.
            }
        }
        else {
            flag = 1; // Signifies the beginning of a new word.
        }
    }

    printf("\nCharacter count: %d", countchar);
    printf("\nWord count: %d", countword);
    printf("\nLine count: %d", countline + 1); // Add 1 to countline as feof() doesn't read the last line's newline character

    fclose(fp);
    return 0;
}