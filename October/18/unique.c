#include <stdio.h>
int main(){
	int num, index, count;
	printf("Enter the number of elements : ");
	scanf("%d", &num);
	int arr[num];
	printf("Enter %d elements : ",num);
	for(int i = 0; i < num; i++)
		scanf("%d",&arr[i]);
	printf("Unique elements are : ");
	for(int i = 0; i < num; i++){
		count = 0;
		for(int j = 0; j < num ; j++){
			if(arr[i] == arr[j])
				count++;
		}
		if(count == 1)
			printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
