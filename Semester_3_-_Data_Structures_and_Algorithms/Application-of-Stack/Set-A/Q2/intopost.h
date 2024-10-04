#define MAXSIZE 100

typedef struct {
    int data[MAXSIZE];
    int top;
} STACK;

void initStack(STACK *ps) {
    ps->top = -1;
}

int isEmpty(STACK *ps) {
    return (ps->top == -1);
}

int isFull(STACK *ps) {
    return (ps->top == MAXSIZE - 1);
}

int pop(STACK *ps) {
    return (ps->data[ps->top--]);
}

void push(STACK *ps, int n) {
    ps->data[++ps->top] = n;
}

int peek(STACK *ps) {
    return (ps->data[ps->top]);
}

int priority(char ch) {
    switch (ch) {
        case '+':
        case '-': return 1;  // Priority 1 for '+' and '-'
        case '*':
        case '/':
        case '%': return 2;  // Priority 2 for '*', '/' and '%'
        case '^':
        case '$': return 3;  // Priority 3 for '^' and '$'
        default: return 0;  // Default priority 0 for other characters
    }
}

void infixToPostfix(char infix[], char postfix[]) {
    // Step 1: Initialize an empty stack for operators
    STACK opstk;
    initStack(&opstk);
    int i = 0, j = 0;
    char ch, ch1;

    // Step 2: Scan the infix expression from left to right
    for (i = 0; infix[i] != '\0'; i++) {
        ch = infix[i];

        // Step 3: Process each character of the infix expression
        switch (ch) {
            case '(':
                // Step 4: If the character is an opening parenthesis, push it onto the stack
                push(&opstk, ch);
                break;
            case '+':
            case '-':
            case '*':
            case '/':
            case '%':
            case '^':
            case '$':
                // Step 5: If the character is an operator
                // Step 5.1: While the stack is not empty and the top of the stack has higher or equal precedence to the current operator
                while ((!isEmpty(&opstk) && priority(peek(&opstk))) >= priority(ch)) {
                    // Pop operators from the stack and add to the postfix expression
                    postfix[j++] = pop(&opstk);
                }
                // Step 5.2: Push the current operator onto the stack
                push(&opstk, ch);
                break;
            case ')':
                // Step 6: If the character is a closing parenthesis
                // Step 6.1: Pop operators from the stack and add to the postfix expression until an opening parenthesis is encountered
                while ((ch1 = pop(&opstk)) != '(') {
                    postfix[j++] = ch1;
                }
                // Note: The opening parenthesis is popped but not added to the postfix expression
                break;
            default:
                // Step 7: If the character is an operand, add it to the postfix expression
                postfix[j++] = ch;
        }
    }

    // Step 8: After scanning the entire infix expression, pop any remaining operators from the stack and add to the postfix expression
    while (!isEmpty(&opstk)) {
        postfix[j++] = pop(&opstk);
    }

    // Step 9: Terminate the postfix expression string
    postfix[j] = '\0';
}