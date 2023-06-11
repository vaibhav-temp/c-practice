#include <stdio.h>


int main()
{
    int num, sum = 0;
    float avg;

    printf("\nEnter the 10 numbers: \n");

    int i = 1;

    while ( i <= 10){
        printf("Number %d = ", i);
        scanf("%d", &num);
        sum = sum + num;
        i++;
    }

    avg = sum / 10.f;

    printf("\nSum of 10 numbers: %d\n", sum);
    printf("Average of 10 numbers: %.2f\n", avg);

    return 0;
}