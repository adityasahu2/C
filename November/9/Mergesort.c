#include <stdio.h>
void mergesort(int arr[],int start, int end);
void merge(int arr[], int start, int mid, int end);
void printArray(int arr[], int n);

void mergesort(int arr[],int start, int end){
	if (start < end){
		int mid = (start + end)/2;
		mergesort(arr, start, mid);
		mergesort(arr, mid+1, end);
		merge(arr, start, mid, end);
	}
}	

void merge(int arr[], int start, int mid, int end){
	int left = mid-start+1;
	int right = end - mid;
	int Left[left], Right[right];
	
	for(int i=0; i<left; i++)
		Left[i] = arr[start + i];
	for(int i=0; i<right; i++)
		Right[i] = arr[mid+1+i];
		
	int i = 0, j = 0, k = start;
	while(i < left && j < right){
		if(Left[i] <= Right[j]){
			arr[k] = Left[i];
			k++;
			i++;
		}
		else{
			arr[k] = Right[j];
			k++;
			j++;
		}
	}
	while(i < left){
		arr[k] = Left[i];
		k++;
		i++;
	}
	while(j < right){
		arr[k] = Right[j];
		k++;
		j++;
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
	mergesort(arr, 0, num-1);
	printArray(arr, num);
	printf("\n");
	return 0;
}
