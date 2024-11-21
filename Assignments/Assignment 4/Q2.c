#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 10, b = 20;

    printf("Before Swap:\n");
    printf("Value of a: %d, Address of a: %p\n", a, &a);
    printf("Value of b: %d, Address of b: %p\n", b, &b);
    swap(&a, &b);
    
    printf("\nAfter Swap:\n");
    printf("Value of a: %d, Address of a: %p\n", a, &a);
    printf("Value of b: %d, Address of b: %p\n", b, &b);

    printf("\nAddresses remain the same before and after swapping.\n");

    return 0;
}
