#include <stdio.h>
int binarySearch(int arr[], int n, int key);

int main(){
	int num,key,loc;
	printf("Enter the size of array: ");
	scanf("%d",&num);
	int arr[num];
	printf("Enter %d elements: ",num);
	for(int i = 0; i < num; i++)
		scanf("%d", &arr[i]);
	printf("Enter element you want to search: ");
	scanf("%d",&key);
	loc = binarySearch(arr,num,key);
	if(loc == -1) printf("%d not found", key);
	else printf("%d found at index %d", key, loc);
	printf("\n");
	return 0;
}

int binarySearch(int arr[], int n, int key){
	int loc=-1, start = 0, end = n, mid;
	while(start <= end){
		mid = (start+end)/2;
		if(key == arr[mid]){
			loc = mid;
            break;
		}
		else if (key > arr[mid])
			start = mid + 1;
		else
		    end = mid - 1;
	}
	return loc;
}
