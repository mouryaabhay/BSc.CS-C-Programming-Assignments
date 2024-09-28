#define MAXSIZE 100

typedef struct {
    int data[MAXSIZE];
    int top;
} STACK;

void initstack(STACK *PS) {
    PS -> top = -1;
}

int isEmpty(STACK *PS) {
    return(PS -> top == -1);
}

void push(STACK *PS, int num) {
    PS -> data[++PS -> top] = num;
}

int pop(STACK *PS) {
    return(PS -> data[PS -> top --]);
}

void reverse(char str[MAXSIZE]) {
    int i;
    STACK PS;
    initstack(&PS);
    for(i = 0; str[i] != '\0'; i++)
        push(&PS, str[i]);
    i = 0;
    while(!isEmpty(&PS))
        str[i++] = pop(&PS);
}