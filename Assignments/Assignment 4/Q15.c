#include <stdio.h>

int main() {
    int a, b, c, d, maxvar;
    int *pa, *pb, *pc, *pd;

    pa = &a;
    pb = &b;
    pc = &c;
    pd = &d;

    *pa = 55;
    *pb = 105;
    *pc = 89;
    *pd = 68;

    maxvar = *pa;

    if (*pb > maxvar) maxvar = *pb;
    if (*pc > maxvar) maxvar = *pc;
    if (*pd > maxvar) maxvar = *pd;

    printf("The maximum value is: %d\n", maxvar);

    return 0;
}
