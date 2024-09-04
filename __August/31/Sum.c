#include <stdio.h>

int main() {
    int a,b;
    printf("Enter a and b: ");
    scanf("%d %d",&a,&b);
    printf("Addition: %d\nSubtraction: %d\nMultiplication: %d\nDivision: %d",a+b, a-b, a*b, a/b);
    return 0;
}