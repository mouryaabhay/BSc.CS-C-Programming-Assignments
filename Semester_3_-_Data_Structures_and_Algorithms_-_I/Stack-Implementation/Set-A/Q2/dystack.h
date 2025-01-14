typedef struct Node {
    int info;
    struct Node *next;
} Node;
Node *top;

void initstack() {
    top = NULL;
}

int isEmpty() {
    return(top == NULL);
}

void push(int num) {
    Node *newNode = (Node*) malloc(sizeof(Node));
    newNode -> info = num;
    newNode -> next = top;
    top = newNode;
}

int pop() {
    Node *temp = top;
    int num = top -> info;
    top = top -> next;
    free(temp);
    return num;
}

int peek() {
    return top -> info;
}