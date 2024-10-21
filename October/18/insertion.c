#include <stdio.h>
int main(){
	int num, index;
	printf("Enter the number of elements : ");
	scanf("%d", &num);
	int arr[num];
	printf("Enter 5 elements : ");
	for(int i = 0; i < num; i++)
		scanf("%d",&arr[i]);
	printf("Enter position to insert element (0 to 4) : ");
	scanf("%d",&index);
	printf("Enter element to insert : ");
	scanf("%d", &arr[index]);
	for(int i = 0; i < num; i++)
		printf("%d ",arr[i]);
	printf("\n");
	return 0;
}
