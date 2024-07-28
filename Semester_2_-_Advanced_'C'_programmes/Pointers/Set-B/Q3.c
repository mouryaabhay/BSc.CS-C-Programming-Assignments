// Write a program to accept two strings as command line arguments and compare the strings.

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error: Please provide exactly two strings as arguments.\n");
        return 1; // Indicate error
    }

    char *str1 = argv[1];
    char *str2 = argv[2];

    int comparison;
    comparison = strcmp(str1, str2);

    if (comparison == 0) {
        printf("The strings \"%s\" and \"%s\" are identical.\n", str1, str2);
    } else if (comparison < 0) {
        printf("The string \"%s\" comes before \"%s\" in the alphabetical order.\n", str1, str2);
    } else {
        printf("The string \"%s\" comes after \"%s\" in the alphabetical order.\n", str1, str2);
    }

    return 0; // Indicate successful execution
}