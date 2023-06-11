#include <stdio.h>


unsigned long long Factorial(int n){
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++){
        fact *= i;
    }

    return fact;
}


int main() {

    printf("\nEnter a Number to find factorial of: ");
    
    int a;
    do {
        scanf("%i", &a);
        if (a <= 0)
            printf("\n[Error]Number entered is zero or negative.\nPlease re-enter natural number: ");
    } while (a <= 0);
    

    printf("\nFactorial of number '%d' is = '%lld'\n", a, Factorial(a));

    return 0;

}