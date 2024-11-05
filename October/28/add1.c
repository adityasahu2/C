#include <stdio.h>
int add(int a,int b);
int dif(int a,int b);
int mul(int a,int b);
int div(int a,int b);
int rem(int a,int b);
int main(){
	int a,b;
	printf("Enter 2 numbers: ");
	scanf("%d%d",&a,&b);
	printf("Sum: %d\n",add(a,b));
	printf("Difference: %d\n",dif(a,b));
	printf("Multiplication: %d\n",mul(a,b));
	printf("Division: %d\n",div(a,b));
	printf("Remainder: %d\n",rem(a,b));
	return 0;
}
int add(int a, int b){ return a+b; }
int dif(int a, int b){ return a-b; }
int mul(int a, int b){ return a*b; }
int div(int a, int b){ return a/b; }
int rem(int a, int b){ return a%b; }
