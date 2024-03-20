// Accept a character and check if it is uppercase alphabet, lowercase alphabet, digit or special symbol.

#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    ch = getchar();
    if((ch>='a')&&(ch<='z')) {
        printf("%c is a lowercase alphabet.\n",ch);
    }
    else {
        if((ch>='A')&&(ch<='Z')) {
            printf("%c is a lowercase alphabet.\n",ch);
        }
        else {
            if((ch>='0')&&(ch<='9')) {
                printf("%c is a digit.\n",ch);
            }
            else {
                printf("%c is a special symbol.\n",ch);
            }
        }
    }
    return 0;
}
