#include <stdio.h>
int main(){
	int i = 100;
	int *p, *q;
	p = &i;
	q = ++p;
	--p;
	printf("%u\n",q-p);
	return 0;
}
