#include <stdio.h>


int main()
{

    int n,sum=0;

    printf("\nEnter the Three digit number: ");
    scanf("%i", &n);

    sum = n % 10 + (n / 10) % 10 + (n / 100);

    printf("\nThree digit sum of the number '%i' is : %i\n", n, sum);

    return 0;

}