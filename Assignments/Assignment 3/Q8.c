#include <stdio.h>

int main() {
    char str[] = "racecar", closestChar = '\0';
    int minDistance = 8;

    for (int i = 0; str[i]; i++)
        for (int j = i + 1; str[j]; j++)
            if (str[i] == str[j] && (j - i) < minDistance) {
                minDistance = j - i;
                closestChar = str[i];
            }

    if (closestChar) 
        printf("The closest repetitive character in \"%s\" is %c.\n", str, closestChar);

    return 0;
}
