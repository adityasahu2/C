#include<stdio.h>
int main(){
	int i=1;
	while (0){
		printf ( "%d ", i++ ) ;
		if(i>10)
			break ;
	}
	return 0;
}
