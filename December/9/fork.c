#include <stdio.h>

int main() {
    fork();
    fork()+fork();
    fork();
    printf("Hi\n");
    return 0;
}