#define MAX_SIZE 100

typedef struct {
    char data[MAX_SIZE];
    int top;
} Stack;

void initStack(Stack *s) {
    s->top = -1;
}

int isEmpty(Stack *s) {
    if(s->top == -1)
        return 1;
    else
        return 0;
}

void push(Stack *s, char ch) {
    s->data[++s->top] = ch;
}

char pop(Stack *s) {
    char ch;
    ch = s->data[s->top--];
    return ch;
}

char peek(Stack *s) {
    char ch;
    ch = s->data[s->top];
    return ch;
}

int priority(char op) {
    switch (op) {
        case '+':
        case '-':
            return 1;  // Priority 1 for '+' and '-'
        case '*':
        case '/':
        case '%':
            return 2;  // Priority 2 for '*', '/' and '%'
        case '^':
        case '$':
            return 3;  // Priority 3 for '^' and '$'
        default:
            return 0;  // Default priority 0 for other characters
    }
}

void infixToPostfix(char *infix, char *postfix) {
    // Step 3: Opstk is an empty stack
    Stack opstk;
    initStack(&opstk);
    int i = 0, j = 0;

    // Step 4: Read a character ch from the infix string
    while (infix[i] != '\0') {
        char ch = infix[i];

        // Step 5: If ch is an operand, add ch to the postfix string
        switch (ch) {
            case '(':
                // Step 6: If ch is an opening bracket, push ch into opstk
                push(&opstk, ch);
                break;
            case '+':
            case '-':
            case '*':
            case '/':
            case '^':
                // Step 7: If ch is an operator
                while ((!isEmpty(&opstk) && priority(peek(&opstk))) >= priority(ch)) {
                    // Pop from opstk and add to postfix string
                    postfix[j++] = pop(&opstk);
                }
                // Push ch into opstk
                push(&opstk, ch);
                break;
            case ')':
                // Step 8: If ch is a closing bracket
                while (!isEmpty(&opstk) && peek(&opstk) != '(') {
                    // Pop till '(' and add to postfix string
                    postfix[j++] = pop(&opstk);
                }
                if (!isEmpty(&opstk) && peek(&opstk) == '(') {
                    // Pop the '(' from opstk
                    pop(&opstk);
                }
                break;
            default:
                // If ch is an operand
                if (ch != ' ') {
                    // Add ch to the postfix string
                    postfix[j++] = ch;
                }
        }
        i++;  // Increment i at the end of the loop
    }

    // Step 10: While opstk is not empty
    while (!isEmpty(&opstk)) {
        // Pop and add to postfix string
        postfix[j++] = pop(&opstk);
    }

    // Step 11: Terminate the postfix string
    postfix[j] = '\0';
}