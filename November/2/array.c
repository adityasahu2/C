// How to pass array in function
#include <stdio.h>
int max(int a[],int n);
int max(int a[],int n){
  int max = a[0];
  for (int i=0;i<n;n++) {
    if (max < a[i])
      max = a[i];
  }
  printf("Maximun = %d",max);
}
int main() {
  int n;
  printf("Enter size of array: ");
  scanf("%d",&n);
  int a[n];
  printf("Enter the elements: ");
  for (int i=0;i<n;n++) {
    scanf("%d",&a[i]);
  }
  max(a,n);
}
