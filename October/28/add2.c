#include <stdio.h>
int add();
int main(){
	printf("Sum: %d\n",add());
	return 0;
}
int add(){ 
	int a,b;
	printf("Enter 2 numbers: ");
	scanf("%d%d",&a,&b);	
	return a+b; 
}
