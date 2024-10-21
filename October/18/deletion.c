#include <stdio.h>
int main(){
	int num, index;
	printf("Enter the number of elements : ");
	scanf("%d", &num);
	int arr[num];
	printf("Enter %d elements : ",num);
	for(int i = 0; i < num; i++)
		scanf("%d",&arr[i]);
	printf("Enter position to delete element (0 to 4) : ");
	scanf("%d",&index);
	
	for(int i = index ; i < num-1; i++)
		arr[i] = arr[i+1];
	num--;
	for(int i = 0; i < num; i++)
		printf("%d ",arr[i]);
	printf("\n");
	return 0;
}
