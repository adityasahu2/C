#include <stdio.h>
void Merge(int arr1[],int n, int arr2[], int m);
void printArray(int arr[], int n);

int main(){
	int n, m;
	printf("Enter the size of array 1: ");
	scanf("%d",&n);
	int arr1[n];
	
	printf("Enter %d elements: ",n);
	for(int i = 0; i < n; i++)
		scanf("%d", &arr1[i]);
	
	printf("Enter the size of array 2: ");
	scanf("%d",&m);
	int arr2[m];
		
	printf("Enter %d elements: ",m);
	for(int i = 0; i < m; i++)
		scanf("%d", &arr2[i]);
		
	Merge(arr1,n,arr2,m);
	printf("\n");
	return 0;
}

void Merge(int arr1[], int n, int arr2[], int m){
	int merged[n+m];
	int i = 0, j = 0, k = 0;
	while(i < n && j < m){
		if(arr1[i] <= arr2[j]){
			merged[k] = arr1[i];
			k++;
			i++;
		}
		else{
			merged[k] = arr2[j];
			k++;
			j++;
		}
	}
	while(i < n){
		merged[k] = arr1[i];
		k++;
		i++;
	}
	while(j < m){
		merged[k] = arr2[j];
		k++;
		j++;
	}	
	
	printArray(merged,k);
}

void printArray(int arr[], int n){
	printf("Array elements: ");
	for(int i = 0; i < n; i++)
		printf("%d ", arr[i]);
}

