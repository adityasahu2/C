#include<stdio.h>
int main(){
int arr[4][5],i,j;
for(i=0;i<4;i++){
for(j=0;j<5;j++){
arr[i][j]=10*i+j;
}}
printf("%d\n",arr[2][4]);
printf("%d\n",*(*(arr+2)+4));
return 0;}

//Answer:
//10×2+4=20+4=24
//*(*(arr + 2) + 4) = arr[2][4] = 24