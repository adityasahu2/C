#include <stdio.h>

int main() {
    int prime_lt_100[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37,41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    
    // Part (a)
    int result_a = prime_lt_100[24];
    printf("a) %d\n", result_a);
    
    // Part (b)
    int i = 10;
    int result_b = prime_lt_100[i + 4];
    printf("b) %d\n", result_b);
    
    // Part (c)
    int result_c = prime_lt_100[prime_lt_100[2] + prime_lt_100[0]];
    printf("c) %d\n", result_c);
    
    // Part (d)
    prime_lt_100[6] = prime_lt_100[6] + prime_lt_100[16];
    printf("d) %d\n", prime_lt_100[6]);
    
    return 0;
}
