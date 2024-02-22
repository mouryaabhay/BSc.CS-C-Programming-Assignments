/*
    A program that will accept a string and character to search.
    The program will call a function which will search for the occurrence
    position of the character in the string and return its position.
*/

#include <stdio.h>

// Function to count occurrence of a character in a string
int countOccurrence(char str[20], char ch)
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
        if (str[i] == ch)
            return i; // Return position if character found
    return -1; // Return -1 if character not found
}

int main()
{
    char str[20], ch;
    int position;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter a character to search: ");
    scanf(" %c", &ch);

    position = countOccurrence(str, ch);

    if (position != -1)
        printf("The character '%c' is found at position: %d\n", ch, position + 1);
    else
        printf("The character '%c' is not found in the string.\n", ch);
    
    return 0;
}