#include <stdio.h>


int main()
{

    int n;

    printf("\nEnter the number to check if it is Odd or Even: ");
    scanf("%i", &n);


    if (n <= 0){
        printf("[ERROR]: Number Entered Is Zero Or Negative. Please Enter Number greater than 0.\n");
        return -1;
    }


    if ( n % 2 == 0)
        printf("\nNumber '%i' is Even\n", n);
    else
        printf("\nNumber '%i' is Odd\n", n);

    return 0;

}