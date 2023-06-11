#include <stdio.h>


int main()
{

    int n, reverse;

    printf("\nEnter the Three digit number: ");
    scanf("%i", &n);

    reverse = (n % 10) * 100 + ((n / 10) % 10) * 10 + n / 100;

    printf("\nReverse of Three digit number '%i' is : %i\n", n, reverse);

    return 0;

}