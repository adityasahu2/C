#include <stdio.h>
int main(){
	int r1, c1;
	printf("Enter the number of rows and columns for matrix A: ");
	scanf("%d%d",&r1,&c1);
	int a[r1][c1];
	for(int i = 0; i < r1; i++){
	printf("Enter %d elements for row %d: ",c1,i);
		for(int j = 0; j < c1; j++)
			scanf("%d",&a[i][j]);
	}
	
	int r2, c2;
	printf("Enter the number of rows and columns for matrix B: ");
	scanf("%d%d",&r2,&c2);
	int b[r2][c2];
	for(int i = 0; i < r2; i++){
	printf("Enter %d elements for row %d: ",c2,i);
		for(int j = 0; j < c2; j++)
			scanf("%d",&b[i][j]);
	}
	
	printf("Matrix:\n");
	int c[r1][c2];
	for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            c[i][j] = 0;
            for (int k = 0; k < r2; k++)
                c[i][j] += a[i][k] * b[k][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
