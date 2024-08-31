#define MAXSIZE 100

typedef struct stack {
    int data[MAXSIZE];
    int top;
} STACK;

void initialize(STACK *PS) {
    PS -> top = -1;
}

int isEmpty(STACK *PS) {
    if (PS -> top == -1)
        return 1;
    else
        return 0;
}

int isFull(STACK *PS) {
    return (PS -> top == MAXSIZE - 1);
}

void push(STACK *PS, int num) {
    ++PS -> top;
    PS -> data[PS -> top] = num;
}

int pop(STACK *PS) {
    int num;
    num = PS -> data[PS -> top];
    PS -> top--;
    return num;
}

int peek(STACK *PS) {
    int num;
    num = PS -> data[PS -> top];
    return num;
}