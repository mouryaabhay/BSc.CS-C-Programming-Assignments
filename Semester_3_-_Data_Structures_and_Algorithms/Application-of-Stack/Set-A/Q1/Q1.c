// Write a program that reverses a string of characters. The function should use a stack library (cststack.h) ofstack of characters using a static implementation of the stack

#include <stdio.h>
#include <string.h>
#include "cststack.h"

int main() {
    char str[20];
    int n;
    STACK PS;
    initstack(&PS);
    printf("Enter a sentence: ");
    gets(str);
    reverse(str);
    printf("The reversed string is \"%s\".", str);
    return 0;
}