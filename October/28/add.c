#include <stdio.h>
int add(int a,int b);
int main(){
	int a,b;
	printf("Enter 2 numbers: ");
	scanf("%d%d",&a,&b);
	printf("Sum: %d\n",add(a,b));
	return 0;
}
int add(int a, int b){ return a+b; }
