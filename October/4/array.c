#include <stdio.h>
int main(){
	int n,min,max;
	printf("Enter size of array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array elements : ");
	for(int i = 0; i < 5; i++){
		scanf("%d",&arr[i]);
	}
	min = max = arr[0];
	for(int	i = 1; i < n; i++){
		if(min > arr[i]) min = arr[i];
		if(max < arr[i]) max = arr[i];
	}
	printf("Smallest : %d\nLargest : %d\n",min,max);
	return 0;
}
