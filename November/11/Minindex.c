#include <stdio.h>

int findMinIndex(int *arr, int size) {
    int minIndex = 0; 
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[minIndex])
            minIndex = i; 
    }
    return minIndex;
}

int main() {
    int arr[10];
    printf("Enter 10 integers: ");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    int minIndex = findMinIndex(arr, 10);
    printf("The index of the minimum element is: %d\n", minIndex);
    return 0;
}

