#include <stdio.h>
int swap(int, int);
int swap(int x, int y) {
  int temp = x;
  x = y;
  y = temp;
  printf("x = %d, y = %d\n",x,y);
}
int main() {
  int a,b;
  printf("Enter a and b: ");
  scanf("%d %d",&a,&b);
  swap(a,b);
}
