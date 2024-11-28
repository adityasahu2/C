#include <stdio.h>
int binary_srch(int arr[], int n, int key) {
    int low = 0, high = n - 1, mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) return mid;
        (arr[mid] > key) ? (high = mid - 1) : (low = mid + 1);
    }
    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50}, key = 40;
    int loc = binary_srch(arr, 5, key);
    printf(loc == -1 ? "%d not found\n" : "%d found at index %d\n", key, loc);
    return 0;
}
