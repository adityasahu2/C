#include <stdio.h>
int main(){
	int num;
	printf("Enter the number > ");
	scanf("%d",&num);
	for(int i = 1; i <= 5; i++){
		if(i == 1 || i == 5){
			printf("+");
			for(int j = 1; j <= 10; j++)
				printf("----");
			printf("+");
		}
		else{
			printf("|");
			for(int j = 1; j <= 10; j++){
				if(i == 2)
					printf("%4d", num*j);
				else if(i == 3)
					printf("%4d", j);
				else
					printf("%4d", num);
			}
			printf("|");
		}
		printf("\n");
	}
	return 0;
}
