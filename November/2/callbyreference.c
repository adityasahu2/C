#include <stdio.h>
int swap(int *, int *);
int swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
int main() {
  int a,b;
  printf("Enter a and b: ");
  scanf("%d %d",&a,&b);
  swap(&a,&b);
  printf("x = %d, y = %d\n",a,b);
}
