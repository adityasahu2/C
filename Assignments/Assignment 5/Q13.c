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


// The function fun() returns a pointer to a local variable sum. Once fun() exits, the memory for sum is no longer valid, and the pointer ptr becomes a dangling pointer. Dereferencing this pointer leads to undefined behavior, which can result in unexpected behavior like a garbage value or segmentation fault.