#include <stdio.h>
int main(){
	int num, index, element;
	printf("Enter the number of elements : ");
	scanf("%d", &num);
	int arr[num];
	printf("Enter 5 elements : ");
	for(int i = 0; i < num; i++)
		scanf("%d",&arr[i]);
	printf("Enter position to insert element (0 to 4) : ");
	scanf("%d",&index);
	printf("Enter element to insert : ");
	scanf("%d", &element);
	for(int i = num; i >= index; i--){
		arr[i] = arr[i-1];
	}
	arr[index] = element;
	num++;
	for(int i = 0; i < num; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
