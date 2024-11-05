#include <stdio.h>
int binarySearch(int arr[], n, key);

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
	loc = binarySearch(arr,num);
	if(loc == -1) printf("%d not found", key);
	else printf("%d found at %d index", key, loc);
	printf("\n");
	return 0;
}

int binarySearch(int arr[], n, key){
	int loc=-1, start = 0, end = n;
	while(start <= end){
		mid = start-end/2;
		
	
	
}
