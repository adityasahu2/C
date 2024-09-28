#include <stdio.h>
#include <float.h>
int main(){
	int count, i = 0;
	float temp, min = FLT_MAX, max = FLT_MIN;
	printf("Enter the number of hours to monitor the temperature : ");
	scanf("%d",&count);
	while(count != i){
		printf("Enter the temperature for hour %d : ",++i);
		scanf("%f",&temp);
		if (min > temp) min = temp;
		if (max < temp) max = temp;
	}
	printf("The highest temperature recorded is : %.2f\n",max);
	printf("The lowest temperature recorded is : %.2f\n",min);
	return 0;
}
