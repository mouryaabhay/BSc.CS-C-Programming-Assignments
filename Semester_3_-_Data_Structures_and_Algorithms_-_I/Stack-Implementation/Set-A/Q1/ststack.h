#define MAXSIZE 10

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

int isFull(STACK *PS) {
    return (PS -> top == MAXSIZE - 1);
}

void push(STACK *PS, int num) {
    PS -> data[++PS -> top] = num;
}

int pop(STACK *PS) {
    return(PS -> data[PS -> top --]);
}

int peek(STACK *PS) {
    return(PS -> data[PS -> top]);
}