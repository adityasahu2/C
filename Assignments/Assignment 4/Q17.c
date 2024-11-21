#include <stdio.h>

int main() {
    char *argv[] = {"mine", "cs", "soa", NULL};
    char **ptr = argv;

    printf("Strings before conversion:\n");
    for (int i = 0; ptr[i] != NULL; i++) {
        printf("%s\n", ptr[i]);
    }

    for (int i = 0; ptr[i] != NULL; i++) {
        for (char *p = ptr[i]; *p != '\0'; p++) {
            if (*p >= 'a' && *p <= 'z') {
                *p = *p - ('a' - 'A'); 
            }
        }
    }

    printf("\nStrings after conversion to uppercase:\n");
    for (int i = 0; ptr[i] != NULL; i++) {
        printf("%s\n", ptr[i]);
    }

    return 0;
}
