#include <stdio.h>
#define pi 3.141
int main(){
	int choice;
	float a,b;
	printf("1 : Circle\n2 : Square\n3 : Rectangle\nEnter your choice : ");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("Enter radius : ");
			scanf("%f",&a); 
			printf("Area of circle : %f\n", pi*a);
			break;
		case 2:
			printf("Enter side : ");
			scanf("%f",&a); 
			printf("Area of Square : %f\n", a*a);
			break;
		case 3:
			printf("Enter length and breadth : ");
			scanf("%f%f",&a,&b); 
			printf("Area of circle : %f\n", b*a);
			break;
		default:
			printf("Invalid Input\n");
	}
	return 0;
}
