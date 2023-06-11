#include <stdio.h>

int main()
{

    float a[10];

    printf("\nEnter the 10 numbers: \n");

        for (int i = 0; i < 10; i++)
    {
        printf("Number %d = ", i + 1);
        scanf("%f", &a[i]);
    }

    float largest_no = a[0], smallest_no = a[0];


    for(int i = 0; i < 10; i++) 
    { 
        if(a[i] < smallest_no) 
        { 
            smallest_no = a[i]; 
        } 
        if(a[i] > largest_no) 
        { 
            largest_no = a[i]; 
        } 
    } 


    printf("\nLargest number in the array is %.2f.\n", largest_no);
    printf("And the Smallest number in the array is %.2f.\n", smallest_no);

    return 0;

}