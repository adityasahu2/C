#include <stdio.h>

int main() {
    int a[] = {120, 502, 118, 188, 106, 447};
    int *ptr;

    ptr = a;

    printf("Array contents using pointer:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d\n", *(ptr + i));
    }

    return 0;
}
