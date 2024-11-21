#include <stdio.h>

int main(){
    char str[] = "racecar";
    int minDistance = 8;
    char closestChar = '\0';
    
    for (int i = 0; str[i]!= '\0'; i++) {
        for (int j = i+1; str[j]!= '\0'; j++) {
            if (str[i] == str[j]) {
                int distance = j - i;
                if (distance < minDistance) {
                    minDistance = distance;
                    closestChar = str[i];
                }
            }
        }
    }
    
    if (closestChar)
    printf("The closest repetitive character in \"%s\" is %c.\n", str, closestChar);

    return 0;
}