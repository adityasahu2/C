#include <stdio.h>

void binaryToHexadecimal(char binary[]) {
    int decimal = 0, i = 0;
    while (binary[i] != '\0') {
        decimal = decimal * 2 + (binary[i] - '0');
        i++;
    }
    printf("Hexadecimal: %X\n", decimal);
}

int main() {
    char binary[65];
    printf("Enter a binary number: ");
    scanf("%s", binary);
    binaryToHexadecimal(binary);
    return 0;
}
