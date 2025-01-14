// Write a program that reverses a string of characters. The function should use a stack library (cststack.h) ofstack of characters using a static implementation of the stack

#include <stdio.h>
#include <string.h>
#include "cststack.h"

void main() {
    char str[MAXSIZE];
    printf("Enter a word: ");
    scanf("%s", str);
    reverse(str);
    printf("The reversed string is \"%s\".\n", str);
    if(isPalindrome(str))
        printf("\"%s\" is a palindrome.\n", str);
    else
        printf("\"%s\" is not a palindrome.\n", str);
}