// Find the maximum among three numbers.

#include <stdio.h>

int main() {
    int x, y, z;
    printf("Enter 3 numbers: ");
    scanf("%d%d%d",&x,&y,&z);
    if  ((x > y) || (x > z)) {
        printf("%d is bigger.\n", x);
    }
    else {
        if (y > z) {
            printf("%d is bigger.\n", y);
        }
        else {
            printf("%d is bigger.\n", z);
        }
    }
    return 0;
}