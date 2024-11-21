#include <stdio.h>

int main() {
    int arr1[] = {10, 13, 20, 33, 44};
    double arr2[] = {10.2, 13.3, 20.0, 33.3, 45.3, 89.9};

    int *p1 = arr1;
    double *p2 = arr2;

    printf("Array 1 (Integer):\n");
    printf("Index\tValue\tAddress\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\t%d\t%p\n", i, *(p1 + i), (p1 + i));
    }

    printf("\nArray 2 (Double):\n");
    printf("Index\tValue\tAddress\n");
    for (int i = 0; i < 6; i++) {
        printf("%d\t%.1f\t%p\n", i, *(p2 + i), (p2 + i));
    }

    return 0;
}
