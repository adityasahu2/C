#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter 3 sides of triangle :");
	scanf("%d%d%d", &a,&b,&c);
	if(a+b > c){
		if(a == b && a == c) printf("Eqilateral Triangle\n");
		else if(a == b || a == b || b == c) printf("Isosceles Triangle\n");
		else printf("Scalene Triangle\n");
	}
	else printf("Not a triangle\n");
	return 0;
}
