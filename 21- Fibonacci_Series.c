#include <stdio.h>

void Fibonacci_Series(int n)
{
    int f1 = 0, f2 = 1;
    printf("Fibonacci Series upto '%d' :\n%d %d ", n, f1, f2);
    while (f2 + f1 < n){
        int f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
        printf("%d ", f3);
    }
    
}

int main() {

    printf("\nEnter a Range : ");
    int n;
    do {
        scanf("%i", &n);
        if (n <= 0)
            printf("\n[Error]Range of Fibonacci Series can only be natural numbers.\nPlease re-enter Range: ");
    } while (n <= 0);

    Fibonacci_Series(n);
    printf("\n");

    return 0;

}