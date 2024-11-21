#include <stdio.h>

void sum_n_avg(double input1, double input2, double input3, double *sum, double *average) {
    *sum = input1 + input2 + input3; 
    *average = *sum / 3;
}

int main() {
    double one, two, three, sum_of_3, avg_of_3;
    printf("Enter three numbers> ");
    scanf("%lf%lf%lf", &one, &two, &three);
    sum_n_avg(one, two, three, &sum_of_3, &avg_of_3);
    printf("Sum: %.2lf, Average: %.2lf\n", sum_of_3, avg_of_3);
    return 0;
}
