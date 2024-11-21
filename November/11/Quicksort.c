#include <stdio.h>
void swap(int* a, int* b);
int partition(int arr[], int low, int high);
void quickSort(int arr[], int start, int end);
void printArray(int arr[], int n);

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int p = arr[low];
    int i = low;
    int j = high;

    while (i < j) {
        while (arr[i] <= p && i <= high - 1) i++;
        while (arr[j] > p && j >= low + 1) j--;
        if (i < j) swap(&arr[i], &arr[j]);
    }
    swap(&arr[low], &arr[j]);
    return j;
}

void quickSort(int arr[], int start, int end) {
    if (start < end) {
        int p = partition(arr, start, end);
        quickSort(arr, start, p - 1);
        quickSort(arr, p + 1, end);
    }
}

void printArray(int arr[], int n){
	printf("Array elements: ");
	for(int i = 0; i < n; i++)
		printf("%d ", arr[i]);
}

int main(){
	int num;
	printf("Enter the size of array: ");
	scanf("%d",&num);
	int arr[num];
	printf("Enter %d elements: ",num);
	for(int i = 0; i < num; i++)
		scanf("%d", &arr[i]);
	quickSort(arr, 0, num - 1);
	printArray(arr, num);
	printf("\n");
	return 0;
}
