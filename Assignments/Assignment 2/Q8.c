#include <stdio.h>
#include <math.h>
int main(){
	int x;
	printf("Enter value of x: ");
	scanf("%d",&x);
	float temp = (x-1.0)/x;
	float sum = temp;    
	for(int i = 2; i <= 9; i++)
		sum += 1/2*pow(temp, i);
	printf("Sum: %f\n",sum);
	return 0;
}
