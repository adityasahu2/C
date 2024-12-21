#include <stdio.h>
int sumArray(int arr[], int size) {
    return size == 0 ? 0 : arr[size - 1] + sumArray(arr, size - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("%d\n", sumArray(arr, n));
    return 0;
}
