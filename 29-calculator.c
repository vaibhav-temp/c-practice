#include <stdio.h>

int main()
{
    float a, b;
    char oprtr;

    printf("\nEnter number 1: ");
    scanf("%f", &a);
    
    printf("\nEnter number 2: ");
    scanf("%f", &b);

    printf("\nEnter Operator: ");

    start_switch:
    switch (oprtr = getchar())
    {
    case '/' :  
        if (b == 0){printf("\n[ZeroDivisionError]division with zero is not possible.\n"); return -1;}
        printf("\n%.2f %c %.2f = %.2f\n", a, oprtr, b, a / b); break;
    case '*' : printf("\n%.2f %c %.2f = %.2f\n", a, oprtr, b, a * b); break;
    case '%' : printf("\n%.2f %c %.2f = %.2f\n", a, oprtr, b, (int)a % (int)b); break;
    case '+' : printf("\n%.2f %c %.2f = %.2f\n", a, oprtr, b, a + b); break;
    case '-' : printf("\n%.2f %c %.2f = %.2f\n", a, oprtr, b, a - b); break;
    case '\n': goto start_switch; break;

    default: 
        printf("\n[Error]Invalid input.Please enter valid Operator: ");
        goto start_switch; break;
    }

}