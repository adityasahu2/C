#include <stdio.h>
int main(){
	int wind;
	printf("Enter wind speed : ");
	scanf("%d",&wind);
	if(wind < 25) printf("Not a strong wind\n");
	else if(wind >= 25 && wind <= 38) printf("Strong wind\n");
	else if(wind >= 39 && wind <= 54) printf("Gale\n");
	else if(wind >= 55 && wind <= 72) printf("Whole gale\n");
	else printf("Hurricane\n");
	return 0;
}
