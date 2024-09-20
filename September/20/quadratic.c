#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    double D, root1, root2, realPart, imagPart;
    printf("Enter a, b, c: ");
    scanf("%d%d%d", &a, &b, &c);
    D = b*b - 4*a*c;
    if (D > 0) {
        root1 = (-b + sqrt(D)) / (2*a);
        root2 = (-b - sqrt(D)) / (2*a);
        printf("Roots are real and distinct: %.2lf, %.2lf\n", root1, root2);
    } 
    else if (D == 0) {
        root1 = root2 = -b / (2*a);
        printf("Roots are real and equal: %.2lf\n", root1);
    } 
    else {
        realPart = -b / (2*a);
        imagPart = sqrt(-D) / (2*a);
        printf("Roots are complex: %.2lf + %.2lfi, %.2lf - %.2lfi\n", realPart, imagPart, realPart, imagPart);
    }
    return 0;
}