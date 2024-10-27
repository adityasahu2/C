#include <stdio.h>
int main(){
	int row, column;
	printf("Enter row and column: ");
	scanf("%d%d",&row,&column);
	int arr[row][column];
	for(int i = 0; i < row; i++){
	printf("Enter %d elements for row %d: ",column,row);
		for(int j = 0; j < column; j++)
			scanf("%d",&arr[i][j]);
	}
	int trans[column][row];
	for(int i = 0; i < row; i++){
		for(int j = 0; j < column; j++){
			*(*(trans+j)+i) = *(*(arr+i)+j);
		}
	}
	for(int i = 0; i < row; i++){
		for(int j = 0; j < column; j++)
			printf("%d ",arr[i][j]);
		printf("\n");
	}
	for(int i = 0; i < column; i++){
		for(int j = 0; j < row; j++)
			printf("%d ",trans[i][j]);
		printf("\n");
	}
	return 0;
}
