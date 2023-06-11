#include <stdio.h>


unsigned long long Factorial(int n){
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++){
        fact *= i;
    }

    return fact;
}


int main() {

    int x, n;
    printf("\nEnter the value of X: ");
    do {
        scanf("%i", &x);
        if (x == 0)
            printf("\n[Error]X cannot be zero.\nPlease re-enter X: ");
    } while (x == 0);

    printf("\nEnter the value of N: ");
    do {
        scanf("%i", &n);
        if (n <= 0)
            printf("\n[Error]N cannot be zero or negative.\nPlease re-enter N: ");
    } while (n <= 0);

    float sum = x;

    for (int i = 2; i <= n; i+=2){
        sum += ((float)x / Factorial(i));
    }
    

    printf("\nFor series: Sum = X + X/2! + X/4! + ... X/N!\n");
    printf("\nfor X = '%d' and N = '%d' sum = %.2f\n", x, n, sum);

    return 0;

}