#include <stdio.h>

struct Data {
    int a, b, c;
};

int main() {
    struct Data d = {12, 25, 18};
    struct Data *ptr = &d;

    ptr->a += 10;
    ptr->b += 10;
    ptr->c += 10;

    printf("Updated values: a = %d, b = %d, c = %d\n", ptr->a, ptr->b, ptr->c);

    return 0;
}
