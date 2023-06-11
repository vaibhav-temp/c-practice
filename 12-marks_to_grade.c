#include <stdio.h>

int main()
{

    float marks[5];
    int no_of_sub = sizeof(marks) / sizeof(float);
    float totalMarks = 0, percentage, maxMarks;

    printf("\nPlease enter the maximum marks that can be obtained:  ");
    scanf("%f", &maxMarks);
    if (maxMarks <= 0)
    {
        printf("\n[ERROR]: maximum marks cannot be negative or zero.\n");
        return -1;
    }

    for (int i = 0; i < no_of_sub; i++)
    {
        printf("\nEnter the marks obtained in subject %i:   ", i+1);
        scanf("%f", &marks[i]);
        if (marks[i] < 0 || marks[i] > maxMarks)
        {
            printf("\n[ERROR]: marks cannot be less than zero or more than maximum marks.\n");
            return -1;
        }
        
        totalMarks += marks[i];
    }

    percentage = (totalMarks / (no_of_sub * maxMarks)) * 100;

    printf("\nTotal Percentage = %.2f", percentage);

    if(percentage >= 90)
        printf("\n\nYour Grade : A+\n");
    else if(percentage >= 80)
        printf("\n\nYour Grade : A\n");
    else if(percentage >= 70)
        printf("\n\nYour Grade : B+\n");
    else if(percentage >= 60)
        printf("\n\nYour Grade : B\n");
    else if(percentage >= 50)
        printf("\n\nYour Grade : C+\n");
    else if(percentage >= 40)
        printf("\n\nYour Grade : C\n");
    else if(percentage >= 35)
        printf("\n\nYour Grade : D+\n");
    else if(percentage >= 0)
        printf("\n\nYour Grade : D\n");


    return 0;

}