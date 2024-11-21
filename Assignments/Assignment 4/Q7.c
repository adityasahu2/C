#include <stdio.h>

int main() {
    int a = 52, b = 18;
    int *ptr1 = &a, *ptr2 = &b;

    if (*ptr1 > *ptr2) {
        printf("The greater value is: %d (from ptr1)\n", *ptr1);
    } else {
        printf("The greater value is: %d (from ptr2)\n", *ptr2);
    }

    return 0;
}
