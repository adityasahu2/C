#include <stdio.h>
#include <math.h>
int main(){
	int num, sum = 0,count = 0,temp;
	printf("Enter number : ");
	scanf("%d", &num);
	temp = num;
	while(num > 0){
		count++;
		num/=10;
	}
	num = temp;
	while(num > 0){
		sum += pow(num%10,count);
		num/=10;
	}
	if(temp == sum) printf("Armstrong number\n");
	else printf("Not armstrong number\n");
	return 0;
}
