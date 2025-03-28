typedef struct node {
    int info;
    struct node *next;
} NODE;

void createlist(NODE *head) {
    int n, count;
    NODE *last, *newnode;
    printf("How many nodes: ");
    scanf("%d", &n);
    last = head;
    for(count = 1; count<= n; count++) {
        newnode = (NODE*) malloc(sizeof(NODE));
        newnode -> next = NULL;
        printf("Enter the node %d data: ", count);
        scanf("%d", &newnode -> info);
        last -> next = newnode;
        last = newnode;
    }
}

void append(NODE *head, int num) {
    NODE *newnode, *temp;
    newnode = (NODE *) malloc(sizeof(NODE));
    newnode -> info = num;
    newnode -> next = NULL;
    if(head -> next == NULL) {
        head -> next = newnode;
    } else {
        temp = head -> next;
        while(temp -> next != NULL) {
            temp = temp -> next;
        }
        temp -> next = newnode;
    }
}

void insert(NODE *head, int num, int pos) {
    NODE *newnode, *temp;
    int i; /* Move temp to node at pos -1 */
    for(temp = head, i = 1; (temp != NULL) && (i <= pos - 1); i++) {
        temp = temp -> next;
    }
    if (temp == NULL) {
        printf("Position is out of range");
        return;
    }
    newnode = (NODE*) malloc(sizeof(NODE));
    newnode -> info = num; /* insert newnode between temp and temp -> next */
    newnode -> next = temp -> next;
    temp -> next = newnode;
}

int search(NODE *head, int num) {
    NODE *temp;
    int pos;
    for(temp = head -> next, pos = 0; temp != NULL; temp = temp -> next, pos++) {
        if(temp -> info == num) {
            return pos;
        }
    }
    return -1; // Return -1 if the value is not found
}

void deletevalue(NODE *head, int num) {
    NODE *temp, *temp1;
    /* Search for element */
    for(temp = head; temp -> next != NULL; temp = temp -> next) {
        if (temp -> next -> info == num) { /* Found */
            temp1 = temp -> next;
            temp -> next = temp1 -> next;
            free(temp1);
            return;
        }
        printf("Element not found");
    }
}

void deletepos(NODE *head, int pos) {
    NODE *temp, *temp1;
    int i;
    /* Move temp to node at pos - 1 */
    for(temp = head, i = 1; (temp -> next != NULL) && (i <= pos - 1); i++) {
        temp = temp -> next;
    }
    if(temp -> next == NULL) {
        printf ("Position is out of range");
        return;
    }
    temp1 = temp -> next;
    temp -> next = temp1 -> next;
    free(temp1);
}

void display(NODE *head) {
    NODE *temp;
    for(temp = head -> next; temp != NULL; temp = temp -> next) {
        printf("%d\t", temp -> info);
    }
    printf("\n");
}

void reverse(NODE *head) {
    NODE *t1 = head -> next, *t2, *t3;
    if(t1 == NULL) {
        return;
    }
    t2 = t1 -> next;
    if(t2 == NULL) {
        return;
    }
    t3 = t2 -> next;
    t1 -> next = NULL;
    while(t3!=NULL) {
        t2 -> next = t1;
        t1 = t2;
        t2 = t3;
        t3 = t3 -> next;
    }
    t2 -> next = t1;
    head -> next = t2;
}

void merge(NODE *head1, NODE *head2, NODE *head3) {
    NODE *t1 = head1 -> next, *t2 = head2 -> next, *last = head3, *newnode;
    while (t1 != NULL && t2 != NULL) {
        newnode = (NODE *) malloc(sizeof(NODE));
        newnode -> next = NULL;
        if(t1 -> info < t2 -> info) {
            newnode -> info = t1 -> info;
            t1 = t1 -> next;
        } else {
            newnode -> info = t2 -> info;
            t2 = t2 -> next;
        }
        /* Attach newnode */
        last -> next = newnode;
        last = newnode;
    }
    while (t1 != NULL) { /* First list has not ended. */
        newnode = (NODE *) malloc(sizeof(NODE));
        newnode -> info = t1 -> info;
        newnode -> next = NULL;
        t1 = t1 -> next;
        last -> next = newnode;
        last = newnode;
    }
    while (t2 != NULL) { /* Second list has not ended. */
        newnode = (NODE *) malloc(sizeof(NODE));
        newnode -> info = t2 -> info;
        newnode -> next = NULL;
        t2 = t2 -> next;
        last -> next = newnode;
        last = newnode;
    }    
}