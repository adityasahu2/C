#include <stdio.h>
int armstrong(int num);
int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	printf(armstrong(num)? "Armstrong\n" : "Not Armstrong\n");
	return 0;
}
int armstrong(int num){
	int temp = num, sum = 0, count = cnt(num);
	while (num){
		sum += pow(num%10,count);
		num /= 10;
	}
	return sum == temp;
}
int cnt(int num){
	int count = 0;
	while(num) count++;
	return count;
}
int pow(int num,int count){
	int sum = 0;
	while(count) {
		sum += num%10;
		num /= 10;
		count--;
	} 
	return sum;
}
