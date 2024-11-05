#include <stdio.h>
int pallindrome(int num);
int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	printf(pallindrome(num)? "Pallindrome\n" : "Not Pallindrome\n");
	return 0;
}
int pallindrome(int num){
	int temp = num, res = 0;
	while(temp > 0){
		res = res*10 + temp%10;
		temp /=10;
	}
	return num == res? 1 : 0;
}
