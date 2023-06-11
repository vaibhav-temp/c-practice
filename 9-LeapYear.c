#include <stdio.h>


int main()
{

    int year;

    printf("\nEnter the Year: ");
    scanf("%i", &year);


    if (year <= 0){
        printf("[ERROR]: Year Entered Is Zero Or Negative. Please Enter valid Year.\n");
        return -1;
    }


    if ( year % 4 == 0)
        printf("\nYear '%i' is Leap Year\n", year);
    else
        printf("\nYear '%i' is not a Leap Year\n", year);

    return 0;

}