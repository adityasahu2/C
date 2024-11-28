#include <stdio.h>
int exists(int arr[], int size, int value) {
    while (size--) if (arr[size] == value) return 1;
    return 0;
}

int main() {
    int input[] = {4, 7, 7, 3, 2, 5, 5}, output[7], n = 7, size = 0;

    for (int i = 0; i < n; i++)
        if (!exists(output, size, input[i])) output[size++] = input[i];

    printf("Distinct elements: ");
    for (int i = 0; i < size; i++) printf("%d ", output[i]);
    printf("\n");
    return 0;
}
