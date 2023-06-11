#include <stdio.h>


int main() {

    printf("\nEnter a Number with 3 or more digits : ");
    int num;
    do {
        scanf("%i", &num);
        if (num / 100 == 0)
            printf("\n[Error]Number Entered Must Be Three Digit Number Or More.\nPlease re-enter Number: ");
    } while (num / 100 == 0);

    printf("\nSum of Digits of Number '%d' = ", num);


    int sum = 0;

    do {
        sum += num % 10;
        num /= 10;
    } while (num > 0);
    
    printf("%d\n", sum);

    return 0;

}