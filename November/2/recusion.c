#include <stdio.h>
int print(int);
int print(n){
  printf("%d",n);
  print(n-1);
  printf("%d",n);
  if (n == 0)
    return;
}
int main() {
  print(3);
}
