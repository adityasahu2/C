#include <stdio.h>
void displayForward(int n) {
  if (n == 0)
    return;
  displayForward(n/10);
  printf("%d",n%10);
}
void displayBackward(int n) {
  if (n == 0)
    return;
  printf("%d",n%10);
  displayBackward(n/10);
}
int main() {
  int n;
  printf("Enter an integer: ");
  scanf("%d",&n);
  displayForward(n);
  displayBackward(n);
}
