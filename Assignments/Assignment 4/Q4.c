#include <stdio.h>

struct Data {
    int x;
};

int main() {
    struct Data d = {89};
    struct Data *p1 = &d, *p2 = &d, *p3 = &d;

    printf("Value of x (using p1): %d\n", p1->x);

    p3->x = 100;
    printf("Updated value of x (using p3): %d\n", p3->x);

    return 0;
}
