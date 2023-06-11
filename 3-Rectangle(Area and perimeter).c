#include <stdio.h>

int main()
{

    float length, breadth, area, perimeter;

    printf("\nEnter the length of rectangle:   ");
    scanf("%f", &length);
    if (length <= 0) {
        printf("\n[ERROR]: length cannot be negative or zero.\n");
        return -1;
    } 

    printf("\nEnter the breadth of rectangle:   ");
    scanf("%f", &breadth);
    if (breadth <= 0) {
        printf("\n[ERROR]: breadth cannot be negative or zero.\n");
        return -1;
    } 

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("\nThe Area of the rectangle is:    %f.\nAnd the perimter of the recatngle is:   %f.\n", area, perimeter);

    return 0;

}