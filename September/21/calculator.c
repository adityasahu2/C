#include <stdio.h>
int main(){
	char op;
	float a,b,out;
	printf("Enter expression: ");
	scanf("%f %c %f",&a,&op,&b);
	switch(op){
		case '+': out = a+b;
			break;
		case '-': out = a-b;
			break;
		case '*': out = a*b;
			break;
		case '/': out = a/b;
			break;
		default: printf("Invalid Input\n");
	}
	printf("Output: %f\n",out);
}
