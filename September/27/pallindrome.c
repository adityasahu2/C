#include <stdio.h>
int main(){
	int num, rev=0,temp;
	printf("Enter number : ");
	scanf("%d", &num);
	temp = num;
	while(num > 0){
		rev = rev*10+num%10;
		num/=10;
	}
	if(temp == rev) printf("Pallindrome\n");
	else printf("Not Pallindrome\n");
	return 0;
}
