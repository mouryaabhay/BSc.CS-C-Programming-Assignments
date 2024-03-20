// A file “numbers.txt” contains a set of integers.
// Write a program to read this file and copy all even numbers to file “even.txt” and odd numbers to file “odd.txt”.

#include <stdio.h>

int main() {
    FILE *numbers = fopen("numbers.txt", "r");
    FILE *even = fopen("even.txt", "w+");
    FILE *odd = fopen("odd.txt", "w+");

    if (numbers == NULL || even == NULL || odd == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    int num;
    while (fscanf(numbers, "%d", &num) != EOF) {
        if (num % 2 == 0) {
            fprintf(even, "%d\n", num);
        } else {
            fprintf(odd, "%d\n", num);
        }
    }

    fclose(numbers);
    fclose(even);
    fclose(odd);

    return 0;
}