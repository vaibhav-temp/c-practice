#include <stdio.h>


long long Factorial(int n){
    if (n <= 1)
        return 1;
    else
        return n * Factorial(n - 1);
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