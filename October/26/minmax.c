#include <stdio.h>
int main(){
	int n;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d elements: ",n);
	for(int i = 0; i < n; i++)
		scanf("%d",&arr[i]);
	
	int *min = &arr[0], *max = &arr[0];
	for (int i = 1; i < n; i++){
		if(*min > *(arr + i))
			min = (arr + i);
		 if(*max < *(arr + i))
			max = (arr + i);
	}
	
	printf("Min: %d\n",*min);
	printf("Max: %d\n",*max);
	return 0;
}
