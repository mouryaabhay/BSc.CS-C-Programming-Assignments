// Find the maximum among two numbers.

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&a,&b);
    if (a > b) {
        printf("%d is bigger.\n", a);
    }
    else {
        printf("%d is bigger.\n", b);
    }
    return 0;
}