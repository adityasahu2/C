#include <stdio.h>
int main(){
	int row, column;
	printf("Enter the number of rows and columns : ");
	scanf("%d%d",&row,&column);
	int arr[row][column];
	for(int i = 0; i < row; i++){
	printf("Enter %d elements for row %d : ",column,i);
		for(int j = 0; j < column; j++)
			scanf("%d",&arr[i][j]);
	}
	printf("Matrix\n");
	for(int i = 0; i < row; i++){
		for(int j = 0; j < column; j++)
			printf("%d ",arr[i][j]);
		printf("\n");
	}
	return 0;
}
