// Write a program to display the command line arguments.

#include <stdio.h>

int main(int argc, char *argv[]) {
    int i;
    printf ("Total Arguments = %d\n", argc);
    printf("The arguments (except for ./a.exe) passed are:\n");
    for (i = 1; i < argc; i++)
        printf(" %d: %s\n", i, argv[i]);  // Print argument number and value
    return 0;
}