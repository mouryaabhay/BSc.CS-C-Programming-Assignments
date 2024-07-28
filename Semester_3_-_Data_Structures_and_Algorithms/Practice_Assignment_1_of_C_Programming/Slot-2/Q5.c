// Write a C program to swap two integers using call by values and call by reference.

#include <stdio.h>

// The swapping of two integers will happen locally within the function but won't affect the original variables in the caller function because of pass by value
void swap1(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}

// The swapping of two integers will happen globally and affect the original variables in the caller function because of pass by reference
void swap2(int *ptr1, int *ptr2) {
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int a = 10, b = 20;
    printf("\nBefore swapping: a = %d, b = %d", a, b);
    swap1(a, b);
    printf("\nAfter swapping by swap1: a = %d, b = %d", a, b);
    swap2(&a, &b);
    printf("\nAfter swapping by swap2: a = %d, b = %d", a, b);
    return 0;
}