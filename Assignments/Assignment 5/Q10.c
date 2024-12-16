#include <stdio.h>
int main(){int *p=NULL;
p=(int *)malloc(sizeof(int));
*p=10;
free(p);
int *q;
q=(int *)malloc(sizeof(int));
*q=15;
printf("%d %d\n",*p,*q);
return 0;}

//15 15
// Both p and q are int * (pointer to integer).
// Dangling pointer for p after free(p).