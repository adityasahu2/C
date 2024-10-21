#include <stdio.h>
int main(){
	int row, sum=0;
	printf("Enter the size of matrix : ");
	scanf("%d",&row);
	int arr[row][row];
	for(int i = 0; i < row; i++){
	printf("Enter %d elements for row %d : ",row,i);
		for(int j = 0; j < row; j++)
			scanf("%d",&arr[i][j]);
	}
	for(int i = 0; i < row; i++){
		for(int j = 0; j < row; j++)
			if(i == j)
				sum+=arr[i][j];
	}
	printf("The sum of diagonal elements is : %d\n",sum);
	return 0;
}
