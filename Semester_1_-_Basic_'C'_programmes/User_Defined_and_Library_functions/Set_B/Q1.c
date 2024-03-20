// Write a function, which accepts a character and integer n as parameter and displays the next n characters.

#include <stdio.h>

char check_char_a (char x) {
    return x-1;
}

char check_char_b (char y) {
    return y+1;
}

int main() {
    char ch;
    printf ("Enter a character: ");
    ch = getchar();
    printf ("Previous character is %c.\n", check_char_a(ch));
    printf ("Next character is %c.\n", check_char_b(ch));
    return 0;
}