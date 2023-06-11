#include <stdio.h>


int main() {

    float num1, num2;

    printf("Enter Two numbers: \n");
    scanf("%f %f", &num1, &num2);

    printf("\nThe Largest Of Two Numbers '%.2f' and '%.2f' is = %0.2f\n", num1, num2, (num1 > num2) ? num1 : num2);

    return 0;

}