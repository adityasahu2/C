#include<stdio.h>
int main(void){
int x = 1, z[2] = {10, 11};
int *p = NULL;
p = &x;
*p = 10;
p = &z[1];
*(&z[0] + 1) += 3;
printf("%d, %d, %d\n", x, z[0], z[1]);
return 0;}

//10, 10, 14
// Initially, x = 1 and z = {10, 11}.
// p = &x makes p point to x, and *p = 10 changes x to 10.
// p = &z[1] makes p point to z[1], and *(&z[0] + 1) += 3 increments z[1] from 11 to 14.
// Final values: x = 10, z[0] = 10, z[1] = 14.