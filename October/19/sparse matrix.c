#include <stdio.h>
int main(){
	int row, column, count=0;
	printf("Enter the number of rows and columns : ");
	scanf("%d%d",&row,&column);
	int arr[row][column];
	for(int i = 0; i < row; i++){
	printf("Enter %d elements for row %d : ",column,i);
		for(int j = 0; j < column; j++)
			scanf("%d",&arr[i][j]);
	}
	
	for(int i = 0; i < row; i++){
		for(int j = 0; j < column; j++)
			if(arr[i][j] == 0)
				count++;
	}
	
	if(count > row*column/2)
		printf("The Given Matrix is a Sparse Matrix\n");
	else
		printf("The Given Matrix is not a Sparse Matrix\n");
	printf("There are %d zeros in the matrix\n",count);
	return 0;
}
