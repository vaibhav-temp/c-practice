#include <stdio.h>

int main()
{

    float principle, rate, time, SI;

    printf("\nEnter the principle amount:   ");
    scanf("%f", &principle);
    if (principle <= 0) {
        printf("\n[ERROR]: Principle cannot be negative or zero.\n");
        return -1;
    } 

    printf("\nEnter the Rate of Interest:   ");
    scanf("%f", &rate);
    if (rate <= 0) {
        printf("\n[ERROR]: Rate cannot be negative or zero.\n");
        return -1;
    } 

    printf("\nEnter the Time in years:   ");
    scanf("%f", &time);
    if (principle <= 0) {
        printf("\n[ERROR]: time cannot be negative or zero.\n");
        return -1;
    } 

    SI = (principle * rate * time) / 100;
    printf("\nThe Simple Interest produces is : %f.\n", SI);

}