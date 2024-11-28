#include <stdio.h>

struct Data {
    int a, b, c;
};

int main() {
    struct Data d = {12, 52, 8};
    int *ptr1 = &d.a, *ptr2 = &d.b, *ptr3 = &d.c;

    *ptr1 += 10;
    *ptr2 += 10;
    *ptr3 += 10;

    printf("Updated values: a = %d, b = %d, c = %d\n", *ptr1, *ptr2, *ptr3);

    return 0;
}
