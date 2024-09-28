#include <stdio.h>
int main(){
	int num, sum, temp;
	printf("Enter number : ");
	scanf("%d", &num);
	temp = num;
	while(num > 0){
		printf("%d\n",num%10);
		sum += num%10;
		num/=10;
	}
	if(sum % 9 == 0) printf("%d is divisible by 9\n",temp);
	else printf("%d is not divisible by 9\n",temp);
	return 0;
}
