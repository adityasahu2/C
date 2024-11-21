#include <stdio.h>

int find_largest(int *arr, int size) {
    int *ptr = arr;
    int max = *ptr;

    for (int i = 1; i < size; i++) {
        ptr++;
        if (*ptr > max)
            max = *ptr;
    }
    return max;
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements of the array: ", n);
    for (int i = 0; i < n; i++) 
        scanf("%d", &arr[i]);

    int largest = find_largest(arr, n);
    printf("The largest value in the array is: %d\n", largest);

    return 0;
}
