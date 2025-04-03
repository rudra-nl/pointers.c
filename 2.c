#include <stdio.h>

// Call by value (does not modify original variables)
void swapCallByValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    printf("Inside swapCallByValue: x = %d, y = %d\n", x, y);
}

// Call by reference (modifies original variables using pointers)
void swapCallByReference(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("Inside swapCallByReference: *x = %d, *y = %d\n", *x, *y);
}

int main() {
    int a = 10, b = 20;

    printf("Before swap (call by value): a = %d, b = %d\n", a, b);
    swapCallByValue(a, b);
    printf("After swap (call by value): a = %d, b = %d\n", a, b); // a and b remain unchanged

    printf("\nBefore swap (call by reference): a = %d, b = %d\n", a, b);
    swapCallByReference(&a, &b);
    printf("After swap (call by reference): a = %d, b = %d\n", a, b); // a and b are now swapped

    return 0;
}