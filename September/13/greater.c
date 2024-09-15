#include <stdio.h>
int main(){
	int a,b;
	printf("Enter two number : ");
	scanf("%d%d", &a, &b);
	printf("%d is greater\n", a>b ?  a: b);
	return 0;
}
