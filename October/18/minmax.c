#include <stdio.h>
int main(){
	int n,min,max;
	printf("Enter number of students : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d scores : ",n);
	for(int i = 0; i < n; i++){
		scanf("%d",&arr[i]);
	}
	min = max = arr[0];
	for(int	i = 1; i < n; i++){
		if(min > arr[i]) min = arr[i];
		if(max < arr[i]) max = arr[i];
	}
	printf("Lowest Score : %d\nHighest Score : %d\n",min,max);
	return 0;
}
