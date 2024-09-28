#include <stdio.h>
#include <math.h>
int main(){
	int choice;
	printf("1 : Factorial of a number\n2 : Prime or not\n3 : Odd or even\n4 : Exit\n");
	do{
		int num = 0, sum = 1, temp = 0;
		printf("Enter your choice : ");
		scanf("%d", &choice);
		if(choice > 0 && choice < 4){
			printf("Enter number : ");
			scanf("%d", &num);
			temp = num;
			switch (choice){
				case 1:
					while(num > 1){
						sum *= num;
						num--;
					}
					printf("Factorial of %d is %d\n", temp, sum);
					break;
				case 2:
					for(int i = 2; i <= sqrt(num); i++){
						if(num % i == 0){
							printf("%d is not a prime number\n", num);
							temp++;
							break;
						}
					}
					if(temp == 1) printf("%d is a prime number\n",num);
					break;
				case 3:
					if(num % 2 == 0) printf("%d is even\n", num);
					else printf("%d is odd\n", num);
			}
		}
	} while (choice != 4);
	return 0;
}
