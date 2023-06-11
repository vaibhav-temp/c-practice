#include <stdio.h>

float Fahrenheit_To_Centigrade(float value)
{
    return (value - 32.f) * 5.f/9.f;
}

float Centigrade__To_Fahrenheit(float value)
{
    return (value * 9.f/5.f) + 32.f;
}


int main()
{
    float value;

    printf("\nEnter the value of Fahrenheit or Centigrade:  ");
    scanf("%f", &value);

    printf("\n\n[HINT]:\tTo convert from Fahrenheit to Centigrade, Press 1\n");
    printf("\tAnd to convert from Centigrade To Fahrenheit, Press 2\n\n");

    int a = getchar();
    while (a == '\n')
        a = getchar();

    
    if (a == '1'){
        printf("\n%.2f F = %.2f C\n", value, Fahrenheit_To_Centigrade(value));
    }
    else if (a == '2'){
        printf("\n%.2f C = %.2f F\n", value, Centigrade__To_Fahrenheit(value));
    }
    else{
        printf("[ERROR]: Invalid input. Please input 1 or 2 only\n");
        return -1;
    }

    return 0;
}