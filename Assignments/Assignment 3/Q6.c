#include <stdio.h>
int main(){
	int count;
    int a[] = {1, 2, 3, 4};
    int b[] = {2, 4, 5, 6};
	printf("Difference (a - b) : ");
	for(int i = 0; i < 4; i++){
		count = 0;
		for(int j = 0; j < 4; j++)
			if(a[i] == b[j]){
				count++;
                break;
		    }
		if(!count)
			printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}
