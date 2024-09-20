#include <stdio.h>
int main(){
	char ch;
	printf("Enter a charecter : ");
	scanf("%c", &ch);
	if (ch=='A' || ch=='a' || ch=='E' || ch=='e' || ch=='I' || ch=='i' || ch=='O' || ch=='o' || ch=='U' || ch=='u')
		printf("%c is Vowel\n",ch);
	else printf("%c is Consonant\n",ch);
	return 0;
}
