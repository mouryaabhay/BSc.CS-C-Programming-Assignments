typedef struct node {
    int coef, exp;
    struct node *next;
} POLY;

void createlist (POLY *head) {
    POLY *temp = head, *newnode;
    int i, n;
    printf("\nHow many terms?\n");
    scanf("%d", &n);
    printf("\nEnter the terms in descending order of power: \n");
    for(i = 1; i <= n; i++) {
        newnode = (POLY *) malloc(sizeof(POLY));
        newnode -> next = NULL;
        printf("\nEnter Coeff and Exponent: ");
        scanf("%d%d", &newnode -> coef, &newnode -> exp);
        temp -> next = newnode;
        temp = newnode;
    }
}

void display (POLY *head) {
    POLY *temp;
    for (temp = head -> next; temp != NULL; temp = temp -> next) {
        printf(" <%dx^%d>+", temp -> coef, temp -> exp);
        printf("\b\n");
    }
}

void add (POLY *p1, POLY *p2, POLY *p3) {
    POLY *t1 = p1 -> next, *t2 = p2 -> next, *t3 = p3, *newnode;
    int i;
    while(t1 != NULL && t2 != NULL) {
        newnode = (POLY *) malloc(sizeof(POLY));
        newnode -> next = NULL;
        if(t1 -> exp < t2 -> exp) {
            newnode -> exp = t1 -> exp;
            newnode -> coef = t1 -> coef;
            t1 = t1 -> next;
        } else {
            if(t1 -> exp < t2 -> exp) {
                newnode -> exp = t2 -> exp;
                newnode -> coef = t2 -> coef;
                t2 = t2 -> next;
            } else {
                newnode -> exp = t1 -> exp;
                newnode -> coef = t1 -> coef + t2 -> coef;
                t1 = t1 -> next;
                t2 = t2 -> next;
            }
        }
        /* Link newnode */
        t3 -> next = newnode;
        t3 = newnode;
    }
    while (t1) {
        newnode = (POLY *) malloc(sizeof(POLY));
        newnode -> next = NULL;
        newnode -> exp = t1 -> exp;
        newnode -> coef = t1 -> coef;
        t3 -> next = newnode;
        t3 = newnode;
        t1 = t1 -> next;
    }
    while (t2) {
        newnode = (POLY *) malloc(sizeof(POLY));
        newnode -> next = NULL;
        newnode -> exp = t2 -> exp;
        newnode -> coef = t2 -> coef;
        t3 -> next = newnode;
        t3 = newnode;
        t2 = t2 -> next;
    }
}