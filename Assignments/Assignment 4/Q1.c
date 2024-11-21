#include <stdio.h>

int main() {
    int Ia = 345;
    float Fb = 4.5;
    char Chvar = 'Z';
    
    printf("Value of Ia: %d, Address of Ia: %p\n", Ia, &Ia);
    printf("Value of Fb: %.1f, Address of Fb: %p\n", Fb, &Fb);
    printf("Value of Chvar: %c, Address of Chvar: %p\n", Chvar, &Chvar);

    return 0;
}
