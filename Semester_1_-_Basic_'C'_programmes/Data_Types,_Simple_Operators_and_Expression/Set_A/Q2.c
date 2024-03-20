// Accept a character and display its next and previous character.

#include <stdio.h>

int main() {
    char ch;
    printf ("Enter a character: ");
    ch = getchar(); //or scanf ("%c", &ch); 
    printf ("Previous character is: %c\n", ch-1);
    printf ("Next character is: %c\n", ch+1);
    return 0;
}