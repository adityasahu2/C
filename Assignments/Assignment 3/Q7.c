#include <stdio.h>
int exists(int arr[], int size, int value);
int exists(int arr[], int size, int value) {
    for (int i = 0; i < size; i++)
        if (arr[i] == value) return 1;
    return 0;
}

int main() {
    int input[] = {4, 7, 7, 3, 2, 5, 5};
    int n = 7;
    int output[n], outputSize = 0;

    for (int i = 0; i < n; i++) {
        if (!exists(output, outputSize, input[i])) {
            output[outputSize++] = input[i];
        }
    }

    printf("Distinct elements: ");
    for (int i = 0; i < outputSize; i++)
        printf("%d ", output[i]);
    printf("\n");

    return 0;
}
