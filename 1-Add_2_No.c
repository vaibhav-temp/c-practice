#include <stdio.h>

int main()
{
    float a, b, sum;
    printf("\nEnter the first number:   ");
    scanf("%f", &a);
    printf("\nEnter the second number:   ");
    scanf("%f", &b);

    sum = a + b;
    printf("\nThe Sum of numbers %f and %f is :  %f.\n", a, b, sum);

    return 0;
}