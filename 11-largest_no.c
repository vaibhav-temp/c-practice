#include <stdio.h>


int main() {

    float num1, num2, num3;

    printf("Enter three numbers: \n");
    scanf("%f %f %f", &num1, &num2, &num3);

    if (num1 >= num2) {

        if (num1 >= num3)
            printf("%.2f is the largest number.\n", num1);
        else
            printf("%.2f is the largest number.\n", num3);
        if(num1 == num3)
            printf("And %.2f is equal to %.2f.\n", num1, num3);
    }

    else {
        if (num2 >= num3)
            printf("%.2f is the largest number.\n", num2);
        else
            printf("%.2f is the largest number.\n", num3);
        if(num2 == num3)
            printf("And %.2f is equal to %.2f.\n", num2, num3);
    }

    if(num1 == num2)
        printf("And %.2f is equal to %.2f.\n", num1, num2);


}