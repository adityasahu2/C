#include <stdio.h>
int main() {
    char grade;
    float min, current, final, required;
    printf("Enter desired grade> ");
    scanf(" %c", &grade);
    printf("Enter minimum average required> ");
    scanf("%f", &min);
    printf("Enter current average in course> ");
    scanf("%f", &current);
    printf("Enter how much the final counts as a percentage of the course grade> ");
    scanf("%f", &final);
    required = (min - (1 - (final / 100)) * current) / (final / 100);
    printf("You need a score of %.2f on the final to get a %c.\n", required, grade);
    return 0;
}
