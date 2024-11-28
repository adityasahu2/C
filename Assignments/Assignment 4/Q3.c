#include <stdio.h>

struct Data {
    float x;
    float y;
    float z;
};

int main() {
    struct Data d = {6.7, 1.2, 2.3};
    struct Data *p = &d;

    printf("x = %.2f\n", p->x);
    printf("y = %.2f\n", p->y);
    printf("z = %.2f\n", p->z);

    return 0;
}
