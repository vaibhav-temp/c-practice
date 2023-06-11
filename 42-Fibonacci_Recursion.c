#include <stdio.h>

int Fibonacci_Series(int n)
{
    if (n == 0)
        return 0;
    
    else if (n == 1)
        return 1;

    else
        return Fibonacci_Series(n - 1) + Fibonacci_Series(n - 2);


}
    

int main() {

    printf("\nEnter the number of elements to be in the series : ");
    int n;
    do {
        scanf("%i", &n);
        if (n <= 0)
            printf("\n[Error]Number of elements can only be natural numbers.\nPlease re-enter number of elements: ");
    } while (n <= 0);

    printf("\nFirst %d elements in Fibonacci Series are : ", n);

    for (int i = 0; i < n; i++)
    {
        printf("%d, ", Fibonacci_Series(i));
    }

    printf("\n");

    return 0;

}