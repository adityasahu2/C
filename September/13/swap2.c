#include <stdio.h>
int main(){
	int a,b;
	printf("Enter two number : ");
	scanf("%d%d", &a, &b);
	printf("Before swap : %d %d\n",a,b);
	a = b + a;
	b = a - b;
	a = a - b;
	printf("After swap : %d %d\n",a,b);
	return 0;
}
