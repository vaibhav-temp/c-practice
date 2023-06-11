#include <stdio.h>
#include <stdbool.h>


bool isPrime(int n)
{
    if (n == 1 || n == 0)
        return false;
 
    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {

    printf("\nEnter a Range : ");
    int n;
    do {
        scanf("%i", &n);
        if (n <= 0)
            printf("\n[Error]Range can only be natural numbers.\nPlease re-enter Range: ");
    } while (n <= 0);



    printf("\nPrime numbers between 1 and '%d' are:\n", n);

    for (int i = 1; i <= n; i++) {
        if (isPrime(i))
            printf("%d ", i);
    }

    printf("\n");

    return 0;

}