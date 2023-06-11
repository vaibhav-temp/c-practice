#include <stdio.h>


long long Power(int base, int exponenet){
    long long result = 1;
    for (int i = 0; i < exponenet; i++){
        result *= base;
    }

    return result;
}


int main() {

    printf("\nEnter a Number : ");
    int base;
    scanf("%i", &base);

    printf("\nEnter a Exponent of the number : ");
    int exp;
    do {
        scanf("%i", &exp);
        if (exp <= 0)
            printf("\n[Error]Exponenet is only supported for natural numbers.\nPlease re-enter Exponenet: ");
    } while (exp <= 0);

    printf("\n'%d' raised to the power '%d' = '%lld'\n", base, exp, Power(base, exp));

    return 0;

}