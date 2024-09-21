#include <stdio.h>
#include <stdbool.h>
int main(){
	int a,b;
	printf("Enter 2 numbers: ");
	scanf("%d%d",&a,&b);
	int c = a>b;
	switch(c){
		case true:
			printf("Greater : %d\n",a);
			break;
		case false:
			printf("Greater : %d\n",b);
			break;
		default:
			printf("Invalid Input\n");
	}
	return 0;
}
