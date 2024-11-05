#include <stdio.h>
void bubbleSort(int arr[], int n);
void printArray(int arr[], int n);

int main(){
	int num;
	printf("Enter the size of array: ");
	scanf("%d",&num);
	int arr[num];
	printf("Enter %d elements: ",num);
	for(int i = 0; i < num; i++)
		scanf("%d", &arr[i]);
	
	bubbleSort(arr,num);
	printArray(arr,num);
	printf("\n");
	return 0;
}

void bubbleSort(int arr[], int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n-i; j++){
			if (arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

void printArray(int arr[], int n){
	printf("Array elements: ");
	for(int i = 0; i < n; i++)
		printf("%d ", arr[i]);
}
