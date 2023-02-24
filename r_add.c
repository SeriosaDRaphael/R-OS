#include <stdio.h>

void r_add() {
    double fn, sn;
    printf("Enter first number: ");
    scanf("%lf", &fn);
    printf("Enter second number: ");
    scanf("%lf", &sn);
    double result = fn + sn;
    printf("Result is: %lf\n", result);
}