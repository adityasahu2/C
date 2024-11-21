#include <stdio.h>
void bubbleSort(int arr[], int n);

int main(){
	int arr[] = {50, 30, 10, 40, 20};
	bubbleSort(arr,5);
	printf("Array elements: ");
	for(int i = 0; i < 5; i++)
		printf("%d ", arr[i]);
	printf("\n");
	return 0;
}

void bubbleSort(int arr[], int n){
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n-i; j++)
			if (arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
}