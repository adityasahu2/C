#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter two number : ");
	scanf("%d%d", &a, &b);
	printf("Before swap : %d %d\n",a,b);
	c = a;
	a = b;
	b = c;
	printf("After swap : %d %d\n",a,b);
	return 0;
}
