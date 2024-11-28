#include <stdio.h>

void binaryToHexadecimal(char binary[]) {
    int decimal = 0;
    for (int i = 0; binary[i]; i++) 
        decimal = decimal * 2 + (binary[i] - '0');
    printf("Hexadecimal: %X\n", decimal);
}

int main() {
    char binary[65];
    printf("Enter a binary number: ");
    scanf("%s", binary);
    binaryToHexadecimal(binary);
    return 0;
}
