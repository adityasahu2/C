#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter in decimal format: ");
    scanf("%d", &a);
    printf("Enter in octal format: ");
    scanf("%d", &b);
    printf("Enter in hexadecimal format: ");
    scanf("%d", &c);
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    printf("Enter in decimal format: ");
    scanf("%i", &b);
    printf("Enter in octal format: ");
    scanf("%i", &b);
    printf("Enter in hexadecimal format: ");
    scanf("%i", &c);
    printf("a = %i, b = %i, c = %i\n", a, b, c);
    return 0;
}
/* Output :
Enter in decimal format: 10
Enter in octal format: 10
Enter in hexadecimal format: 10
a = 10, b = 10, c = 10
Enter in decimal format: 10
Enter in octal format: 10
Enter in hexadecimal format: 10
a = 10, b = 10, c = 10*/