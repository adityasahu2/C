#include <stdio.h>
void insertionSort(int arr[], int n);
void printArray(int arr[], int n);

int main(){
	int num;
	printf("Enter the size of array: ");
	scanf("%d",&num);
	int arr[num];
	printf("Enter %d elements: ",num);
	for(int i = 0; i < num; i++)
		scanf("%d", &arr[i]);
	
	insertionSort(arr,num);
	printArray(arr,num);
	printf("\n");
	return 0;
}

void insertionSort(int arr[], int n){
	for(int i = 1; i < n; i++){
		int key = arr[i];
		int j = i-1;
		while(j >= 0 && arr[j] > key){
			arr[j+1] = arr[j];
			j = j-1;
		}
		arr[j+1] = key;
	}	
}

void printArray(int arr[], int n){
	printf("Array elements: ");
	for(int i = 0; i < n; i++)
		printf("%d ", arr[i]);
}

