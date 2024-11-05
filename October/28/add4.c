#include <stdio.h>
void add();
int main(){
	add();
	return 0;
}
void add(){ 
	int a,b;
	printf("Enter 2 numbers: ");
	scanf("%d%d",&a,&b);
	printf("Sum: %d\n",a+b); 
}
