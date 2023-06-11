#include <stdio.h>

#define PI 3.14159265359


float Area_Circle(float r){
    return PI * r * r;
}


int main() {

    printf("\nEnter the Radius of circle to find its Area: ");
    
    float radius;
    do {
        scanf("%f", &radius);
        if (radius < 0)
            printf("\n[Error]Number entered is negative.\nPlease re-enter radius of circle: ");
    } while (radius < 0);
    

    printf("\nArea of Circle with radius '%.2f' is : %0.2f\n", radius, Area_Circle(radius));

    return 0;

}