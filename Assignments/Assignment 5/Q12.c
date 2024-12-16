int *fun();
int main(void) {
    int *ptr = fun();
    printf("%d\n", *ptr);
    return 0;
}

int *fun() {
    int a = 10, b = 20;
    int sum = 0;
    sum = sum + a + b;
    return &sum;
}

//Undefined behavior due to dereferencing a dangling pointer. It could lead to a segmentation fault or return a garbage value.