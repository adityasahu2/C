#include <stdio.h>
void add(int a, int b);
int main(){
	int a,b;
	printf("Enter 2 numbers: ");
	scanf("%d%d",&a,&b);
	add(a,b);
	return 0;
}
void add(int a, int b){ 
	printf("Sum: %d\n",a+b); 
}
