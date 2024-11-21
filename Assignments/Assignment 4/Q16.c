#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4};
    int b[] = {5, 6, 7, 8};
    int c[] = {9, 10, 11, 12};
    int d[] = {13, 14, 15, 16};
    int sumarr[4];
    int *pa, *pb, *pc, *pd, *psum;

    pa = a;
    pb = b;
    pc = c;
    pd = d;
    psum = sumarr;

    for (int i = 0; i < 4; i++)
        *(psum + i) = *(pa + i) + *(pb + i) + *(pc + i) + *(pd + i);

    printf("Element-wise sum array:\n");
    for (int i = 0; i < 4; i++)
        printf("%d ", *(psum + i));

    return 0;
}
