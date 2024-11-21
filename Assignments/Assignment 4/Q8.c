#include <stdio.h>

int main() {
    int a[10] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};
    int *ptr = a;

    printf("Index\tValue\tAddress\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\t%d\t%p\n", i, *(ptr + i), (ptr + i));
    }

    return 0;
}
