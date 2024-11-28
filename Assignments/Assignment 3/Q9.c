#include <stdio.h>

int main() {
    char str[] = "bintu", count[256] = {0};
    
    for (int i = 0; str[i]; i++) count[(int)str[i]]++;
    
    printf("The count of each character in the string \"%s\" is: ", str);
    for (int i = 0; str[i]; i++) {
        if (count[(int)str[i]]) {
            printf("%c-%d", str[i], count[(int)str[i]]);
            count[(int)str[i]] = 0;
            if (str[i+1]) printf(", ");
        }
    }
    return 0;
}
