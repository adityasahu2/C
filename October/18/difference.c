#include <stdio.h>
int main(){
	int num1, num2, count;
	
	printf("Enter the number of elements for a : ");
	scanf("%d", &num1);
	int a[num1];
	printf("Enter %d elements for a : ",num1);
	for(int i = 0; i < num1; i++)
		scanf("%d",&a[i]);
		
	printf("Enter the number of elements for b : ");
	scanf("%d", &num2);
	int b[num2];
	printf("Enter %d elements for b : ",num2);
	for(int i = 0; i < num2; i++)
		scanf("%d",&b[i]);
		
	printf("Difference (a - b) : ");
	for(int i = 0; i < num1; i++){
		count = 1;
		for(int j = 0; j < num2; j++){
			if(a[i] == b[j])
				count++;
		}
		if(count == 1)
			printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}
