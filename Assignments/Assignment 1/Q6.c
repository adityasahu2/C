#include <stdio.h>
int main(){
	float meters;
	printf("Enter distance in meters : ");
	scanf("%f",&meters);
	printf("+----------------+----------------+\n");
	printf("| Unit           | Value          |\n");
	printf("+----------------+----------------+\n");
	printf("| Meters         |%15.2f |\n",meters);
	printf("| Kilometers     |%15.2f |\n",meters*0.001);
	printf("| Centimeters    |%15.2f |\n",meters*100);
	printf("| Millimeters    |%15.2f |\n",meters*1000);
	printf("| Feet           |%15.2f |\n",meters*3.28084);
	printf("| Inches         |%15.2f |\n",meters*39.3701);
	printf("+----------------+----------------+\n");
}
