#include<stdio.h>
int main(){
	int sub1, sub2, sub3, sub4, sub5;
	float total, average, percentage;
	printf("Enter marks of five subjects : ");
	scanf("%d%d%d%d%d", &sub1, &sub2, &sub3, &sub4, &sub5);
	total = sub1+sub2+sub3+sub4+sub5;
	printf("Total : %.2f marks\n", total);
	average = total/5;
	printf("Average : %.2f marks\n", average);
	percentage = total/500*100;
	printf("Percentage : %.2f%%\n", percentage);
	return 0;
}
