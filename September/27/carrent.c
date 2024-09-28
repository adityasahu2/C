#include <stdio.h>
int main(){
	char car;
	int time;
	float total;
	printf("E : Economy\nS : Standard\nL : Luxury\nEnter car type : ");
	scanf("%c",&car);
	printf("Enter rental time : ");
	scanf("%d",&time);
	if (time > 0){
		switch(car){
			case 'E':
				total = 50*time;
				break;
			case 'S':
				total = 75*time;
				break;
			case 'L':
				total = 100*time;
				break;	
			default:
				printf("Invalid car type\n");
		}
		if (time > 7) total += total*0.1;
		printf("Total Bill : %f\n",total);
	}
	else printf("Enter valid rental time\n");
	return 0;
}
