#include <stdio.h>
int main() {
    int a[] = {1, 2, 3, 4}, b[] = {2, 4, 5, 6};
    printf("Difference (a - b): ");
    for (int i = 0; i < 4; i++) {
        int found = 0;
        for (int j = 0; j < 4 && !found; j++)
            found = a[i] == b[j];
        if (!found) printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
