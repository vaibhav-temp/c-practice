#include <stdio.h>


int main()
{

    int n;

    printf("\nEnter the Number to check if it is positive negative or zero: ");
    scanf("%i", &n);



    if ( n == 0)
        printf("\nNumber '%i' is Zero\n", n);
    else if ( n > 0)
        printf("\nNumber '%i' is Positive\n", n);
    else if ( n < 0)
        printf("\nNumber '%i' is Negative\n", n);

    return 0;

}