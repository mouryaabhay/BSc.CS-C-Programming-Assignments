#define MAXSIZE 100

typedef struct {
    int data[MAXSIZE];
    int front, rear;
} QUEUE;

void init(QUEUE *q) {
    q->front = q->rear = -1;
}

void enqueue(QUEUE *q, int num) {
    q->rear++;
    q->data[q->rear] = num;
}

int dequeue(QUEUE *q) {
    int num;
    q->front++;
    num = (q->data[q->front++]);
    return num;
}

int peek(QUEUE *q) {
    return(q->data[q->front++]);
}

int isfull(QUEUE *q) {
    return(q->rear == MAXSIZE - 1);
}

int isempty(QUEUE *q) {
    return(q->front == q->rear);
}