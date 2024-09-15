#include <stdio.h>
int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    printf("%d is%sa leap year\n", year, (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? " " : " not ");
    return 0;
}
