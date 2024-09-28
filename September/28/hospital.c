#include <stdio.h>
int main(){
	int patient, i = 0, day, daily, services, j, servicecost;
	float bill;
	printf("Enter the number of patients : ");
	scanf("%d",&patient);
	while(patient != i){
		printf("\e[1mPatient %d\e[m\n",++i);
		printf("Enter the number of days stayed : ");
		scanf("%d",&day);
		printf("Enter the daily charge : ");
		scanf("%d",&daily);
		bill += day*daily;
		printf("Enter the number of additional services (tests, surgeries) : ");
		scanf("%d",&services);
		while(services != j){
			printf("Enter the cost of service %d : ",++j);
			scanf("%d",&servicecost);
			bill += servicecost;
		}
		printf("\e[1mTotal bill for patient %d : %.2f\e[m\n",i,bill);
		j = 0;
		bill = 0;
	}
}
