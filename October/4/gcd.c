#include <stdio.h>
int main(){
	int a,b,gcd,r=1;
	printf("Enter 2 numbers : ");
	scanf("%d%d",&a,&b);
	if(a < 0) a *= -1;
	if(b < 0) b *= -1;
	if(b > a) {
		a += b;
		b = a - b;
		a -= b;
	}
	while(b != 0){
		gcd = r;
		r = a % b;
		a = b;
		b = r;
	}
	printf("GCD : %d\n",gcd);
	return 0;
}
