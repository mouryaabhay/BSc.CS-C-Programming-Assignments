// Write a program to convert an infix expression to its equivalent postfix notation and evaluate. Consider usual precedence's of operators. Use stack library of stack of characters using static implementation.
#include <stdio.h>
#include "intopost.h"

void main() {
    char infix[MAXSIZE], postfix[MAXSIZE];
    printf("Enter an infix expression: ");
    scanf("%s", infix);

    infixToPostfix(infix, postfix);
    printf("Postfix expression: %s\n", postfix);

    int result = evaluatePostfix(postfix);
    printf("Result: %d\n", result);
}