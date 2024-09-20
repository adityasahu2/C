#include <stdio.h>
int main(){
	int unit;
	float bill;
	printf("Enter electricity units : ");
	scanf("%d",&unit);
	if(unit <= 50) bill = unit *0.5;
	else if(unit <= 150) bill = 25 + (unit-50) * 0.75;
	else if(unit <= 250) bill = 25 + 75 + (unit-150) * 1.20;
	else bill = 25 + 75 + 120 + (unit-250) * 1.50;
	bill += bill * 0.20;
	printf("Electricity Bill : %f\n",bill);
	return 0;
}
