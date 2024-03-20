// Accept a character and display the name of the color if it is a color of the rainbow.
// Example:
//     Input = b, Output: Blue
//     Input = h, Output: Not in rainbow.

#include <stdio.h>

int main() {
    char ch;
    printf ("Enter a Character: ");
    ch = getchar();
    switch(ch) {
        case 'V':
        case 'v': printf ("Violet\n");
            break;
        case 'I':
        case 'i': printf ("Indigo\n");
            break;
        case 'B':
        case 'b': printf ("Blue\n");
            break;
        case 'G':
        case 'g': printf ("Green\n");
            break;
        case 'Y':
        case 'y': printf ("Yellow\n");
            break;
        case 'O':
        case 'o': printf ("Orange\n");
            break;
        case 'R':
        case 'r': printf ("Red\n");
            break;
        default: printf ("Not in the rainbow.");
    }
    return 0;
}