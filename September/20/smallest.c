#include <stdio.h>
int main(){
	float a,b,c;
	printf("Enter 3 numbers : ");
	scanf("%f%f%f",&a,&b,&c);
	if(a < b){
		if(a < c) printf("Smallest number is a : %f\n",a);
		else printf("Smallest number is c : %f\n",c);
	}else{
		if(b < c) printf("Smallest number is b : %f\n",b);
		else printf("Smallest number is c : %f\n",c);
	}
	return 0;
}
