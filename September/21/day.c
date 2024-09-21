#include <stdio.h>
int main(){
	int i;
	printf("Enter a number: ");
	scanf("%d",&i);
	switch(i){
		case 2: i*=i;
		case 4: i*=i;
		default: i*=i;
			break;
		case 16: i*=i;
	}
	int j = i;
	printf("%d\n",j);
	return 0;
}
