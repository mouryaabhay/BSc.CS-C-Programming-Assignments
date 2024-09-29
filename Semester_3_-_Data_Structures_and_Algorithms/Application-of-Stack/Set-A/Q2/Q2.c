// Write a program to convert an infix expression to its equivalent postfix notation. Consider usual precedence's of operators. Use stack library of stack of characters using static implementation.

#include <stdio.h>
#include <string.h>
#include "intopost.h"

void main() {
    char infix[MAX_SIZE], postfix[MAX_SIZE];
    printf("Enter an infix expression: ");
    gets(infix);
    infixToPostfix(infix, postfix);
    printf("Postfix expression: %s\n", postfix);
}
