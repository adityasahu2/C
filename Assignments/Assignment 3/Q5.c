#include <stdio.h>
int binary_srch(int arr[], int n, int key);

int main(){
	int key,loc;
	int arr[] = {10, 20, 30, 40, 50};
	key = 40;
	loc = binary_srch(arr,5,key);
	if(loc == -1) printf("%d not found", key);
	else printf("%d found at index %d", key, loc);
	printf("\n");
	return 0;
}

int binary_srch(int arr[], int n, int key){
	int bottom = 0, top = n, middle;
	while(bottom <= top){
		middle = (bottom+top)/2;
		if(arr[middle] == key) return middle;
		else if (arr[middle] > key) top = middle - 1;
		else bottom = middle + 1;
	}
	return -1;
}