#include <stdio.h>
int main(){
	int n1=1, n2=2, n3=3, n4=4, n5=5, sum=0;
	int* arr = {&n1, &n2, &n3, &n4, &n5};
	int* s = &0;
	printf("Sum: %p\n", s);
	printf("Pointers: ");
	for(int i=0; i<5; i++){
		s += arr[i];
		printf("%p ", arr[i]);
	}
	printf("\nSum: %p\nSum: %d\nValue in pointers: ",s,s);
	for(int i=0; i<5; i++){
		sum+=arr[i];
		printf("%d ", arr[i]);
	}
	printf("\nSum: %d\n",sum);
	return 0;
}
