#include <stdio.h>
int main(){
	int k = -1;
	char ch;
	printf("Enter the choice of the character : ");
	scanf("%c",&ch);
	for(int i = 0; i <= ch-65; i++){
		for(int j = 65; j <= ch-i; j++)
			printf("%c ", j);
		for(int j = 0; j < k; j++)
			printf("  ");
		for(int j = ch-i; j >= 65; j--){
			if(j==ch)
				j-=1;
			printf("%c ", j);
		}
		printf("\n");
		k+=2;
	}
	return 0;
}
