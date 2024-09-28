#include <stdio.h>
int main(){
	int choice,quantity,bill,burger,pizza,coffee;
	printf("Menu:\n1. Burger - $50\n2. Pizza - $100\n3. Coffee - $30\n");
	do{
		printf("Enter item number (0 to exit) : ");
		scanf("%d",&choice);
		if(choice != 0){
			printf("Enter quantity : ");
			scanf("%d",&quantity);
			switch(choice){
				case 1:
					bill += 50*quantity;
					burger += quantity;
					break;
				case 2:
					bill += 100*quantity;
					pizza += quantity;
					break;
				case 3:
					bill += 30*quantity;
					coffee += quantity;
					break;
				case 0:
					break;
				default:
					printf("Invalid Input\n");
			}
		}
	}while(choice != 0);
	if(burger != 0) printf("Ordered %d Burger\n",burger);
	if(pizza != 0) printf("Ordered %d Pizza\n",pizza);
	if(coffee != 0) printf("Ordered %d Coffee\n",coffee);
	printf("Your Total Bill : $%d\n",bill);
	return 0;
}
